long binary(long source)
{ long t = 0, d = 1;
      while (source > 0)
    {
        t += (source % 2) * d;
        source = source / 2;
        d = d * 10; // razryad
    }
    return t;
}

void setup() {
    int a = 3;
    //3 5 6 9 10 11
    pinMode(13, OUTPUT);
    while(a < 12)
    {
      pinMode(a, OUTPUT);
      a++;
    }
    Serial.begin(9600);
}

void loop() {
  bool flag = true;
//digitalWrite(2, HIGH);
  long prihod = 0, t;
  int a = 3;
  long source = 0;
  while (flag)
  {
    
  source = Serial.read();
  if( source > 47 && source <= 57)
  {
  prihod = (prihod * 10) + (source - 48);
  source = 0;
  }
  else flag = false;
  }
  Serial.println(prihod);
  delay (1000);
  if(prihod >= 1024)
  {
    tone(13, 600);
  }

  
    t = binary(prihod);  
    while(t > 0)
    {
      if(t % 10 == 1)
        {
          digitalWrite(a, HIGH);
        }
        else digitalWrite (a, LOW);
       t = t / 10;
        a++;
    }
}

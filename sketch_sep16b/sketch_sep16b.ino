void setup() {
    int a = 3;
    while(a < 12)
    {
      pinMode(a, OUTPUT);
      a++;
    }
    Serial.begin(9600);
}

void loop() {
      long t = 0, d = 1;
digitalWrite(2, HIGH);
  
  int a = 3;
  long source = 0;
  if (Serial.available() > 0)
  {
  source = Serial.readString().toInt();
  
     Serial.print(source);
    while (source > 0)
    {
        t += (source % 2) * d;
        source = source / 2;
        d = d * 10; // razryad
    }
    Serial.print(t);
  }
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

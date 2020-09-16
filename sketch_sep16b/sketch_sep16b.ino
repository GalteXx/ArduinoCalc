void setup() {
    int a = 3;
    while(a <= 12)
    {
      pinMode(a, OUTPUT);
      a++;
    }
}

void loop() {

  int a = 3;
  int source = 0;
  source = Serial.read();
    int t = 0, d = 1;
    while (source > 0)
    {
        t += (source % 2) * d;
        source = source / 2;
        d = d * 10; // razryad
    }
    while(t > 0)
    {
      if(t % 10 == 1)
        {
          digitalWrite(a, HIGH);
        }
        else digitalWrite (a, LOW);
        t = t % 10;
    }
}

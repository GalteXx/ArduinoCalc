void setup() {
       int a = 3;
    while(a < 12)
    {
      pinMode(a, OUTPUT);
      a++;
    }
}

void loop() {
  // put your main code here, to run repeatedly:
      int a = 3;
    while(a < 12)
    {
      digitalWrite(a, HIGH);
      a++;
    }
}



void __ardublockDigitalWrite(int pinNumber, boolean status)
{
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, status);
}


void setup()
{
}

void loop()
{
  __ardublockDigitalWrite(5, HIGH);
  delay( 1000 );
  __ardublockDigitalWrite(5, LOW);
  __ardublockDigitalWrite(6, HIGH);
  delay( 1000 );
  __ardublockDigitalWrite(6, LOW);
  __ardublockDigitalWrite(7, HIGH);
  delay( 1000 );
  __ardublockDigitalWrite(7, LOW);
}

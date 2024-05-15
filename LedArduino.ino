int _ABVAR_1_tmp = 0 ;
void __ardublockDigitalWrite(int pinNumber, boolean status)
{
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, status);
}


void setup()
{
  _ABVAR_1_tmp = 100 ;

}

void loop()
{
  __ardublockDigitalWrite(8, HIGH);
  delay( _ABVAR_1_tmp );
  __ardublockDigitalWrite(8, LOW);
  delay( _ABVAR_1_tmp );
  __ardublockDigitalWrite(9, HIGH);
  delay( _ABVAR_1_tmp );
  __ardublockDigitalWrite(9, LOW);
  delay( _ABVAR_1_tmp );
  __ardublockDigitalWrite(10, HIGH);
  delay( _ABVAR_1_tmp );
  __ardublockDigitalWrite(10, LOW);
  delay( _ABVAR_1_tmp );
  __ardublockDigitalWrite(11, HIGH);
  delay( _ABVAR_1_tmp );
  __ardublockDigitalWrite(11, LOW);
  delay( _ABVAR_1_tmp );
  __ardublockDigitalWrite(12, HIGH);
  delay( _ABVAR_1_tmp );
  __ardublockDigitalWrite(12, LOW);
  delay( _ABVAR_1_tmp );
    delay( _ABVAR_1_tmp );
  __ardublockDigitalWrite(13, HIGH);
  delay( _ABVAR_1_tmp );
  __ardublockDigitalWrite(13, LOW);
  delay( _ABVAR_1_tmp );
}



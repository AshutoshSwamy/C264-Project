void setup()
{
  Serial.begin(9600);
}

void loop()
{
  String state = String(digitalRead(2));
  Serial.print(state);
  delay(500);
}
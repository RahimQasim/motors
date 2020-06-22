void setup()
{
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay(10); // Delay a little bit to improve simulation performance
}
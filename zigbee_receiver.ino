int value;
void setup() 
{
  Serial.begin(9600);
}

void loop() {
    if (Serial.available())
    {
      value=Serial.read();
      Serial.println(value);
    }
 }

String value;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  value=Serial.readString();
  Serial.println(value);
}
  if(value=="on")
  {
    Serial.println("all system on");
  
    if(value=="go stright")
    {
      Serial.println(" two wheel will run");
    }
    if(value=="stop")
    {
      Serial.println(" two wheel will stop");
    }
    if(value=="left")
    {
      Serial.println("left wheel is stop");
    Serial.println("right wheel is run");
    }
   if(value=="right")
    {
      Serial.println("right wheel is stop");
    Serial.println("left wheel is run");
  }
}
if(value=="off")
{
  Serial.println(" all system off");
}
}

char value;
void setup() {
  // put your setup code here, to run once:
 
  //pinMode(3,OUTPUT);
  Serial.begin(9600);

}

void loop() {
    if (Serial.available())
    {
      value=Serial.read();
      Serial.write(value);
    }
    
 }

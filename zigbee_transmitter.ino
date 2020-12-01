String value0;
String value1;
void setup() 
{
  pinMode(4,INPUT);
  pinMode(5,INPUT);
Serial.begin(9600);
}

void loop() 
{
  value0 = digitalRead(4);
  value1 = digitalRead(5);
   if(value0==HIGH){  
      Serial.println('0');
   }
   if(value1==HIGH){  
      Serial.println('1');
   }
}

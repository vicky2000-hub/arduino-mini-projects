String value;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
   Serial.begin(9600);
}
void loop() {
   if (Serial.available())
    {
      value=Serial.readString();
      Serial.println(value);
    if(value=="0"){
      
       digitalWrite(13,HIGH);
       digitalWrite(12,HIGH);
       digitalWrite(11,HIGH);
       digitalWrite(10,HIGH);
       digitalWrite(9,HIGH);
       digitalWrite(8,HIGH);
       digitalWrite(7,LOW);
       delay(500);
    }
    if(value=="1"){
digitalWrite(13,LOW);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
delay(500);
}
    if(value=="2"){
digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
delay(500);
    }
        if(value=="3"){
digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
delay(500);
        }
            if(value=="4"){
digitalWrite(13,LOW);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
delay(500);
            }
                if(value=="5"){
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
delay(500);
                }
                    if(value=="6"){
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
         delay(500);
                    }
 if(value=="7"){          
         digitalWrite(13,HIGH);
         digitalWrite(12,HIGH);
         digitalWrite(11,HIGH);
         digitalWrite(10,LOW);
         digitalWrite(9,LOW);
         digitalWrite(8,LOW);
         digitalWrite(7,LOW);
         delay(500);
              }
 if(value=="8"){
        digitalWrite(13,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(7,HIGH);
        delay(500);
 }
                                   }
    if(value=="9")
    {
      
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(7,HIGH);
      delay(500);
    }
                     

}

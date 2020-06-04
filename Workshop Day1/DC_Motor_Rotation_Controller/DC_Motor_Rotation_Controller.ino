void setup(){
 pinMode(9,OUTPUT);
 pinMode(5,OUTPUT); 
 pinMode(3, OUTPUT);
  
}

void loop(){
  analogWrite(3, 255);
   digitalWrite(9,HIGH);
   digitalWrite(5,LOW);

   delay(1000);
   
   digitalWrite(9,HIGH);
   digitalWrite(5,HIGH);
  
   delay(1000);
  
   digitalWrite(9,LOW);
   digitalWrite(5,HIGH); 
   
   delay(1000);
}

#include<Servo.h>

Servo servo;

void setup(){
  servo.attach(9);
  Serial.begin(9600);
}

void loop(){
  
  int val=analogRead(A2);
  //servo.write(val);
  if(val>400){
    delay(10);
    for(int i=0;i<=90;i++){
       servo.write(i);
       delay(5);
    }
    //delay(100);
       for(int j=90;j>=0;j--){
         servo.write(j);
         delay(5);

           //delay(100);
         
       }
       delay(100);
    
    /*for(int i=90;i>=0;i--){
       servo.write(i);
       delay(2);
    }*/
    
  }
  else
    servo.write(0);
    
 
    Serial.println(val);
}

#include <Ultrasonic.h>

Ultrasonic ultrasonic(7, 8);
void setup()
{
 Serial.begin(9600);
 pinMode(9,OUTPUT);
 pinMode(11,OUTPUT);
}

void loop()
{
  long d = ultrasonic.getDistance();
  Serial.println(d);
 if(d>15) {digitalWrite(9,LOW);digitalWrite(11,LOW);}
  else if(d>11) {digitalWrite(9,LOW); digitalWrite(11,HIGH); delay(100); digitalWrite(11,LOW); delay(100);}
 else if(d>6) {digitalWrite(9,LOW); digitalWrite(11,HIGH); delay(20); digitalWrite(11,LOW); delay(20);}
else {digitalWrite(9,HIGH); digitalWrite(11,HIGH); delay(20); digitalWrite(11,LOW); delay(20);}
} 

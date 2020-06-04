void setup(){
 pinMode(12,INPUT_PULLUP);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(13,OUTPUT);
 Serial.begin(9600);
 }
 
int btnval=1;
int prev=2;
 
void loop(){
  btnval = digitalRead(12);
  Serial.println(btnval);
  if(!btnval) {
    while(!btnval)
      btnval = digitalRead(12);
      prev=(++prev)%3;
   }
 
 
   if(prev==0) {
     digitalWrite(7,HIGH);
     digitalWrite(13,LOW);
   }
   else if(prev==1){
     digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
 }
 else if(prev==2){
   digitalWrite(8,LOW);
   digitalWrite(13,HIGH);
 }
  
}

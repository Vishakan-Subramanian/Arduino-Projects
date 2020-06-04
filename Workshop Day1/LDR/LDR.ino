void setup(){
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(5,OUTPUT);
 
} 
  
void loop(){
  int val;
  val=analogRead(A2);
  Serial.println(1024-val);
  val=1024-val;
  if(val>=510){
   analogWrite(3,255);
   analogWrite(10,val-510);
   analogWrite(5,255); 
  }
  
  else if(val>=255){
     analogWrite(3,255);
     analogWrite(10,0);
     analogWrite(5,val-255); 
  }
  else{
    analogWrite(3,val);
    analogWrite(10,0);
    analogWrite(5,0);
  }
  //if(val>700)
    //analogWrite(10,LOW);
  
  
  
}




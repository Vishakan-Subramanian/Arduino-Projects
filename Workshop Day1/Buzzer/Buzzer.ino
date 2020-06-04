void setup(){
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

  
void loop(){
  int val;
  val=analogRead(A2);
  Serial.println(1024-val);
  val=1024-val;
  /*
  if(val>=510){
   analogWrite(3,255);
 
  }
  
  else if(val>=255){
     analogWrite(3,255);
     
  }
  else{
    analogWrite(3,val);
   
  }*/
  
  for(int i=0;i<255;i++)
    analogWrite(3,i);
  for(int i=255;i>=0;i++)
    analogWrite(3,i);
}


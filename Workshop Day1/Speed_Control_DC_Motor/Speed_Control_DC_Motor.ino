void setup(){
 pinMode(9,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(12, INPUT_PULLUP);
 pinMode(6, INPUT_PULLUP);
 Serial.begin(9600);
}

int bval=0;

void loop(){
  int s1=0,s2,val;
  while(!s1){
   s1= digitalRead(12);
  s2= digitalRead(6);
  Serial.println(bval);
   bval=(++bval)%3;
    
  
  }  //Serial.println(s1);
speedControl(bval);
  /*if){
    //while(!s1);
    Serial.println(bval);
    bval=(++bval)%3;
    speedControl(bval);
  }*/
  
  
}

void speedControl(int b){
 if(b==0){
   digitalWrite(9,0);
   digitalWrite(5,0);
 }

 else if(b==1){
   digitalWrite(9,1);
   digitalWrite(5,0);
   analogWrite(3,50);
   
 }

 else if(b==2){
   digitalWrite(9,1);
   digitalWrite(5,0);
   analogWrite(3,100);
   
 }
 
 
} 
  
  
  //pls check
 


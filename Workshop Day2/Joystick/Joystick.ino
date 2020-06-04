int a[]={3,4,6,8,9,10,12,13};
void setup(){
  Serial.begin(9600);
  //pinMode(,OUTPUT);
  for(int i=0;i<8;i++)  mode(a[i]);
}

 void mode(int i) {
  pinMode(i,OUTPUT);
}
void loop(){
  int x=analogRead(A1);
  int y=analogRead(A2);
  
  Serial.print(x);
  Serial.print("\t");
  Serial.println(y);
  
  
  
  if(x==1023 && (y>=474 && y<=477)) {digitalWrite(8,HIGH); for(int i=0;i<8;i++)off(a[i],8);}
  else if(x==0 && (y>=474 && y<=477)) {digitalWrite(9,HIGH); for(int i=0;i<8;i++)off(a[i],9);}
 else if(x==496 && y==0) {digitalWrite(4,HIGH); for(int i=0;i<8;i++)off(a[i],4);}
 else if(x==496 && y>=985) {digitalWrite(12,HIGH); for(int i=0;i<8;i++)off(a[i],12);}
 else if(x==0 && y>=985) {digitalWrite(10,HIGH); for(int i=0;i<8;i++)off(a[i],10);}
  else if(x==1023 && y>=985) {digitalWrite(13,HIGH); for(int i=0;i<8;i++)off(a[i],13);}
   else if(x==1023 && y==0) {digitalWrite(3,HIGH); for(int i=0;i<8;i++)off(a[i],3);}
    else if(x==0 && y==0) {digitalWrite(6,HIGH); for(int i=0;i<8;i++)off(a[i],6);}
  else if(x==496 && (y>=474 && y<=477)) {for(int i=0;i<8;i++) off(a[i],-1);}


  
  
}
  
  void off(int i,int b){
    if(i!=b)
      digitalWrite(i,LOW);
  }
  

void setup(){
  pinMode(5,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(3, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop(){
  int l1=digitalRead(3);
  int l2=digitalRead(8);
  Serial.println(l1);
  if(l1==0 && l2)
    digitalWrite(5,HIGH);
  if(l2==0 && l1)
    digitalWrite(12,HIGH);
    
}

//not working pls check

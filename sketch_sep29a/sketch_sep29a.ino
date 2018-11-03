void setup(){
  pinMode(A0,INPUT);
  Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
if (analogRead(A0)>500){
digitalWrite(13,HIGH);  
}
else{
digitalWrite(13,LOW);
       }
}

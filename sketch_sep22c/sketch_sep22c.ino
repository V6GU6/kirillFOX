int world;
 
void setup(){
 Serial.begin(9600);
 pinMode(13,OUTPUT);
}
void loop() {
  if(Serial.available()>0){
world = Serial.read();
if (world=='1'){
  digitalWrite(13,HIGH);
}
if (world=='2'){
  digitalWrite(13,LOW);
         }
       }
}

int i;
void setup(){
pinMode(11,OUTPUT);
}


void loop(){
i=random(101,250);
analogWrite(11,i);
delay(1000);

}





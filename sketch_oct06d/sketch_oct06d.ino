int c;
int x;
void setup() {
pinMode(3,OUTPUT);
pinMode(A1,INPUT);
Serial.begin(9600);
}

void loop() {
 x = analogRead(A1);
Serial.println(x);
c = x/4;
analogWrite(3,c);

}

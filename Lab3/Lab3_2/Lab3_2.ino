void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12,OUTPUT);
}

void loop() {
int i  = 1000;
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
delay(i);
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
delay(i);
}

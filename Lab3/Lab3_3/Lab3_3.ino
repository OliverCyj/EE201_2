void setup() {
  // put your setup code here, to run once:
  pinMode(0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(0) == LOW) {
    Serial.println("It's 2023");
  } else {
    Serial.println("Hello World!");
  }
}

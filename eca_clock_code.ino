//clock set for CS441 project

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); //set clock high
  delay(500); //wait for .5s
  digitalWrite(13, LOW);  //set clock low
  delay(500); //wait for .5s
}

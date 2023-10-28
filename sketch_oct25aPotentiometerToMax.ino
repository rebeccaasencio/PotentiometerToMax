//define potentiometer value
int potVal;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // pot val pin
  potVal = analogRead(A0);
  // map max and min values to rgb
  potVal = map(potVal, 0, 1023, 0, 255);
  //print values
  Serial.println(potVal);
  delay(100);
}

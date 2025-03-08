void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Function Setup: Hello World");
  Serial.println("Function Setup: Hello World + New Line");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  Serial.println(millis());
}

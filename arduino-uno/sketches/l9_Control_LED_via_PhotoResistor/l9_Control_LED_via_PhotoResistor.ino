const int LED_PIN = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int photoSensorValue = analogRead(A0);
  // Serial.println(photoSensorValue);
  if(photoSensorValue > 350){
    Serial.print("Low Light | Sensor Value : ");
    Serial.println(photoSensorValue);
    digitalWrite(LED_PIN, HIGH);
  } else {
    Serial.print("Normal Light | Sensor Value : ");
    Serial.println(photoSensorValue);
    digitalWrite(LED_PIN, LOW);
  }
  // digitalWrite(LED_PIN, HIGH);
  // digitalWrite(LED_PIN, LOW);
  delay(500);
}

int LED_PWM_PIN = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PWM_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int POT_VALUE = analogRead(A0);
  int MAPPED_POT_VALUE = map(POT_VALUE, 0, 1023, 0, 255);
  Serial.println(MAPPED_POT_VALUE);
  analogWrite(LED_PWM_PIN, MAPPED_POT_VALUE);
}

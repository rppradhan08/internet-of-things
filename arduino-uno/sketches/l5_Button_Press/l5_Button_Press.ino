int buttonState = 0;
int pin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(pin);

  // Serial.println(buttonState);
  if (buttonState == HIGH) {
    Serial.println("Button Pressed Input Voltage: HIGH");
  } else {
    Serial.println("Input voltage: LOW");
  }
}

const int LIMIT = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i < LIMIT; i++){
    if(i < 5){
      Serial.println("Number is less than 5");
      delay(500);
    }else{
      Serial.println("Number is greater than 5");
    }
    delay(1500);
  }
}

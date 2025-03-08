void setup() {
  // put your setup code here, to run once:
  // Initialize the serial communication
  Serial.begin(9600);
  
  int NUM_1 = 10;
  int NUM_2 = 6;
  // Calling function with no return statement
  Serial.println("\nCalling Custom Function 1....");
  userFunc1(NUM_1, NUM_2);

  int result;
  // Calling function with no return statement
  Serial.println("Calling Custom Function 2....");
  result = userFunc2(NUM_1, NUM_2);
  Serial.println(result);
}

void loop() {
  // put your main code here, to run repeatedly:
}

void userFunc1(int num_1, int num_2){
  // User defined function to add 2 integers
  Serial.println(num_1 + num_2);
}

int userFunc2(int num_1, int num_2){
  // User defined function to multiply 2 integers
  return num_1 * num_2;
}
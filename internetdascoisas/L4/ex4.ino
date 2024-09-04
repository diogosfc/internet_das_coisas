// C++ code
//
int led1 = 10;
int led2 = 11;
int led3 = 9;
  
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
};

 void loop() {
  digitalWrite(led3, LOW);
   digitalWrite(led1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(led2, HIGH);
   digitalWrite(led1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(led3, HIGH);
   digitalWrite(led2, LOW);
   delay(1000);
 };
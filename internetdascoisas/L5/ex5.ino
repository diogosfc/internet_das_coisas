int led1 = 10;
int led2 = 11;
int led3 = 9;
int button = 2;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(button);
  if (buttonState == HIGH) {
    botaoApertado();
  } else {
    botaoNaoApertado();
  }
}

void botaoApertado() {

    digitalWrite(led1, LOW);
    digitalWrite(led3, HIGH);
    delay(3000);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      delay(3000);
      digitalWrite(led1, HIGH);
      digitalWrite(led3, LOW);
      delay(3000);
    
  
}

void botaoNaoApertado(){
  int buttonState = digitalRead(button);
  digitalWrite(led3, LOW);
  digitalWrite(led1, HIGH);
  delay(100);
  
  if(buttonState == HIGH){ return; };
   digitalWrite(led2, HIGH);
   digitalWrite(led1, LOW);
  
  delay(100);
  if(buttonState == HIGH){ return; };
   digitalWrite(led3, HIGH);
   digitalWrite(led2, LOW);
 
  delay(100);
  ttonState == HIGH){ return; };
}

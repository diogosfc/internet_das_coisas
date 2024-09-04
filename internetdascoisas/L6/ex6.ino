// C++ code
//
//

int led=11;
int potenciometro = A0;

void setup(){
  pinMode(led, OUTPUT);
};

void loop(){
  int valorPotenciometro = analogRead(potenciometro);    
  int brilhoLED = map(valorPotenciometro, 0, 1023, 0, 255);
  analogWrite(led, brilhoLED); 
  
  delay(10);
}
// C++ code
//

int led=11;
int fotoresistor = A0;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(fotoresistor, INPUT);
};

void loop(){
  int fotoresistorValor = analogRead(fotoresistor);    
  if(fotoresistorValor >= 1022){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
}
}
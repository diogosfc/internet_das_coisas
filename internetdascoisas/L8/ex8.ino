// C++ code
//
int buzzer = 11;
int sensorPin = A0;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  float sensorTempValue = analogRead(sensorPin);
  float temperaturaC = sensorTempValue * 5.0 / 1024.0;
  temperaturaC = (temperaturaC - 0.5) * 100;
  temperaturaC = round(temperaturaC);

  if (temperaturaC > 90.0) {
    digitalWrite(buzzer, HIGH);
    Serial.println("ALERTA: Temperatura critica!");
    Serial.print("Temperatura: ");
    Serial.print(temperaturaC);
    Serial.println(" °C");
  } else if (temperaturaC > 30.0) {
    Serial.println("Alerta: Temperatura alta.");
    Serial.print("Temperatura: ");
    Serial.print(temperaturaC);
    Serial.println(" °C");
    digitalWrite(buzzer, LOW);
  } else {
    digitalWrite(buzzer, LOW);
  }

  delay(1000);
}

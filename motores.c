// Defina os pinos do módulo L298N conectados ao Arduino
const int motorPin1 = 5;   // Pino IN1 no módulo L298N
const int motorPin2 = 6;   // Pino IN2 no módulo L298N

void setup() {
  // Configure os pinos como saídas
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  // Gire o motor para a frente em velocidade média
  analogWrite(motorPin2, 0);
  analogWrite(motorPin1, 255); // Define uma velocidade média

  // Aguarde alguns segundos
  delay(2000);

  // Gire o motor para trás em velocidade média
  digitalWrite(motorPin1, LOW);
  analogWrite(motorPin2, 100); // Define uma velocidade média

  // Aguarde alguns segundos
  delay(2000);

  // Pare o motor
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);

  // Aguarde alguns segundos
  delay(2000);
}

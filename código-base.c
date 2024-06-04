// Defina os pinos do módulo L298N conectados ao Arduino
const int motorPin1 = 5; // Conectar a IN1 no módulo L298N
const int motorPin2 = 6; // Conectar a IN2 no módulo L298N

void setup() {
  // Configure os pinos como saídas
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Gire o motor para a frente
  analogWrite(motorPin1, HIGH);
  analogWrite(motorPin2, LOW);
  Serial.println("motor");

  // Aguarde alguns segundos
  delay(2000);

  // Pare o motor
  analogWrite(motorPin1, LOW);
  analogWrite(motorPin2, LOW);

  // Aguarde alguns segundos
  delay(2000);

  // Gire o motor para trás
  analogWrite(motorPin1, LOW);
  analogWrite(motorPin2, HIGH);

  // Aguarde alguns segundos
  delay(2000);

  // Pare o motor
  analogWrite(motorPin1, LOW);
  analogWrite(motorPin2, LOW);

  // Aguarde alguns segundos
  delay(2000);
}

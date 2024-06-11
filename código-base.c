#include <Servo.h>

// Defina os pinos do módulo L298N conectados ao Arduino
const int motorPin1 = 5; // Conectar a IN1 no módulo L298N
const int motorPin2 = 6; // Conectar a IN2 no módulo L298N

Servo myservo;  // create servo object to control a servo

void setup() {
  // Configure os pinos como saídas
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  myservo.attach(2);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
  myservo.write(90);  // sets the servo position according to the scaled value
}

void loop() {
  // Gire o motor para a frente
  myservo.write(90); //0 // sets the servo position according to the scaled value
  delay(250);
  analogWrite(motorPin1, 255);
  analogWrite(motorPin2, 0);

  // Aguarde alguns segundos
  delay(2000);

  // Pare o motor
  myservo.write(0); //-1 // sets the servo position according to the scaled value
  delay(250);
  analogWrite(motorPin1, 255);
  analogWrite(motorPin2, 0);
  // Aguarde alguns segundos
  delay(2000);

  // Gire o motor para trás
  myservo.write(90); //0 // sets the servo position according to the scaled value
  delay(250);
  analogWrite(motorPin1, 255);
  analogWrite(motorPin2, 0);

  // Aguarde alguns segundos
  delay(2000);

  // Pare o motor
  myservo.write(180); //1  // sets the servo position according to the scaled value
  delay(250);
  analogWrite(motorPin1, 255);
  analogWrite(motorPin2, 0);

  // Aguarde alguns segundos
  delay(2000);
}

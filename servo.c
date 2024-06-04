#include <QTRSensors.h>
#include <Servo.h>

QTRSensors qtr;

const uint8_t SensorCount = 8;
uint16_t sensorValues[SensorCount];

#define time 0

#define IN1 5
#define IN2 6

Servo myservo;  // create servo object to control a servo

void setup() {
  // configure the sensors
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  analogWrite(IN2, 0);

  myservo.attach(2);  // attaches the servo on pin 9 to the servo object


  delay(500);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);  // turn on Arduino's LED to indicate we are in calibration mode

  digitalWrite(LED_BUILTIN, LOW);  // turn off Arduino's LED to indicate we are through with calibration

  // print the calibration minimum values measured when emitters were on
  Serial.begin(9600);
  

  delay(1000);
}

void loop() {

    // analogWrite(IN1, 100);
    // analogWrite(IN2, 0);


    // delay(1000);


    myservo.write(65);  // sets the servo position according to the scaled value

    delay(250);

    // analogWrite(IN1, 100);
    // analogWrite(IN2, 0);

    // delay(1000);

    myservo.write(115);  // sets the servo position according to the scaled value
    delay(250);
}

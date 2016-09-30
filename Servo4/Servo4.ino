#include <Servo.h>

Servo myservo;
int pos = 0;
const int sensor = A0; 
float temperatura = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
  temperatura = (float(analogRead(sensor))*5/(1023))/0.01;
  pos = map(temperatura, 26, 30, 0, 179);
  Serial.println(temperatura);
  myservo.write(pos);
  delay(1000);
}

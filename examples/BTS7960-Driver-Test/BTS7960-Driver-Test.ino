#include <BTS7960.h>

#define LPWM 5
#define RPWM 6

BTS7960 motor(LPWM, RPWM);

void setup() {
  Serial.begin(9600);
  motor.init();
}

void loop() {
  motor.setPWM(150); //Rotate forward with 150 PWM value
  delay(5000);
  motor.setPWM(0);   //Stop
  delay(3000);
  motor.setPWM(-200);   //Rotate backward with 200 PWM value
  delay(3000);
}

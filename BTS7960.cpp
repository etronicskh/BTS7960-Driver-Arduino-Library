#include "BTS7960.h"

BTS7960::BTS7960(uint8_t LPWM, uint8_t RPWM): _lpwm(LPWM), _rpwm(RPWM){

}


void BTS7960::init() {  
  pinMode(_lpwm, OUTPUT);
  pinMode(_rpwm, OUTPUT);
  digitalWrite(_lpwm, LOW);
  digitalWrite(_rpwm, LOW);
}

void BTS7960::setPWM(int PWM){
  if(PWM > 0){
    analogWrite(_rpwm, PWM);
    digitalWrite(_lpwm, LOW);
  }else if(PWM < 0){
    digitalWrite(_rpwm, LOW);
    analogWrite(_lpwm, abs(PWM));
  }else{
    digitalWrite(_lpwm, LOW);
    digitalWrite(_rpwm, LOW);
  }
}

#ifndef BTS7960_H
#define BTS7960_H

#include "Arduino.h"

class BTS7960
{
  public:
    BTS7960(uint8_t LPWM, uint8_t RPWM);
    void init();
    void setPWM(int PWM);
    
  private:         
        const uint8_t _lpwm;
        const uint8_t _rpwm;
};


#endif

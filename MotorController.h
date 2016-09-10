#ifndef __MOTOR_H__
#define __MOTOR_H__

#include "Delay.h"

enum MotorDirection {
  Forward,
  Backward
};

class Motor
{
  unsigned long change_by;
  unsigned char target_speed;
  boolean changing_speed;
  
  protected:
    unsigned char speed;
    MotorDirection direction;
  public:
    void setSpeed(unsigned char speed);
    void setDirection(MotorDirection direction);
    
    template<unsigned int AMOUNT>
    void setSpeed(unsigned char speed, Delay<MILLISECONDS, AMOUNT> over_ms);
    
};

void Motor::setSpeed(unsigned char speed) { this->speed = speed; }
void Motor::setDirection(MotorDirection direction) { this->direction = direction; }

template<unsigned int AMOUNT>
void Motor::setSpeed(unsigned char target_speed, Delay<MILLISECONDS, AMOUNT> over_ms)
{
  // fill this in
}

#endif

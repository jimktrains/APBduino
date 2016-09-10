#ifndef __DELAY_H_
#define __DELAY_H_

enum TimeUnits
{
  MILLISECONDS = 1,
  SECONDS = 1000
};

template<TimeUnits UNIT, unsigned int AMOUNT>
class Delay
{
  public:
    constexpr static unsigned long milliseconds = UNIT * AMOUNT;
};

#endif

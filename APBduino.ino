#include "Blink.h"
#include "BinarySensor.h"
#include "Track.h"
#include "Delay.h"

Blink blinker = Blink(8, 500, 250);
Blink fastBlinker = Blink(8, 100, 50);
constexpr unsigned int bounces[2][2] = {{10, 300}, {10, 3000}};
BinarySensor<2> irSensor = BinarySensor<2>(6, bounces);

// int x[1] = {1};
// TrackBlock<1> block = TrackBlock<1>(x);

void setup() {
  Serial.begin(9600);
  Serial.println("Begin");
}

void loop(){
  blinker.run();
  fastBlinker.run();
  irSensor.run();

  static unsigned int carCount = 0;
   
  BinarySensorState carPresent = irSensor.value(0);
  BinarySensorState trainPresent = irSensor.value(1);

  if (carPresent == BinarySensorState::Rising)
  {
    carCount++;
    fastBlinker.blink(1);
    if (carCount == 1)
    {
      Serial.println(F("New Train!"));
    }
    else
    {
      Serial.print(F("Car: "));
      Serial.println(carCount);
    }
  }

  if (trainPresent == BinarySensorState::Falling)
  {
    blinker.blink(carCount);
    Serial.println(F("Train Passed :("));
    carCount = 0;
  }
}

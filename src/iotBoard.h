#ifndef iotBoard_h
#define iotBoard_h

#include "Particle.h"
#include "Arduino.h"

class iotBoard{
  public:
    iotBoard(string boardType);
    bool input(int pinIn, string inputType);
    void output(int pinOut);
  private:
      
};
#endif


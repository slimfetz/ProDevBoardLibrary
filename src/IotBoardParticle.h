#ifndef iotBoard_h
#define iotBoard_h

#include "Particle.h"

class iotBoard{
  public:
    iotBoard(string boardType);
    bool input(int pinIn);
    void output(int pinOut);
  
  private:
    string _boardType;
      
};
#endif

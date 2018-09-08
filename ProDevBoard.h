#ifndef ProDevBoard_h
#define ProDevBoard_h

#include "Particle.h"

#define photon 1
#define electron 2
#define argon 3
#define boron 3
#define xenon 3
#define arduino 4

class ProDevBoard
{
  public:
    ProDevBoard(int board);
    bool ON(int pin);
    bool OFF(int pin);
   
  private:
      
};
#endif
//test

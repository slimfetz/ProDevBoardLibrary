#ifndef ProDevBoard_h
#define ProDevBoard_h

#include "Particle.h"

#define board_photon 1
#define board_electron 2
#define board_argon 3
#define board_boron 3
#define board_xenon 3
#define board_arduino 4

class ProDevBoard
{
  public:
    ProDevBoard(int board);
    bool ON(int pin);
    bool OFF(int pin);
   
  private:
      
};
#endif



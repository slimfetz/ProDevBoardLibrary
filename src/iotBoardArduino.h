#ifndef iotBoardArduino_h
#define iotBoardArduino_h

#include "Arduino.h"

class iotBoardArduino
{
  public:
    iotBoardArduino(String boardType);
    bool input(int pinIn);
    void output(int pinOut);
 
  private:
    String _boardType;
      
};
#endif


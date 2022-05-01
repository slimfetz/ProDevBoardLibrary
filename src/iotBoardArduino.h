#ifndef iotBoardArduino_h
#define iotBoardArduino_h

#include "Arduino.h"

class iotBoard{
  public:
    iotBoard(string boardType);
    bool input(int pinIn);
    void output(int pinOut);
 
  private:
    string = _boardType;
      
};
#endif


#ifndef iotBoardArduino_h
#define iotBoardArduino_h

#include "Arduino.h"

class iotBoard
{
  public:
    iotBoard(String boardType);
    bool input(int pinIn);
    void output(int pinOut);
 
  private:
    String _boardType;
      
};
#endif


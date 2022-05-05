
#include "iotBoard.h"

iotBoard::iotBoard(String boardType){
  
  _boardType = boardType;
  
}

bool iotBoard::inputDigital(int pinIn){
  if (digitalRead(pinIn) == HIGH){
    digitalReturn = true;
  }
  else {
    digitalReturn = false;
  }
  return digitalReturn;
}

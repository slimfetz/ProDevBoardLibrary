
#include "iotBoard.h"

iotBoard::iotBoard(String boardType){
  
  _boardType = boardType;
  
  if (boardType == "ArduinoMKR"){
    #include "ArduinoMKRSetup.h"
  }
  else if (boardType == "arduinoNano33"){
    #include "ArduinoNano33Setup.h"
  }
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

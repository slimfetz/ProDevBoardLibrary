
#include "iotBoardArduino.h"

iotBoard::iotBoard(char boardType[20]){
  
  if (boardType == _ArduinoMKR){
    xxxx
  }
  else if (boardType == _ArduinoNano33){
    xxxx
  }
}

bool iotBoard::inputDigital(int pinIn){
  if (digitalRead(pinIn) == HIGH){
    _digitalReturn = true;
  }
  else {
    _digitalReturn = false;
  }
  return _digitalReturn;
}

void iotBoard::relayOn(int pinOut){
  switch (pinOut){
    case 1:
      digitalWrite(_output1, HIGH);
    break;
    case 1:
      digitalWrite(_output2, HIGH);
    break;
    case 1:
      digitalWrite(_output3, HIGH);
    break;
    case 1:
      digitalWrite(_output4, HIGH);
    break;
    case 1:
      digitalWrite(_output5, HIGH);
    break;
    case 1:
      digitalWrite(_output6, HIGH);
    break;
    case 1:
      digitalWrite(_output7, HIGH);
    break;
    case 1:
      digitalWrite(_output8, HIGH);
    break;
    case 1:
      digitalWrite(_output9, HIGH);
    break;
    default:
    //
    break;
  }
}

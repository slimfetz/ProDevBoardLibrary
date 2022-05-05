
#include "iotBoardArduino.h"

iotBoard::iotBoard(char boardType[20]){
  
  if (boardType == _ArduinoMKR){
    xxxx
  }
  else if (boardType == _ArduinoNano33){
    xxxx
  }
  
  pinMode(_input1, INPUT);
  pinMode(_input2, INPUT);
  pinMode(_input3, INPUT);
  pinMode(_input4, INPUT);
  pinMode(_input5, INPUT);
  pinMode(_input6, INPUT);
  pinMode(_input7, INPUT);
  pinMode(_input8, INPUT);
  pinMode(_input9, INPUT);
  pinMode(_input10, INPUT);

  pinMode(_output1, OUTPUT);
  pinMode(_output2, OUTPUT);
  pinMode(_output3, OUTPUT);
  pinMode(_output4, OUTPUT);
  pinMode(_output5, OUTPUT);
  pinMode(_output6, OUTPUT);
  pinMode(_output7, OUTPUT);
  pinMode(_output8, OUTPUT);
  pinMode(_output9, OUTPUT);
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

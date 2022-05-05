
#include "iotBoardArduino.h"

iotBoard::iotBoard(char boardType[20]){
  
  if (boardType == _ArduinoMKR){
    _input1 = A0;
    _input2 = A1;
    _input3 = A2;
    _input4 = A3;
    _input5 = A4;
    _input6 = A5;
    _input7 = A6;
    _input8 = 8;
    _input9 = 9;
    _input10 = 10;
  
    _output1 = 0;
    _output2 = 1;
    _output3 = 2;
    _output4 = 3;
    _output5 = 4;
    _output6 = 5;
    _output7 = 6;
    _output8 = 7;
  }
  else if (boardType == _ArduinoNano33){
    _input1 = A0;
    _input2 = A1;
    _input3 = A2;
    _input4 = A3;
    _input5 = A4;
    _input6 = A5;
    _input7 = A6;
    _input8 = 8;
    _input9 = 9;
    _input10 = 10;
  
    _output1 = 2;
    _output2 = 3;
    _output3 = 4;
    _output4 = 5;
    _output5 = 6;
    _output6 = 7;
    _output7 = 8;
    _output8 = 9;
    _output9 = 13;
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
    case 2:
      digitalWrite(_output2, HIGH);
    break;
    case 3:
      digitalWrite(_output3, HIGH);
    break;
    case 4:
      digitalWrite(_output4, HIGH);
    break;
    case 5:
      digitalWrite(_output5, HIGH);
    break;
    case 6:
      digitalWrite(_output6, HIGH);
    break;
    case 7:
      digitalWrite(_output7, HIGH);
    break;
    case 8:
      digitalWrite(_output8, HIGH);
    break;
    case 9:
      digitalWrite(_output9, HIGH);
    break;
    default:
    //
    break;
  }
}

void iotBoard::relayOff(int pinOut){
  switch (pinOut){
    case 1:
      digitalWrite(_output1, LOW);
    break;
    case 2:
      digitalWrite(_output2, LOW);
    break;
    case 3:
      digitalWrite(_output3, LOW);
    break;
    case 4:
      digitalWrite(_output4, LOW);
    break;
    case 5:
      digitalWrite(_output5, LOW);
    break;
    case 6:
      digitalWrite(_output6, LOW);
    break;
    case 7:
      digitalWrite(_output7, LOW);
    break;
    case 8:
      digitalWrite(_output8, LOW);
    break;
    case 9:
      digitalWrite(_output9, LOW);
    break;
    default:
    //
    break;
  }
}

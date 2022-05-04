#ifndef ArduinoMKRSetup_h
#define ArduinoMKRSetup_h

#include "Arduino.h"

  _input1 = A0;
  _input2 = A1;
  _input3 = A2;
  _input4 = A3;
  _input5 = A4;
  _input6 = A5;
  _input7 = A6;
  _input8 = 0;
  _input9 = 1;
  _input10 = 2;
  
  _output1 = 5;
  _output2 = 6;
  _output3 = 7;
  _output4 = 8;
  _output5 = 9;
  _output6 = 10;
  _output7 = 11;
  _output8 = 12;

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
  
#endif

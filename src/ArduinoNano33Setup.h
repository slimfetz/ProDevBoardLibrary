#ifndef ArduinoNano33Setup_h
#define ArduinoNano33Setup_h

#include "Arduino.h"

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

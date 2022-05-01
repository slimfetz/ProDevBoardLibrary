
#include "iotBoard.h"
#include "Arduino.h"

iotBoard::iotBoard(string boardType){
  
  if (boardType == "arduino"){
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
  }
  
  if (boardType == "particle"){
    pinMode(D0,OUTPUT);
    pinMode(D1,OUTPUT);
    pinMode(D2,OUTPUT);
    pinMode(D3,OUTPUT);
    pinMode(D4,OUTPUT);
    pinMode(D5,OUTPUT);
    pinMode(D6,OUTPUT);
    pinMode(D7,OUTPUT);
    pinMode(D8,OUTPUT);
    pinMode(D9,OUTPUT);
  }
}

bool input

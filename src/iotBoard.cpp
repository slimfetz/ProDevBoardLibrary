
#include "iotBoard.h"
#include "Arduino.h"

iotBoard::iotBoard(string boardType){

  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
  if (boardType == "MKR"){
    
  }
  
  if(board == 1 || board == 2){
    pinMode(A6,INPUT);
    pinMode(A7,INPUT);
  }

  if(board == 2){
    pinMode(B0,INPUT);
    pinMode(B1,INPUT);
    pinMode(B2,INPUT);
    pinMode(B3,INPUT);
    pinMode(B4,INPUT);
    pinMode(B5,INPUT);
  }

  if(board == 3){
      /*
    pinMode(D8,INPUT);
    pinMode(D11,INPUT);
    pinMode(D12,INPUT);
    pinMode(D13,INPUT);
    */
  }

}

bool ProDevBoard::ON(int pin){
  digitalWrite(pin,HIGH);
  return true;
}

bool ProDevBoard::OFF(int pin){
  digitalWrite(pin,LOW);
  return false;
}

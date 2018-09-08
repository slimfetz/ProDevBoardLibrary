
#include "ProDevBoard.h"
#include "Particle.h"

ProDevBoard::ProDevBoard(int board){  //1=photon 2=electron 3=boron,argon,xenon

  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  
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
    pinMode(D8,INPUT);
    pinMode(D11,INPUT);
    pinMode(D12,INPUT);
    pinMode(D13,INPUT);
  }

  if(board == 4){
    #include "Arduino.h"
  }
}

ProDevBoard::ON(int pin){
  digitalWrite(pin,HIGH);
  return true;
}

ProDevBoard::OFF(int pin){
  digitalWrite(pin,LOW);
  return false;
}


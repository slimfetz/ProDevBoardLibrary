#ifndef iotBoardArduino_h
#define iotBoardArduino_h

#include "Arduino.h"

class iotBoard
{
  public:
    iotBoard(char boardType[]);

    bool inputDigital(int pinIn);

    void outputOn(int pinOut);
    void outputOff(int pinOut);
 
  private:
    char _ArduinoMKR[20] = "_ArduinoMKR";
    char _ArduinoNano33[20] = "_ArduinoNano33";

    bool _digitalReturn;

    int _input1;
    int _input2;
    int _input3;
    int _input4;
    int _input5;
    int _input6;
    int _input7;
    int _input8;
    int _input9;
    int _input10;

    int _output1;
    int _output2;
    int _output3;
    int _output4;
    int _output5;
    int _output6;
    int _output7;
    int _output8;
    int _output9;
};
#endif

#ifndef iotBoardArduino_h
#define iotBoardArduino_h

class iotBoard
{
  public:
    iotBoard(String boardType);

    bool inputDigital(int pinIn);

    void output(int pinOut);
 
  private:
    String _boardType;

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
};
#endif


#ifndef iotBoard_h
#define iotBoard_h

class iotBoard
{
  public:
    iotBoard(String boardType);

    bool inputDigital(int pinIn);

    void output(int pinOut);
 
  private:
    String _boardType;

    bool _digitalReturn;

    Int _input1;
    Int _input2;
    Int _input3;
    Int _input4;
    Int _input5;
    Int _input6;
    Int _input7;
    Int _input8;
    Int _input9;
    Int _input10;

    Int _output1;
    Int _output2;
    Int _output3;
    Int _output4;
    Int _output5;
    Int _output6;
    Int _output7;
    Int _output8;
};
#endif


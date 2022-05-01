#ifndef iotBoard_h
#define iotBoard_h

class iotBoard{
  public:
    iotBoard(string boardType);
    string _boardType;
    bool input(int pinIn, string inputType);
    void output(int pinOut);
  private:
      
};
#endif


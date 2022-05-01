  if (boardType == "particlePhoton" || boardType == "particleBoron || boardType == "particleElectron"){
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
  }
  
  if (boardType == "particlePhoton" boardType == "particleElectron){
    pinMode(A6,INPUT);
    pinMode(A7,INPUT);
  }
  
  if (boardType == "particleBoron){
    pinMode(D8,INPUT);
    pinMode(D11,INPUT);
    pinMode(D12,INPUT);
    pinMode(D13,INPUT);
  }  
}

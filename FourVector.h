//////////////////////////////////////////////
//
// Author : Samuel Meehan <samuel.meehan@cern.ch>
//
// Description : Class interface for FourVector
//
//////////////////////////////////////////////

#include <iostream>
#include <cmath>

class FourVector{

  private:
    float e;
    float px;
    float py;
    float pz;
    
  public:
    FourVector(float px=0, float py=0, float pz=0, float e=0);
    ~FourVector();
    
    void SetFourVector(float px, float py, float pz, float e);
    
    float GetE();
    float GetPx();
    float GetPy();
    float GetPz();
    
    void Print();
    
    void Add(FourVector fv2);
    
    void Scale(float scale_factor);

    float InnerProduct(FourVector fv2);
    
    float GetMass();
    
    float GetPt();
    
    float GetTheta();
    
    float GetPhi();

    float GetEta();
    
    float DeltaPhi(FourVector fv2);

    float DeltaEta(FourVector fv2);
    
};
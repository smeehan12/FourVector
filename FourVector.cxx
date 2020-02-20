//////////////////////////////////////////////
//
// Author : Samuel Meehan <samuel.meehan@cern.ch>
//
// Description : Class definition for FourVector
//
//////////////////////////////////////////////

#include "FourVector.h"

FourVector::FourVector(float px, float py, float pz, float e){
  this->e =e;
  this->px=px;
  this->py=py;
  this->pz=pz;
}

FourVector::~FourVector(){
}

void FourVector::FourVector::SetFourVector(float px, float py, float pz, float e){
  this->e=e;
  this->px=px;
  this->py=py;
  this->pz=pz;
}

float FourVector::GetE(){
  return this->e;
}

float FourVector::GetPx(){
  return this->px;
}

float FourVector::GetPy(){
  return this->py;
}

float FourVector::GetPz(){
  return this->pz;
}

void FourVector::Print(){
  std::cout<<"(px,py,pz,e) = ("
                <<this->px<<","
                <<this->py<<","
                <<this->pz<<","
                <<this->e<<")"
                <<std::endl;
}

void FourVector::Add(FourVector fv2){
  this->e  += fv2.e ;
  this->px += fv2.px;
  this->py += fv2.py;
  this->pz += fv2.pz;
}

void FourVector::Scale(float scale_factor){
  this->e  *= scale_factor;
  this->px *= scale_factor;
  this->py *= scale_factor;
  this->pz *= scale_factor;
}

float FourVector::InnerProduct(FourVector fv2){
  float e2 = this->e * fv2.e;
  float p2 = this->px * fv2.px + this->py * fv2.py + this->pz * fv2.pz;

  float diff = e2 - p2;
  float prod = std::pow(diff, 0.5);
  
  return prod;
}

float FourVector::GetMass(){
  float mass = this->InnerProduct(*this);
  return mass;
}

float FourVector::GetPt(){
  float pt = std::pow( std::pow(this->px,2) + std::pow(this->py,2) ,0.5);
  return pt;
}

float FourVector::GetTheta(){
  float ratio = this->GetPt()/this->pz;
  float theta = std::atan(ratio);
  return theta;
}

float FourVector::GetPhi(){
  float ratio = this->px/this->py;
  float phi = std::atan(ratio);
  return phi;
}

float FourVector::GetEta(){
  
  // eta = -ln( tan(theta/2.0) )
  
  float theta = this->GetTheta();

  float eta = -1.0*std::log( std::tan(theta/2.0) );
  
  return eta;
  
}

float FourVector::DeltaPhi(FourVector fv2){

  float phi1 = this->GetPhi();
  float phi2 = fv2.GetPhi();
  
  float diff = phi1-phi2;
  
  if(diff > M_PI){
    diff = std::fabs(diff-M_PI);
  }
  else if(diff < -1.0*M_PI){
    diff = std::fabs(diff)-M_PI;
  }
  
  return diff;

}

float FourVector::DeltaEta(FourVector fv2){
  return std::fabs( this->GetEta() - fv2.GetEta() );
}
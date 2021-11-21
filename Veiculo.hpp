#ifndef VEICULO_H
#define VEICULO_H


#include <string>

class Veiculo
{
 public:
  virtual void Ligar() = 0;
  virtual void ProntoParaOperar() = 0;
};
#endif
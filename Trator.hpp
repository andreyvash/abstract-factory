#ifndef TRATOR_H
#define TRATOR_H


#include <string>
#include "Veiculo.hpp"

class Trator : public Veiculo
{
 public:
  void Ligar();
  void ProntoParaOperar();
};
#endif
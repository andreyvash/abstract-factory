#ifndef CARRO_H
#define CARRO_H


#include <string>
#include "Veiculo.hpp"

class Carro : public Veiculo
{
 public:
  void Ligar();
  void ProntoParaOperar();
};
#endif
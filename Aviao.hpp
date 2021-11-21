#ifndef AVIAO_H
#define AVIAO_H


#include <string>
#include "Veiculo.hpp"

class Aviao : public Veiculo
{
 public:
  void Ligar();
  void ProntoParaOperar();
};
#endif
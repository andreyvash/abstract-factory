#ifndef DRONE_H
#define DRONE_H


#include <string>
#include "Veiculo.hpp"

class Drone : public Veiculo
{
 public:
  void Ligar();
  void ProntoParaOperar();
};
#endif
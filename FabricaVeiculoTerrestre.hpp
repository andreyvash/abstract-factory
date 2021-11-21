#ifndef FABRICA_VEICULO_TERRESTRE_H
#define FABRICA_VEICULO_TERRESTRE_H


#include <string>
#include "Veiculo.hpp"
#include "AbstractFactory.hpp"
class FabricaVeiculoTerrestre : public AbstractFactory
{
 public:
  Veiculo *CriaVeiculoGrande();
  Veiculo *CriaVeiculoPequeno();
};
#endif
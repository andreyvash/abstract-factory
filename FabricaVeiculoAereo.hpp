#ifndef FABRICA_VEICULO_AEREO_H
#define FABRICA_VEICULO_AEREO_H


#include <string>
#include "Veiculo.hpp"
#include "AbstractFactory.hpp"

class FabricaVeiculoAereo : public AbstractFactory
{
  public:
    Veiculo *CriaVeiculoGrande();
    Veiculo *CriaVeiculoPequeno();
};
#endif
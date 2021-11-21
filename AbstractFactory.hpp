#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H


#include <string>
#include "Veiculo.hpp"
class AbstractFactory
{
 public:
  virtual ~AbstractFactory(){}
  virtual Veiculo *CriaVeiculoGrande() = 0;
  virtual Veiculo *CriaVeiculoPequeno() = 0;
};
#endif
#include <string>
#include "Veiculo.hpp"
#include "Carro.hpp"
#include "Trator.hpp"
#include "FabricaVeiculoTerrestre.hpp"

Veiculo* FabricaVeiculoTerrestre::CriaVeiculoGrande()
{
  return new Trator;
}
Veiculo* FabricaVeiculoTerrestre::CriaVeiculoPequeno()
{
  return new Carro;
}
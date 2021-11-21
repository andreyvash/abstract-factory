#include <string>
#include "Veiculo.hpp"
#include "Aviao.hpp"
#include "Drone.hpp"
#include "FabricaVeiculoAereo.hpp"

Veiculo* FabricaVeiculoAereo::CriaVeiculoGrande()
{
  return new Aviao;
}
Veiculo* FabricaVeiculoAereo::CriaVeiculoPequeno()
{
  return new Drone;
}
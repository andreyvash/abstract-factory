#include <iostream>
#include <string>
#include <list>
#include "Veiculo.hpp"
#include "AbstractFactory.hpp"
#include "FabricaVeiculoAereo.hpp"
#include "FabricaVeiculoTerrestre.hpp"


int main(){
    AbstractFactory *factory;
    Veiculo *veiculo;

    factory = new FabricaVeiculoAereo;

    veiculo = factory->CriaVeiculoGrande();
    veiculo->Ligar();
    veiculo->ProntoParaOperar();

    std::cout << "" << std::endl;

    veiculo = factory->CriaVeiculoPequeno();
    veiculo->Ligar();
    veiculo->ProntoParaOperar();

    std::cout << "" << std::endl;

    factory = new FabricaVeiculoTerrestre;

    veiculo = factory->CriaVeiculoGrande();
    veiculo->Ligar();
    veiculo->ProntoParaOperar();

    std::cout << "" << std::endl;

    veiculo = factory->CriaVeiculoPequeno();
    veiculo->Ligar();
    veiculo->ProntoParaOperar();

    std::cout << "" << std::endl;

}

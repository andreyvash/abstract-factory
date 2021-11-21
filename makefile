parametrosCompilacao=-Wall
nomePrograma=trabalho

all: $(nomePrograma)

$(nomePrograma): main.o Aviao.o Drone.o Carro.o Trator.o FabricaVeiculoAereo.o FabricaVeiculoTerrestre.o
	g++ -o $(nomePrograma) main.o Aviao.o Drone.o Carro.o Trator.o FabricaVeiculoAereo.o FabricaVeiculoTerrestre.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Aviao.o: Aviao.cpp Aviao.hpp Veiculo.hpp 
	g++ -c Aviao.cpp $(parametrosCompilacao)

Drone.o: Drone.cpp Drone.hpp Veiculo.hpp 
	g++ -c Drone.cpp $(parametrosCompilacao)

Carro.o: Carro.cpp Carro.hpp Veiculo.hpp 
	g++ -c Carro.cpp $(parametrosCompilacao)

Trator.o: Trator.cpp Trator.hpp Veiculo.hpp 
	g++ -c Trator.cpp $(parametrosCompilacao)

FabricaVeiculoAereo.o: FabricaVeiculoAereo.cpp FabricaVeiculoAereo.hpp AbstractFactory.hpp 
	g++ -c FabricaVeiculoAereo.cpp $(parametrosCompilacao)

FabricaVeiculoTerrestre.o: FabricaVeiculoTerrestre.cpp FabricaVeiculoTerrestre.hpp AbstractFactory.hpp 
	g++ -c FabricaVeiculoTerrestre.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)
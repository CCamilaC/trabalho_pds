CC := g++
CFLAGS := -I include/ -Wall
BUILD := build/
SRC := src/
TARGET := main.out


all: main

inferno: 
	g++ -o build/inferno.o -c src/inferno.cpp

ceu: 
	g++ -o build/ceu.o -c src/ceu.cpp

inventario: 
	g++ -o build/inventario.o -c src/inventario.cpp

usuario: 
	g++ -o build/usuario.o -c src/usuario.cpp

jogador: 
	g++ build/usuario.o -o build/jogador.o -c src/jogador.cpp

inimigo: 
	g++ build/usuario.o -o build/inimigo.o -c src/inimigo.cpp

batalha: 
	g++ build/*.o -o build/batalha.o -c src/batalha.cpp

main: inferno ceu inventario usuario jogador inimigo batalha
	g++ build/*.o -o build/main.o -c src/main.cpp
	

teste1: inferno 
	g++ -o build/teste1.o build/*.o src/Testes_de_verificacao/Teste_de_verificacao_1.cpp
	./build/teste1.o

teste2: inventario
	g++ -o build/teste2.o build/*.o src/Testes_de_verificacao/Teste_de_verificacao_2.cpp
	./build/teste2.o

teste3: batalha
	g++ -o build/teste3.o build/*.o src/Testes_de_verificacao/Teste_de_verificacao_3.cpp
	./build/teste3.o

teste4: jogador
	g++ -o build/teste4.o build/*.o src/Testes_de_verificacao/Teste_de_verificacao_4.cpp
	./build/teste4.o

teste5: inimigo
	g++ -o build/teste5.o build/*.o src/Testes_de_verificacao/Teste_de_verificacao_5.cpp
	./build/teste5.o

run:
	./build/teste3.o

clean:
	$(RM) -r $(BUILD)/* $(TARGET)

reboot: clean all 
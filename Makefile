CC := g++
SRCDIR := src
BUILDDIR := build
TESTDIR := tests
TARGET := main.out
CFLAGS := -Wall -I third_party -I include

all: main

inferno: 
	$(CC) $(CFLAGS) -o build/inferno.o -c src/inferno.cpp

batalha:
	$(CC) $(CFLAGS) -o build/batalha.o -c src/batalha.cpp

ceu:
	$(CC) $(CFLAGS) -o build/ceu.o -c src/ceu.cpp

usuario: inventario inimigo jogador
	$(CC) $(CFLAGS) -o build/usuario.o -c src/usuario.cpp

inimigo: 
	$(CC) $(CFLAGS) -o build/inimigo.o -c src/inimigo.cpp

inventario:
	$(CC) $(CFLAGS) -o build/inventario.o -c src/inventario.cpp

jogador: 
	$(CC) $(CFLAGS) -o build/jogador.o -c src/jogador.cpp

testeinf: inferno.o
	$(CC) $(CFLAGS) $(TESTDIR)/teste_inferno.cpp
	$(BUILDDIR)/inferno.o -o $(BUILDDIR)/teste_inferno.out

testeinm: inimigo.o
	$(CC) $(CFLAGS) $(TESTDIR)/teste_inimigo.cpp
	$(BUILDDIR)/inimigo.o -o $(BUILDDIR)/teste_inimigo.out

testejog: jogador.o
	$(CC) $(CFLAGS) $(TESTDIR)/teste_jogador.cpp
	$(BUILDDIR)/jogador.o -o $(BUILDDIR)/teste_jogador.out

main: inferno usuario batalha ceu inventario
	$(CC) $(CFLAGS) build/*.o src/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILD)/* $(TARGET)
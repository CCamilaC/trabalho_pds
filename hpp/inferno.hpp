#ifndef Inferno_h
#define Inferno_h

#include <iostream>
#include <vector>
#include "historia.hpp"
#include "batalha.hpp"

class Inferno: public Historia
{
    public:
    Inferno();
    int Escolha();
    int Preguica();
    int Gula();
    int Soberba(); 
    int Luxuria(); 
    int Avareza(); 
    int Inveja(); 
    int Ira();
    void Batalha_final()
    Batalha batalha;

    private:
    std::vector<int> _choice; //variável que armazena as escolhas do usuário
    int _contador; //auxiliar para determinar quantas escolhas boas foram
                  //feitas pelo usuário
};
#endif 
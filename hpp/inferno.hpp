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
    void Preguica();
    void Gula();
    void Soberba(); 
    void Luxuria(); 
    void Avareza(); 
    void Inveja(); 
    void Ira();
    void Batalha_final();
    Batalha batalha;

    private:
    std::vector<int> _choice; //variável que armazena as escolhas do usuário
    int _contador; //auxiliar para determinar quantas escolhas boas foram
                  //feitas pelo usuário
};
#endif 
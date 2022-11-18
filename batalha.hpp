#ifndef batalha_H
#define batalha_H
#include <iostream>
#include <string>
#include "jogador.hpp" 

class Batalha{
private:
    int atq1 = 10;
    int def1 = 3;
    int vida1 = 1000;
    int estamina1 = 6;
//teste aqui 
public:
    Jogador jogador;
    void batalhar();
};

#endif
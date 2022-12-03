//Classe
#ifndef Historia_H
#define Historia_H
#include "jogador.hpp"

#include<iostream>
#include<string>

class Historia
{
    private:
    Jogador _jogador;
    
    public:
    Historia(Jogador jogador);
    void inicializar_historia();
    void finalizar_historia();
};

#endif
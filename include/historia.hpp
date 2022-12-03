//Classe
#ifndef Historia_H
#define Historia_H
#include "jogador.hpp"
#include "batalha.hpp"
#include<iostream>
#include<string>
using namespace std;
class Historia
{
    protected:
    Jogador *_usuario;
    Batalha batalha;
    string _nome;
    string _pecado;
    public:
    Historia();
    void inicializar_historia();
    //virtual void finalizar_historia()=0;
};

#endif
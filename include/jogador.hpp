#ifndef USUARIO_HPP_INCLUDED
#define USUARIO_HPP_INCLUDED
#include<iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "inventario.hpp

using namespace std;

class Jogador:protected Usuario{
private:
    vector<item> inventario;

public:
    Jogador(int vida, int estamina, int ataque, int defesa): Jogador(vida, estamina, ataque, defesa);

    void Jogador::adiciona_item(item x);

    int Jogador::usa_item(int x, Jogador *p);

    void Jogador::mostra_item();
};
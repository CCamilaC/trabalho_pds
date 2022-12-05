#ifndef JOGADOR_HPP_INCLUDED
#define JOGADOR_HPP_INCLUDED
#include<iostream>
#include <cstdlib>
#include <vector>
#include "inventario.hpp"
#include "usuario.hpp"
#include "inimigo.hpp"

using namespace std;

class Jogador:protected Usuario{
private:
    vector<item> _inventario;

public:
    Jogador(int vida, int estamina, int ataque, int defesa): Usuario(vida, estamina, ataque, defesa){};

    void Jogador::adiciona_item(item x);

    void Jogador::usa_item(int x, Jogador *p, Inimigo *i), ;

    void Jogador::mostra_item();

    void Jogador::remove_item();
};
#endif
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

    int Jogador::get_vida();

    void Jogador::set_vida(int vida);

    int Jogador::get_atq();

    void Jogador::set_atq(int atq);

    int Jogador::get_def();

    void Jogador::set_def(int def);

    int Jogador::get_estamina();

    void Jogador::set_estamina(int estamina);

    int Jogador::get_max_estamina();

    void Jogador::printv() override;
};
#endif
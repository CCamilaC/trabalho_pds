#ifndef BATALHA_HPP_INCLUDED
#define BATALHA_HPP_INCLUDED
#include <iostream>
#include <string>

#include "jogador.hpp"



class Batalha{

public:
    void atacar(Jogador *user, Jogador *inim);
    void defender(Jogador *user, Jogador *inim);
    void inventario(Jogador *user);
    void envenenado(Jogador *user, Jogador *inim );

    void batalhar(Jogador *user, Jogador *inim);
};


#endif // BATALHA_HPP_INCLUDED

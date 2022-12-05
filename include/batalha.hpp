#ifndef BATALHA_HPP_INCLUDED
#define BATALHA_HPP_INCLUDED
#include <string>

#include "jogador.hpp"



class Batalha{

public:
    bool atacar(Jogador *user, Jogador *inim);
    bool defender(Jogador *user, Jogador *inim);
    bool inventario(Jogador *user, Jogador *inim);
    void envenenado(Jogador *user, Jogador *inim );

    void batalhar(Jogador *user, Jogador *inim);
};


#endif  //BATALHA_HPP_INCLUDED
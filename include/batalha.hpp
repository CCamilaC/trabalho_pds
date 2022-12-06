#ifndef BATALHA_HPP_INCLUDED
#define BATALHA_HPP_INCLUDED
#include <string>

#include "inimigo.hpp"
#include "jogador.hpp"



class Batalha{

public:
    bool atacarJ(Jogador *user, Inimigo *inim, bool atq_def);
    bool defenderJ(Jogador *user, Inimigo *inim);
    bool atacarI(Inimigo *inim, Jogador *user, bool atq_def);
    bool defenderI(Inimigo *inim, Jogador *user);
    bool inventario(Jogador *user, Inimigo *inim);


    int batalhar(Jogador *user, Inimigo *inim);

};


#endif  //BATALHA_HPP_INCLUDED
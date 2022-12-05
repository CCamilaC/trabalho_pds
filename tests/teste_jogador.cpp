#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../include/jogador.hpp"

//using shapes::Jogador;

Jogador gamer1 ();
Jogador gamer2 ();
Jogador gamer3 ();

TEST_CASE("Teste adicionar item"){
    CHECK_THROWS(adiciona_item()); //vetor cheio
    CHECK_THROWS(adiciona_item()); //posição do vetor não existe
}

TEST_CASE("Teste usar item"){
    CHECK_THROWS(usa_item()); //não possui mais itens para usar
}

TEST_CASE("Teste mostrar item"){
    CHECK_THROWS(mostra_item()); //não possui itens para mostrar
}

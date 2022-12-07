#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../third_party/doctest.h"
#include "../include/batalha.hpp"
#include "../include/inventario.hpp"


TEST_CASE("TESTANDO"){
    Jogador user(100, 20, 10, 1);
    Jogador user2(-30, -7,-9,-4);

    SUBCASE("atributos do jogador"){
        CHECK(user.get_atq() == 10);
        CHECK(user.get_def() == 1);
        CHECK(user.get_vida() == 100);
        CHECK(user.get_estamina() == 20);

    }

    SUBCASE("atrubutos de jogador invalidos"){
        CHECK(user2.get_atq() == 0);
        CHECK(user2.get_def() == 0);
        CHECK(user2.get_vida() == 0);
        CHECK(user2.get_estamina() == 0);
    }

    SUBCASE("atributo dos itens"){
        item i1("espada de fogo", 1, 2);
        CHECK(i1.getTipo() == 1);
        CHECK(i1.getNome() == "espada de fogo");
        CHECK(i1.get_intensidadeEfeito() == 2);

    }


    SUBCASE("atributos de item invalidos"){
        item i2("espada de chamas",-1,-4);
        CHECK(i2.getTipo() == 0);
        CHECK(i2.getNome() == "espada de chamas");
        CHECK(i2.get_intensidadeEfeito() == 0);

    }




}
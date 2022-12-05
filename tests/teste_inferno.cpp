#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "inferno.hpp"
TEST_CASE(""){
    
}

TEST_CASE("Escolha"){
    Inferno inf();
    SUBCASE("Escolha válida"){
        //Inferno inf();
        CHECK_EQ('1', inf.Escolha('1'));

        //CHECK_THROW_AS(1, inf.Escolha());
        
    }
    SUBCASE("Escolha inválida"){
        //Inferno inf();
        CHECK_EQ(inf.Escolha('5'));
        CHECK_EQ(inf.Escolha('s'));
    }
}


TEST_CASE("Gula"){
    SUBCASE("Escolha válida"){
        Inferno inf();
        
        CHECK_MESSAGE(, "Antes mesmo de seu localizador apitar você vê ao longe uma grande mesa de banquete. Animado pela perspectiva de um lanchinho, você anda em direção a mulher sentada na cabeceira. Sua tela te avisa que é Maria Antonieta, a infame rainha francesa.");

        //CHECK_THROW_AS(1, inf.Escolha());
        CHECK(inf.Gula(2) == 2);
    }
    SUBCASE("Escolha inválida"){
        Inferno inf("nome","pecado");
        CHECK(inf.Gula());
        CHECK(inf.Gula());
    }
}



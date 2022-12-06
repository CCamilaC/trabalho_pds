#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/inferno.cpp"
#include "../include/inferno.hpp"

//Inferno *inf=new Inferno("Neitan","ser chato");
Inferno inf("Neitan","ser chato");

TEST_CASE("getNome"){
    
    SUBCASE("Caso válido"){
        CHECK(inf.getNome()=="Neitan");
    }
    SUBCASE("Caso inválido"){
        CHECK(inf.getNome()=="Camila");
    }
}
TEST_CASE("inferno getPecado"){
    SUBCASE("Caso válido"){
        CHECK(inf.getPecado()=="ser chato");
    }
    SUBCASE("Caso inválido"){
        CHECK(inf.getPecado()=="ser doido");
    }
}

TEST_CASE("Escolha"){
    SUBCASE("Escolha válida"){
        CHECK_THROWS(inf.Escolha('1'));
    }
    SUBCASE("Escolha inválida"){
        CHECK_THROWS_WITH(inf.Escolha('5'), "Anjo: Eii espertalhão, não adianta burlar as regras hein!! Você tem que escolher uma das opções 1 ou 2, vou te dar uma nova chance:");
        CHECK_THROWS_WITH(inf.Escolha('r'), "Anjo: Eii espertalhão, não adianta burlar as regras hein!! Você tem que escolher uma das opções 1 ou 2, vou te dar uma nova chance:");
        
    }
}

//demais classes são informativas e não necessitam ser testadas 


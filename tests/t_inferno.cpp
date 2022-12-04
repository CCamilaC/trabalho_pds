#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "inferno.hpp"

TEST_CASE("Escolha"){
    SUBCASE("Escolha válida"){
        Inferno inf("nome","pecado");
        
        CHECK_NOTHROW(inf.Escolha());

        //CHECK_THROW_AS(1, inf.Escolha());
        CHECK(inf.Escolha(2) == 2);
    }
    SUBCASE("Escolha inválida"){
        Inferno inf("nome","pecado");
        CHECK_THROW(5,inf.Escolha());
        CHECK_THROW(inf.Escolha('s'));
    }
}




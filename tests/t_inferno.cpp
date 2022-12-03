#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "inferno.hpp"

TEST_CASE("Escolha"){
    SUBCASE("Escolha válida"){
        CHECK_THROW(Escolha(1)==1);
        CHECK_THROW(Escolha(2)==2);
    }
    SUBCASE("Escolha inválida"){
        CHECK_THROW(Escolha(5));
        CHECK_THROW(Escolha('s'));
    }
}

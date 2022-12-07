#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../third_party/doctest.h"
#include "../include/inimigo.hpp"


Inimigo in1(300, 10, 50, 20, 0);
Inimigo in2(250,8,45,40,1);


TEST_CASE("TESTANDO VENENO"){

    SUBCASE("TESTE VALIDO"){
        CHECK(in1.get_veneno()==0);
    }
    SUBCASE("TESTE INVALIDO"){
        CHECK(in2.get_veneno()== 0);
    }

}


TEST_CASE("TESTANDO ATAQUE"){

    SUBCASE("TESTE VALIDO"){
        CHECK(in1.get_atq()== 50);
    }
    SUBCASE("TESTE INVALIDO"){
        CHECK(in2.get_atq() == 36);
    }

}


TEST_CASE("TESTANDO DEFESA"){

SUBCASE("TESTE VALIDO"){
    CHECK(in1.get_def()==20);
}

SUBCASE("TESTE INVALIDO"){
    CHECK(in2.get_def()==35);
}

}


TEST_CASE("TESTANDO A ESTAMINA"){
SUBCASE("TESTE VALIDO"){
    CHECK(in1.get_estamina()==10);
}

SUBCASE("TESTE INVALIDO"){
    CHECK(in2.get_estamina()==7);
}

}

TEST_CASE("TESTANDO O MAXE ESTAMINA"){
    SUBCASE("TESTE VALIDO"){
        CHECK(in1.get_max_estamina() == 6);
    }
    SUBCASE("TESTE INVALIDO"){
        CHECK(in1.get_max_estamina() == 7);
    }

}


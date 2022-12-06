#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../include/inventario.hpp"
#include "../src/inventario.cpp"

item *teste_megafone = new item ("megafone",1,5);
item *teste_brioche = new item ("brioche",1,6);
item *teste_espada = new item ("espada",1,9);
item *teste_colete = new item ("colete",3,12);
item *teste_taser = new item ("taser",1,8);
item *teste_chicote= new item ("chicote",2,10);

TEST_CASE("TESTANDO NOME"){
    SUBCASE("TESTE VÁLIDO"){
        CHECK(teste_megafone->getNome()=="megafone");
        CHECK(teste_brioche->getNome()=="brioche");
        CHECK(teste_espada->getNome()=="espada");
        CHECK(teste_colete->getNome()=="colete");
        CHECK(teste_taser->getNome()=="taser");
        CHECK(teste_chicote->getNome()=="chicote");
    }
    SUBCASE("TESTE INVÁLIDO"){
        CHECK(teste_megafone->getNome()=="chicote");
        CHECK(teste_brioche->getNome()=="taser");
        CHECK(teste_espada->getNome()=="colete");
        CHECK(teste_colete->getNome()=="espada");
        CHECK(teste_taser->getNome()=="brioche");
        CHECK(teste_chicote->getNome()=="megafone");
    }
   
}
TEST_CASE("TESTANDO TIPO"){
    SUBCASE("TESTE VÁLIDO"){
        CHECK(teste_megafone->getTipo()==1);
        CHECK(teste_brioche->getTipo()==1);
        CHECK(teste_espada->getTipo()==1);
        CHECK(teste_colete->getTipo()==3);
        CHECK(teste_taser->getTipo()==1);
        CHECK(teste_chicote->getTipo()==2);
    }
    SUBCASE("TESTE INVÁLIDO"){
        CHECK(teste_megafone->getTipo()==3);
        CHECK(teste_brioche->getTipo()==3);
        CHECK(teste_espada->getTipo()==3);
        CHECK(teste_colete->getTipo()==1);
        CHECK(teste_taser->getTipo()==3);
        CHECK(teste_chicote->getTipo()==3);
    }
    
}

TEST_CASE("TESTANDO INTENSIDADE"){
    SUBCASE("TESTE VÁLIDO"){
        CHECK(teste_megafone->get_intensidadeEfeito()==5);
        CHECK(teste_brioche->get_intensidadeEfeito()==6);
        CHECK(teste_espada->get_intensidadeEfeito()==9);
        CHECK(teste_colete->get_intensidadeEfeito()==12);
        CHECK(teste_taser->get_intensidadeEfeito()==8);
        CHECK(teste_chicote->get_intensidadeEfeito()==10);
    }
    SUBCASE("TESTE INVÁLIDO"){
        CHECK(teste_megafone->get_intensidadeEfeito()==15);
        CHECK(teste_brioche->get_intensidadeEfeito()==10);
        CHECK(teste_espada->get_intensidadeEfeito()==11);
        CHECK(teste_colete->get_intensidadeEfeito()==8);
        CHECK(teste_taser->get_intensidadeEfeito()==5);
        CHECK(teste_chicote->get_intensidadeEfeito()==5);
    }
}

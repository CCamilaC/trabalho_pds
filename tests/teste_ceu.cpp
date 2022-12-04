#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/ceu.cpp"

Ceu *teste_ceu = new Ceu (3, "Natan");

TEST_CASE("TESTANDO SE OS VALORES SÃO CORRETOS"){
    CHECK(teste_ceu->Ceu_bom(1)=="Platão");
}
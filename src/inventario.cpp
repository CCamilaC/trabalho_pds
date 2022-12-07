#include "../include/inventario.hpp"

using namespace std;


string item:: getNome(){
    return _nome;
}

int item:: getTipo(){
    return _tipo;
}

int item:: get_intensidadeEfeito(){
    return _intensidadeEfeito;
}

item::item(string nome, int tipo, int efeito){
    _nome = nome;
    _tipo = tipo;
    _intensidadeEfeito = efeito;
}
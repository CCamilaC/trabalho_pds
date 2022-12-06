#include "inventario.hpp"


        string item:: getNome(){
            return _nome;
        }

        int item:: getTipo(){
            return _tipo;
        }

        int item:: get_intensidadeEfeito(){
            return _intensidadeEfeito;
        }

        item::item(string nome, int tipo, int intens){
            _nome = nome;
            _tipo = tipo;
            _intensidadeEfeito = intens;
        }
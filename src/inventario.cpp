#include "inventario.hpp"


        string item:: getNome(){
            return _nome;
        }

        int item:: getTipo(){
            return _tipo;
        }

        int item:: getEfeito(){
            return _efeito;
        }

        item::item(string x, int y, int z){
            _nome = x;
            _tipo = y;
            _efeito = z;
        }

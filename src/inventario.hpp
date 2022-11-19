#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class item{
    private:
        string _nome;
        int _tipo;  // 1 = aumentar ataque, 2 = aumentar defesa, 3 = recuperar vida, 4 = veneno
        int _efeito;
    
    public:
        string getNome();
        int getTipo();
        int getEfeito();
        item(string x, int y, int z);
};
/**
 * @file jogador.hpp
 * @author your name (you@domain.com)
 * @brief a classe jogador armazena a quantidade de vida do jogador a quantidade de itens
 * @version 0.1
 * @date 2022-11-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef jogador_h
#define jogador_h

#include<iostream>
#include <cstdlib>
//using namespace std;

class Jogador{
private:
    int vida  = 1000;
    int atq = 10;
    int def = 2;
    int estamina = 4;

public:
    int get_vida();
    void set_vida(int x);
    int get_atq();
    void set_atq(int x);
    int get_def();
    void set_def(int x);
    int get_estamina();
    void set_estamina(int x);
    void print();
};

#endif
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
/**
 * @brief class Jogador
 * 
 */
class Jogador{
private:
    int vida  = 1000;
    int atq = 10;
    int def = 2;
    int estamina = 4;

public:
/**
 * @brief Get the vida object
 * 
 * @return int 
 */
    int get_vida();
/**
 * @brief Set the vida object
 * 
 * @param x 
 */
    void set_vida(int x);
/**
 * @brief Get the atq object
 * 
 * @return int 
 */
    int get_atq();
/**
 * @brief Set the atq object
 * 
 * @param x 
 */
    void set_atq(int x);
/**
 * @brief Get the def object
 * 
 * @return int 
 */
    int get_def();
/**
 * @brief Set the def object
 * 
 * @param x 
 */
    void set_def(int x);
/**
 * @brief Get the estamina object
 * 
 * @return int 
 */
    int get_estamina();
/**
 * @brief Set the estamina object
 * 
 * @param x 
 */
    void set_estamina(int x);
/**
 * @brief 
 * 
 */
    void print();
};

#endif
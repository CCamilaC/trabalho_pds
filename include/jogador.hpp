#ifndef JOGADOR_HPP_INCLUDED
#define JOGADOR_HPP_INCLUDED
#include<iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "inventario.hpp"

using namespace std;
/**
 * @brief class Jogador
 *
 */


class Jogador{
private:
    int vida;
    int atq;
    int def;
    int estamina;
    bool veneno = false;
    vector<item> inventario;

public:
    Jogador(int x, int y, int z, int w);

    bool get_veneno();

    void set_veneno(bool x);
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

    void printv();

    void printiv();

    void adiciona_item(item x);

    int usa_item(int x, Jogador *p);

    void mostra_item();
};




#endif // JOGADOR_HPP_INCLUDED

/**
 * @file usuario.hpp
 * @author Pedro Henrique(pedrohenrique.s.lima@hotmail.com), Victória Machado (victoriam.ufmg@gmail.com), Luis Otavio (luisotaviosilva506@gmail.com)
 * @details a classe usuário armazena informações sobre o estado atual do jogador, como quantidade de vida, ataque, defesa \
 * que são essenciais para a batalha final. Além disso, é a classe mãe que ajuda a construir o objeto jogador e inimigo.
 * @version 0.1
 * @date 2022-12-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef USUARIO_HPP_INCLUDED
#define USUARIO_HPP_INCLUDED
#include<iostream>
#include <cstdlib>
#include <vector>
#include <string>
//#include "inventario.hpp"

using namespace std;
/**
 * @brief 
 * 
 */
class Usuario{
protected:
/**
 * @brief quantidade de vida do jogador ou do inimigo
 * 
 */
    int vida;
/**
 * @brief quantidade de dano que o ataque do jogador ou do inimigo causam
 * 
 */
    int atq;
/**
 * @brief ***************************************************************************************
 * 
 */
    int def;
/**
 * @brief quantidade de energia do jogador ou do inimigo, ou seja, quantas vezes um deles consegue atacar
 * 
 */
    int estamina;
   // bool veneno = false;
   // vector<item> inventario;

public:
/**
 * @brief Construtor
 * 
 * @param x vida
 * @param y ataque
 * @param z defesa
 * @param w estamina
 */
    Usuario(int x, int y, int z, int w);

    //bool get_veneno();

    //void set_veneno(bool x);
/**
 * @brief retorna a quantidade de vida do jogador ou do inimigo
 * 
 * @return int 
 */
    int get_vida();
/**
 * @brief altera a quantidade de vida
 * 
 * @param x número inteiro 
 */
    void set_vida(int x);
/**
 * @brief retorna a quantidade de dano que o ataque causa
 * 
 * @return int 
 */
    int get_atq();
/**
 * @brief altera o valor do dano causado pelo ataque
 * 
 * @param x 
 */
    void set_atq(int x);
/**
 * @brief retorna ******************************************
 * 
 * @return int 
 */
    int get_def();
/**
 * @brief altera ******************************************
 * 
 * @param x 
 */
    void set_def(int x);
/**
 * @brief retorna a quantidade de energia do jogador ou do inimigo
 * 
 * @return int 
 */
    int get_estamina();
/**
 * @brief altera a quantidade de energia do jogador ou do inimigo
 * 
 * @param x 
 */
    void set_estamina(int x);
/**
 * @brief imprime a quantidade de vida, de dano do ataque, de defesa ou de energia
 * 
 */
    void print();
/**
 * @brief imprime a quantidade de vida do jogador
 * 
 */
    void printv();
/**
 * @brief imprime a quantidade de vida do inimigo
 * 
 */
    void printiv();
s
    /*void adiciona_item(item x);

    int usa_item(int x, Usuario *p);

    void mostra_item();*/
};
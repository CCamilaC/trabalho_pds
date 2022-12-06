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
    int _vida;
/**
 * @brief quantidade de dano que o ataque do jogador ou do inimigo causam
 * 
 */
    int _atq;
/**
 * @brief quantidade de dano absorvido pelo jogador ou inimigo, sem reduzir a vida
 * 
 */
    int _def;
/**
 * @brief quantidade de energia do jogador ou do inimigo, ou seja, quantas vezes um deles consegue atacar
 * 
 */
    int _estamina;
/**
 * @brief quantidade de energia máxima do jogador ou do inimigo
 */
    int _max_estamina;

public:
/**
 * @brief Construtor
 * 
 * @param vida vida
 * @param atq ataque
 * @param def defesa
 * @param estamina estamina
 */
    Usuario(int vida, int atq, int def, int estamina);

/**
 * @brief retorna a quantidade de estamina maxima do jogador ou do inimigo
 * 
 * @return int 
 */
    virtual int get_max_estamina();
/**
 * @brief retorna a quantidade de vida do jogador ou do inimigo
 * 
 * @return int 
 */
    virtual int get_vida();
/**
 * @brief altera a quantidade de vida
 * 
 * @param vida número inteiro 
 */
    virtual void set_vida(int vida);
/**
 * @brief retorna a quantidade de dano que o ataque causa
 * 
 * @return int 
 */
    virtual int get_atq();
/**
 * @brief altera o valor do dano causado pelo ataque
 * 
 * @param atq 
 */
    virtual void set_atq(int atq);
/**
 * @brief retorna a quantidade de dano ignorado pelo jogador ou inimigo
 * 
 * @return int 
 */
    virtual int get_def();
/**
 * @brief altera a quantidade de dano ignorado pelo jogador ou inimigo
 * 
 * @param def 
 */
    virtual void set_def(int def);
/**
 * @brief retorna a quantidade de energia do jogador ou do inimigo
 * 
 * @return int 
 */
    virtual int get_estamina();
/**
 * @brief altera a quantidade de energia do jogador ou do inimigo
 * 
 * @param estamina 
 */
    virtual void set_estamina(int estamina);
/**
 * @brief imprime a quantidade de vida, de dano do ataque, de defesa e de energia
 * 
 */
    void print();
/**
 * @brief imprime Vida
 * 
 */
    virtual void printv();
/**
 * @brief define a estamina maxima permitida durante o jogo
 * 
 */
    virtual void set_max_estamina(int maxe);

};
#endif
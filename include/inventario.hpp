/**
 * @file inventario.hpp
 * @author Pedro Henrique(pedrohenrique.s.lima@hotmail.com), Luis Otavio (luisotaviosilva506@gmail.com)
 * @brief Classe que crio os itens que o jogador recebe
 * @details Ao longo do jogo o jogador recebe itens que o ajudara na batallha final. A classe inventario é responsável por criar \
 * esses itens e altera-los ao longo do jogo
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef INVENTARIO_HPP_INCLUDED
#define INVENTARIO_HPP_INCLUDED

#include<iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

class item{

private:
/**
 * @brief nome do item
 * 
 */
     string _nome;
/**
 * @brief tipo do item. 1 = aumentar ataque, 2 = aumentar defesa, 3 = recuperar vida, 4 = veneno, 5 = itens ruins
 * 
 */
        int _tipo;
/**
 * @brief consequências para o jogador após receber um item. Exemplo: aumentar o dano de ataque, recuperar vida
 * 
 */
        int _intensidadeEfeito;
public:
/**
 * @brief retorna o nome do item
 * 
 * @return string 
 */
 string getNome();
 /**
  * @brief retorna a intensidade/efeito do item
  * 
  */
 int get_intensidadeEfeito();
 /**
  * @brief retorna o tipo do item
  * 
  * @return int 
  */
 int getTipo();
 /**
  * @brief Construtos
  * 
  * @param x = nome
  * @param y = tipo
  * @param z = intensidade e efeito
  */
   item(string nome, int tipo, int efeito);

};



#endif // INVENTARIO_HPP_INCLUDED

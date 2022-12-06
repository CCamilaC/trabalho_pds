/**
 * @file batalha.hpp
 * @author Pedro Henrique(pedrohenrique.s.lima@hotmail.com), Victória Machado (victoriam.ufmg@gmail.com), Luis Otavio (luisotaviosilva506@gmail.com)
 * @brief classe responsável por todas as batalhas do jogo 
 * @details na classe batalha haverá todos os prints referentes à batalha, juntamente com juntamente com métodos para computar alterações de atributos /
 * referentes a cada ação 
 * 
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef BATALHA_HPP_INCLUDED
#define BATALHA_HPP_INCLUDED
#include <string>

#include "jogador.hpp"

class Batalha{

public:
/**
 * @brief retorna se alguma das partes chegou a 0 de vida
 * 
 * @param user
 * @param inim
 * @param atq_def
 * 
 * @return true 
 * @return false 
 */
    bool atacar(Jogador *user, Jogador *inim, bool atq_def);
/**
 * @brief retorna se alguma das partes defendeu
 * 
 * @param user
 * @param inim
 * 
 * @return true 
 * @return false 
 */
    bool defender(Jogador *user, Jogador *inim);

/**
 * @brief retorna se algum item foi utilizado
 * 
 * @param user
 * @param inim
 * 
 * @return true 
 * @return false 
 */
    bool inventario(Jogador *user, Jogador *inim);
/**
 * @brief retorna os resultados da batlha
 * 
 * @param user
 * @param inim
 * 
 * @return 0 
 * @return 1
 * @return 2
 */
    int batalhar(Jogador *user, Jogador *inim);

};

#endif  //BATALHA_HPP_INCLUDED
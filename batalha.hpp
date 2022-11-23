/**
 * @file batalha.cpp
 * @author grupo 4 (you@domain.com)
 * @brief Classe responsável pelas lutas do jogo
 * @version 0.1
 * @date 2022-11-18
 * @details A classe batalha é responsável pelas batalhas e pela criação de oponentes.
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef batalha_H
#define batalha_H
#include <iostream>
#include <string>

#include "jogador.hpp" 

/**
 * @brief chama a classe jogador e cria um oponente para a luta, além de gerencia-la 
 * @details controla a vida, a estamina, a defesa e o ataque dos oponentes. Além disso, gerencia os turnos de ataque na batalha e a probabilidade de um ataque ou defesa bem sucedidos. Ela também gerencia os itens especiais. 
 */

class Batalha{

public:
    /**
     * @brief controla toda a batalha
     * @details determina a taxa de acerto dos golpes e das defesas, além de gerenciar os turnos e os valores da vida, defesa
     * ataque e estamina do oponente e do jogador.
     *  
     */
    void batalhar(Jogador user, Jogador inim);
};

#endif
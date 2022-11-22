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
private:
    /**
     * @brief valor do ataque do oponente
     * 
     */
    int atq1 = 10;
    /**
     * @brief valor da defesa do oponente
     * 
     */
    int def1 = 3;
    /**
     * @brief valor da vida do oponente
     * 
     */
    int vida1 = 1000;
    /**
     * @brief valor da estamina do oponente
     * 
     */
    int estamina1 = 6;

public:
    /**
     * @brief inicializa um jogador para a batalha
     * 
     */
    Jogador jogador;
    /**
     * @brief controla toda a batalha
     * @details determina a taxa de acerto dos golpes e das defesas, além de gerenciar os turnos e os valores da vida, defesa
     * ataque e estamina do oponente e do jogador.
     *  
     */
    void batalhar();
};

#endif
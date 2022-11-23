/**
 * @file inferno.hpp
 * @author Camila Chagas (camilachagascarvalho888@gmail.com) Luiza lei (luizalei8@gmail.com)
 * @brief a classe inferno é responsável por toda narrativa quando o jogador estiver ambientado no inferno
 * @details na classe inferno haverá todos os prints da narrativa, juntamente com os métodos de escolha para
 *  ao longo da história, além de chamar funções da classe batalha para participar da história
 * @version 0.1
 * @date 2022-11-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef Inferno_h
#define Inferno_h

#include <iostream>
#include <vector>
#include <string>
#include "historia.hpp"
#include "batalha.hpp"
/** 
 * @brief printa na tela toda a história do inferno, implementa batalhas e faz as escolhas do jogo
 * @details essa classe possui um vetor para armazenar todas as escolhas ao longo da implementação das funções da classe
*/
class Inferno: public Historia
{
    std::vector<int> _choice; //variável que armazena as escolhas do usuário
    int _contador; //auxiliar para determinar quantas escolhas boas foram
                  //feitas pelo usuário
    std::string _escolha="ESCOLHA 1 OU 2:\n------------------------\\------------------------";
    public:
    Inferno();
    int Escolha();
    void Preguica();
    void Gula();
    void Soberba(); 
    void Luxuria(); 
    void Avareza(); 
    void Inveja(); 
    void Ira();
    void Batalha_final();
    Batalha batalha;


};
#endif 
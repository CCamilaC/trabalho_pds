/**
 * @file ceu.hpp
 * @author Natan Henrique (nhcr7@hotmail.com)
 * @brief  a classe "ceu" é responsável por toda narrativa quando o jogador estiver ambientado no ceu
 * @details na classe ceu haverá todos os prints da narrativa, juntamente com os métodos de escolha para
 * determinar o fim do jogo, as escolhas que o jogador fizer durante o RPG o leva para dois tipo de "Ceu" o bom e o ruim
 * @version 0.1
 * @date 2022-12-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef ceu_bom_H
#define ceu_bom_H
#include "jogador.hpp"
#include <iostream>
#include <string>
#include <vector>
/**
 *  
 * @brief printa na tela toda a história do inferno, implementa batalhas e faz as escolhas do jogo
 * @details essa classe possui um vetor para armazenar todas as escolhas ao longo da implementação das funções da classe
 * e um contador para  registrar as escolhas e mudar a continuidade da história. Além de 9 funções
*/
class Ceu{
  private:
    string _nome;
    int _pessoa_salva;

  public:
    Ceu(int pessoa_salva, string nome);
    void Ceu_bom();
    void Ceu_ruim();
    void Finalizar_historia();


};

#endif
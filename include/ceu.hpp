/**
 * @file inferno.hpp
 * @author Camila Chagas (camilachagascarvalho888@gmail.com) Luiza lei (luizalei8@gmail.com)
 * @brief  a classe inferno é responsável por toda narrativa quando o jogador estiver ambientado no inferno
 * @details na classe inferno haverá todos os prints da narrativa, juntamente com os métodos de escolha para
 *  ao longo da história, além de chamar funções da classe batalha para participar da história
 * @version 0.1
 * @date 2022-11-18
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
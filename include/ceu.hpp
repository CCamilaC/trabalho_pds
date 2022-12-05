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

#include <iostream>
#include <string>
#include <vector>
/**
 *  
 * @brief printa na tela a história final do jogo, o destino final do jogador 
 * @details essa classe possui uma string para armazenar o nome do jogador e um inteiro para armazenar a escolha
 * que o jogador desejará fazer para salvar uma das pessoas que ele batalhou, além do construtor e 4 funções.
*/
class Ceu{
  private:
    /**
     * @brief uma variável para armazenar o nome do jogador
     * 
     */
    string _nome;
    /**
     * @brief uma variável para armazenar a pessoa escolhida pelo jogador para ser salva
     * 
     */
    char _pessoa_salva;

  public:
    /**
     * @brief Construtor
     * 
     */
    Ceu(string nome);
    /**
     * @brief função para definir o fim da história caso o jogador consiga ir para o Ceu bom
     * @details caso o jogador chegue no Ceu bom fazendo boas escolhas durante o Inferno
     * ele poderá escolher um dos inimigos que ele batalhou no inferno para ser salvo do Inferno
     * e ir para o Ceu junto com ele.
     * 
     */
    void Ceu_bom();
    /**
     * @brief função para definir o fim da história caso o jogador vá para o Ceu ruim
     * @details caso o jogador faça escolhas ruins durante o percurso do jogo ele irá para o
     * Céu ruim onde o Anjo narrador decidirá o destino final do jogador que é permanecer no inferno.
     */
    void Ceu_ruim();
    /**
     * @brief função para conclusões finais do Anjo narrador
     * @details essa função imprime uma mensagem de despedida do Anjo narrador para o jogador
     * para assim finalizar o jogo completamente.
     */
    void Finalizar_historia();


};

#endif
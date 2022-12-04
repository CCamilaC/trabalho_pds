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
#ifndef inferno_h
#define inferno_h
#include "../include/jogador.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "../include/historia.hpp"
#include "../include/batalha.hpp"
/**
 *  
 * @brief printa na tela toda a história do inferno, implementa batalhas e faz as escolhas do jogo
 * @details essa classe possui um vetor para armazenar todas as escolhas ao longo da implementação das funções da classe
 * e um contador para  registrar as escolhas e mudar a continuidade da história. Além de 9 funções
*/
class Inferno: public Historia
{
    /** 
     * @brief variável que armazena as escolhas do usuário
     */
    std::vector<int> _choice;
    /**
     * @brief auxiliar para determinar quantas escolhas boas foram feitas pelo usuário
     * 
     */
    int _contador; 
    /**
     * @brief printar as opções de escolha
     * 
     */
    std::string _escolha="ESCOLHA 1 OU 2:\n------------------------\\------------------------";
    /** 
     * @brief atributo do tipo batalha para a funcionalidade de luta
     *
    */
    Batalha batalha;
    public:
    /** 
     * @brief construtor
    */
    Inferno();
    /**
     * @brief executa as escolhas, toda vez que aparecer opções para o jogador
     * @details a função vai fazer o cin da opção escolhida, tratar exceções e armazenar no _choice
     * cada escolha feita, assim como adicionar 1 a variável "_contador" a cada vez que chamar a função 
     * e o usuário digitar uma alternativa válida 
     * @return int 
     */
    int Escolha();
    /**
     * @brief faz o cout de toda a parte da história relacionada ao pecado da preguiça
     * @details essa função ira printar a parte da história, fazer a opção de escolha que o personagem
     * der(sempre acontece por meio da função Escolha) e chamar a função batalhar, da classe batalha.
     */
    void Preguica();
    /**
     * @brief faz o cout de toda a parte da história relacionada ao pecado da gula
     * @details fará a parte de gula e no final terá o cin para a opção de escolha
     */
    void Gula();
    /**
     * @brief faz o cout de toda a parte da história relacionada ao pecado da gula
     * @details printa o enredo, faz a opção de escolha usando a função da própria 
     * classe "Escolha" e implimenta a função batalhar da classe batalha
     * 
     */
    void Soberba(); 
    /**
     * @brief faz o cout de toda a parte da história relacionada ao pecado da luxuria
     * @details printa o enredo e faz o cin para a opção de escolha do usuário
     * 
     */
    void Luxuria();
    /**
     * @brief faz o cout de toda a parte da história relacionada ao pecado da Avareza
     * @details printa o enredo e faz o cin para a opção de escolha do usuário
     */
    void Avareza();
    /**
     * @brief faz o cout de toda a parte da história relacionada ao pecado da Inveja
     * @details printa o enredo, faz o cin para o usuário conseguir escolher uma opção e chama
     * a função batalhar da classe batalha
     */
    void Inveja(); 
    /**
     * @brief faz o cout de toda a parte da história relacionada ao pecado da Ira
     * @details enredo + cin para opção de escolha do usuário
     */
    void Ira();
    /**
     * @brief finaliza a história no inferno
     * @details printa a ùltima parte e chama a função batalhar da classe batalha
     */
    void Batalha_final();
    


};
#endif 
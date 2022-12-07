/**
 * @file jogador.hpp
 * @author Pedro Henrique(pedrohenrique.s.lima@hotmail.com), Victória Machado (victoriam.ufmg@gmail.com), Luis Otavio (luisotaviosilva506@gmail.com)
 * @brief A classe jogador herdar atributos da classe Usuário e armazena itens do jogador
 * @details Jogador é uma subclasse de usuario e é responsável por armazenar e alterar os itens do jogador ao longo da batalha. \
 * Além disso tem conexão com a classe inimigo quando tentaenvenena-lo.
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef JOGADOR_HPP_INCLUDED
#define JOGADOR_HPP_INCLUDED
#include<iostream>
#include <cstdlib>
#include <vector>
#include "inventario.hpp"
#include "usuario.hpp"
#include "inimigo.hpp"

using namespace std;

class Jogador:protected Usuario{
private:
/**
 * @brief Vetor do tipo item que adiciona um item ao inventario
 * 
 */
    vector<item> _inventario;

public:
/**
 * @brief Construtor
 * 
 * @param vida 
 * @param estamina 
 * @param ataque 
 * @param defesa 
 */
    Jogador(int vida, int estamina, int ataque, int defesa);
/**
 * @brief Adiciona um item ao inventario 
 * 
 * @param x 
 */
    void adiciona_item(item x);
/**
 * @brief Usa todos os itens do jogo. Se o item for do tipo veneno, o efeito dele é no inimigo 
 * 
 * @param x 
 * @param p 
 * @param i 
 */
    void usa_item(int x, Jogador *p, Inimigo *i);
/**
 * @brief Mostra os itens do iventario
 * 
 */
    void mostra_item();
/**
 * @brief Remove um item do inventario
 * 
 */
    void remove_item();

    /**
 * @brief retorna a quantidade de estamina maxima do jogador ou do inimigo
 * 
 * @return int 
 */
    int get_max_estamina();
/**
 * @brief retorna a quantidade de vida do jogador ou do inimigo
 * 
 * @return int 
 */
    int get_vida();
/**
 * @brief altera a quantidade de vida
 * 
 * @param vida número inteiro 
 */
    void set_vida(int vida);
/**
 * @brief retorna a quantidade de dano que o ataque causa
 * 
 * @return int 
 */
    int get_atq();
/**
 * @brief altera o valor do dano causado pelo ataque
 * 
 * @param atq 
 */
    void set_atq(int atq);
/**
 * @brief retorna a quantidade de dano ignorado pelo jogador ou inimigo
 * 
 * @return int 
 */
    int get_def();
/**
 * @brief altera a quantidade de dano ignorado pelo jogador ou inimigo
 * 
 * @param def 
 */
    void set_def(int def);
/**
 * @brief retorna a quantidade de energia do jogador ou do inimigo
 * 
 * @return int 
 */
    int get_estamina();
/**
 * @brief altera a quantidade de energia do jogador ou do inimigo
 * 
 * @param estamina 
 */
    void set_estamina(int estamina);
/**
 * @brief imprime a quantidade de vida, de dano do ataque, de defesa e de energia
 * 
 */
    void print();
/**
 * @brief imprime Vida
 * 
 */
    void printv();
/**
 * @brief define a estamina maxima permitida durante o jogo
 * 
 */
    void set_max_estamina(int maxe);
};
#endif
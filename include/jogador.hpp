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
#include "../include/inventario.hpp"
#include "../include/usuario.hpp"


using namespace std;

class Jogador{
private:
    int _vida;
    int _atq;
    int _def;
    int _estamina;
    bool _veneno = false;
    int _max_estamina = 6;
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
    Jogador(int vida, int ataque, int defesa, int estamina);

    bool get_veneno();

    void set_veneno(bool x);
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
    void usa_item(int x, Jogador *p, Jogador *i);
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

    int get_vida();

    void set_vida(int vida);

    int get_atq();

    void set_atq(int atq);

    int get_def();

    void set_def(int def);

    int get_estamina();

    void set_estamina(int estamina);

    int get_max_estamina();

    void printv();

    void printiv();

    void print();

    void envenenado(int cont);
};
#endif
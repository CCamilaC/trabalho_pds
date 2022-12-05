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
    Jogador(int vida, int estamina, int ataque, int defesa): Usuario(vida, estamina, ataque, defesa){};
/**
 * @brief Adiciona um item ao inventario 
 * 
 * @param x 
 */
    void Jogador::adiciona_item(item x);
/**
 * @brief Usa todos os itens do jogo. Se o item for do tipo veneno, o efeito dele é no inimigo 
 * 
 * @param x 
 * @param p 
 * @param i 
 */
    void Jogador::usa_item(int x, Jogador *p, Inimigo *i), ;
/**
 * @brief Mostra os itens do iventario
 * 
 */
    void Jogador::mostra_item();
/**
 * @brief Remove um item do inventario
 * 
 */
    void Jogador::remove_item();
};
#endif
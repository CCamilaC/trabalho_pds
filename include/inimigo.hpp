/**
 * @file inimigo.hpp
 * @author Pedro Henrique(pedrohenrique.s.lima@hotmail.com), Victória Machado (victoriam.ufmg@gmail.com), Luis Otavio (luisotaviosilva506@gmail.com)
 * @brief classe que herda os atributos da classe Usuario e armazena informações do inimigo
 * @details a classe inimigo é uma subclasse de Usuario e armazena informações a respeito do inimigo durante uma batalha. Nessa classe \
 * está uma informação sobre o estado de envenenamento do inimigo
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef INIMIGO_HPP_INCLUDED
#define INIMIGO_HPP_INCLUDED
#include "usuario.hpp"

using namespace std;

class Inimigo: protected Usuario{
    private:
/**
 * @brief diz se o inimigo está envenenado(true) ou não(false)
 * 
 */
        bool _envenenado;
/**
 * @brief construtor
 * 
 */
    public: Inimigo::Inimigo(int vida, int estamina, int ataque, int defesa, bool veneno);
/**
 * @brief retorna a condição do inimigo: se está envenenado ou não
 * 
 * @return true 
 * @return false 
 */
    bool Inimigo::get_veneno();
/**
 * @brief imprime vida, estamina, ataque, defesa e se o inimigo está envenenado ou não
 * 
 */
    void Inimigo::print() override;
/**
 * @brief imprime a quantidade de vida do inimigo e se está envenenado ou não
 * 
 */

    void Inimigo::printiv() override;
};
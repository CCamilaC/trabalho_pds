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
 * @brief define a condiçao de envenenado
 * 
 * @param ven
*/
    void Inimigo::set_veneno(bool ven);
/**
 * @brief imprime vida, estamina, ataque, defesa e se o inimigo está envenenado ou não
 * 
 */
    void Inimigo::print() override;
/**
 * @brief imprime a quantidade de vida do inimigo e se está envenenado ou não
 * 
 */
    void Inimigo::printv() override;
/**
 * @brief executa o efeito de envenenado no inimigo e mostra a duração do efeito
 * 
 * @param cont
 */
    void Inimigo::envenenado(int cont);

    int Inimigo::get_vida();

    void Inimigo::set_vida(int vida);

    int Inimigo::get_atq();

    void Inimigo::set_atq(int atq);

    int Inimigo::get_def();

    void Inimigo::set_def(int def);

    int Inimigo::get_estamina();

    void Inimigo::set_estamina(int estamina);

    int Inimigo::get_max_estamina();
};
#endif
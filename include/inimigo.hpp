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
        bool _envenenado;
/**
 * @brief construtor
 * 
 */
    public: Inimigo(int vida, int estamina, int ataque, int defesa, bool veneno):Usuario(vida, estamina, ataque, defesa), _envenenado(veneno){};
/**
 * @brief retorna a condição do inimigo: se está envenenado ou não
 * 
 * @return true 
 * @return false 
 */
    bool get_veneno();
/**
 * @brief define a condiçao de envenenado
 * 
 * @param ven
*/
    void set_veneno(bool ven);
/**
 * @brief imprime vida, estamina, ataque, defesa e se o inimigo está envenenado ou não
 * 
 */
    void print();
/**
 * @brief imprime a quantidade de vida do inimigo e se está envenenado ou não
 * 
 */
    void printv();
/**
 * @brief executa o efeito de envenenado no inimigo e mostra a duração do efeito
 * 
 * @param cont
 */
    void envenenado(int cont);

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
#ifndef ceu_bom_H
#define ceu_bom_H
#include "jogador.hpp"
#include <iostream>
#include <string>

class Ceu{
  private:
    string _nome;
    int _pessoa_salva;
  public:
    Ceu(int pessoa_salva, string nome);
    int getDestino(int escolha);
    void Ceu_bom();
    void Ceu_ruim();
    void Finalizar_historia();


};

#endif
#ifndef ceu_bom_H
#define ceu_bom_H

#include <iostream>


class Ceu{
  private:
    int _pessoa_salva;
  public:
    int getDestino(int escolha);
    void Ceu_bom();
    void Ceu_ruim();
    void Finalizar_historia();


};

#endif
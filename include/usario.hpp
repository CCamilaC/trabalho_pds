#ifndef USUARIO_HPP_INCLUDED
#define USUARIO_HPP_INCLUDED
#include<iostream>
#include <cstdlib>
#include <vector>
#include <string>
//#include "inventario.hpp"

using namespace std;

class Usuario{
protected:
    int vida;
    int atq;
    int def;
    int estamina;
   // bool veneno = false;
   // vector<item> inventario;

public:
    Usuario(int x, int y, int z, int w);

    bool get_veneno();

    void set_veneno(bool x);

    int get_vida();

    void set_vida(int x);

    int get_atq();

    void set_atq(int x);

    int get_def();

    void set_def(int x);

    int get_estamina();

    void set_estamina(int x);

    void print();

    void printv();

    void printiv();

    void adiciona_item(item x);

    int usa_item(int x, Usuario *p);

    void mostra_item();
};
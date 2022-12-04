#pragma once
#include <vector>
#include "jogador.hpp"
#include "usuario.hpp"
#include "inventario.hpp"

using namespace std;

    Jogador::Jogador(int vida, int estamina, int ataque, int defesa): Jogador(vida, estamina, ataque, defesa){}

    void Jogador::adiciona_item(item x){
        inventario.push_back(x);
    }

    int Jogador::usa_item(int x, Jogador *p){

        if(inventario[x].getTipo() == 1){
           int y = 0;
           y =inventario[x].getEfeito() + p->get_atq();
           p->set_atq(y);
           inventario.erase(inventario.begin() + x);

        }

        if(inventario[x].getTipo() == 2){
            int y = 0;
           y =inventario[x].getEfeito() + p->get_def();
           p->set_def(y);
             inventario.erase(inventario.begin() + x);
        }

        if(inventario[x].getTipo() == 3){
           int y = 0;
           y =inventario[x].getEfeito() + p->get_vida();
           p->set_vida(y);
             inventario.erase(inventario.begin() + x);
        }

        if(inventario[x].getTipo() == 4){
           bool t = true;
            p->set_veneno(t);

            inventario.erase(inventario.begin() + x);
           /* int x = p->get_vida() - inventario[x].getEfeito();
            p->set_vida(x);
            cout<<"vida do inimigo:"<< p->get_vida() <<"\n";
            inventario.erase(inventario.begin() + x);
            return 1;*/
        }
    }

    void Jogador::mostra_item(){
        for(int i = 0; i < inventario.size(); i ++){
            cout << "(" << i << ")" << inventario[i].getNome() << endl;
            }

    }
#include <iostream>
#include "inferno.hpp"
#include <vector>
#include <string>
using namespace std;
//1 smp será a escolha boa
Inferno::Inferno(){ //construtor
    _choice.clear();
    _contador=0;
}
int Inferno::Preguica(){
    int aux=0; //conterá a escolha feita
    //printar os dialogos
    do{ //escolha de uma das opções
        cin>>aux;
        switch (aux)
        {
        case '1':
            _contador++;
            _choice.push_back(aux);
            break;
        case '2':
            _choice.push_back(aux);
        default:
            break;
        }
    } while(aux!=1 || aux!=2);

    //inico da batalha
    batalha.batalhar();
}

int Inferno::Gula(){

}
int Inferno::Soberba(){

}
int Inferno::Luxuria(){

}
int Inferno::Avareza(){

}
int Inferno::Inveja(){

}
int Inferno::Ira(){

}
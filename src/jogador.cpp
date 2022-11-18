#include<iostream>
#include <cstdlib>
#include "jogador.hpp"
using namespace std;

int Jogador::get_vida(){
    return vida;
}
void Jogador::set_vida(int x){
    vida = x;
}
int Jogador::get_atq(){
    return atq;
}
void Jogador::set_atq(int x){
    atq = x;
}
int Jogador::get_def(){
    return def;
}
void Jogador::set_def(int x){
    def = x;
}
int Jogador::get_estamina(){
    return estamina;
}
void Jogador::set_estamina(int x){
    estamina = x;
}
void Jogador::print(){
    cout<<"seu ataque:"<< get_atq()<< "\n";
    cout<<"sua defesa:"<< get_def() <<"\n";
    cout<<"sua vida:"<< get_vida() << "\n";
    cout<< "sua estamina:" << get_estamina() << "\n";
}


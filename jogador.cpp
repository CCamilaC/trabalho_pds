#include<iostream>
#include <cstdlib>
using namespace std;

class Jogador{
private:
    int vida  = 1000;
    int atq = 10;
    int def = 2;
    int estamina = 4;

public:
    int get_vida(){
    return vida;
    }
    void set_vida(int x){
    vida = x;
    }
     int get_atq(){
    return atq;
    }
    void set_atq(int x){
    atq = x;
    }
     int get_def(){
    return def;
    }
    void set_def(int x){
    def = x;
    }
     int get_estamina(){
    return estamina;
    }
    void set_estamina(int x){
    estamina = x;
    }
    void print(){
    cout<<"seu ataque:"<< get_atq()<< "\n";
    cout<<"sua defesa:"<< get_def() <<"\n";
    cout<<"sua vida:"<< get_vida() << "\n";
    cout<< "sua estamina:" << get_estamina() << "\n";


    }



};

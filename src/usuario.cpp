#include "../include/usuario.hpp"

using namespace std;


Usuario::Usuario(int vida, int estamina, int atq, int def){
    set_vida(vida);
    set_estamina(estamina);
    set_atq(atq);
    set_def(def);
    set_max_estamina(6);
}
int Usuario::get_max_estamina(){
        return _max_estamina;
}

int Usuario::get_vida(){
    return _vida;
}
void Usuario::set_vida(int vida){
    _vida = vida;
}
int Usuario::get_atq(){

    return _atq;
}
void Usuario::set_atq(int atq){

    _atq = atq;
}
int Usuario::get_def(){
    return _def;
}
void Usuario::set_def(int def){
    _def = def;
}
int Usuario::get_estamina(){
    return _estamina;
}
void Usuario::set_estamina(int estamina){
    _estamina = estamina;
}
void Usuario::print(){
    cout<<"vida: "<< get_vida() << "\n";
    cout<< "estamina: " << get_estamina() << "\n";
    cout<<"ataque: "<< get_atq()<< "\n";
    cout<<"defesa: "<< get_def() <<"\n";

}

void Usuario::printv(){
    cout << "Vida ";
}

void Usuario::set_max_estamina(int maxe){
    _max_estamina = maxe;
}



#include "inimigo.hpp"

using namespace std;

    Inimigo::Inimigo(int vida, int estamina, int ataque, int defesa, bool veneno): Usuario(vida, estamina, ataque, defesa),_envenenado(veneno){}

    bool Inimigo::get_veneno(){
        return _envenenado;
    }
    
    void Inimigo::set_veneno(bool envenenado){
        _envenenado = envenenado;
    }
    void Inimigo::printv() {
        cout << "do Inimigo: " << get_vida() << endl;
        cout << "Estamina do Inimigo: " << get_estamina() << endl;
    }
    
    void Inimigo::envenenado(int cont){
        int aux2;
        if(get_veneno() == false){
            aux2 = 0;
        }
        else if(get_veneno() == true){
            if(cont < 5){
                cout << "O inimigo está envenenado por: " << (5 - cont) << " rodadas" << endl;
                aux2 = get_vida() - 5;
                set_vida(aux2);

            }
            else if(cont == 5){
                cout << "O inimigo não está mais envenendado" << endl;
                set_veneno(false);
            }
        }

    }

int Inimigo::get_max_estamina(){
        return _max_estamina;
} 

int Inimigo::get_vida(){
    return _vida;
}
void Inimigo::set_vida(int vida){
    _vida = vida;
}
int Inimigo::get_atq(){

    return _atq;
}
void Inimigo::set_atq(int atq){

    _atq = atq;
}
int Inimigo::get_def(){
    return _def;
}
void Inimigo::set_def(int def){
    _def = def;
}
int Inimigo::get_estamina(){
    return _estamina;
}
void Inimigo::set_estamina(int estamina){
    _estamina = estamina;
}
void Inimigo::set_max_estamina(int maxe){
    _max_estamina = maxe;
}


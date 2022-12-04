#pragma once
#include "inimigo.hpp"

using namespace std;

class Inimigo:protected Usuario{
private:
    bool _envenenado;

public:
    Inimigo::Inimigo(int vida, int estamina, int ataque, int defesa, bool veneno): Usuario(vida, estamina, ataque, defesa),_envenenado(veneno){}

    bool Inimigo::get_veneno(){
        return _envenenado;
    }
    void Inimigo::set_veneno(bool envenenado){
        _envenenado = envenenado;
    }
    void Inimigo::print() override{
        cout << "veneno: " << get_veneno() << endl;
    }
    void Inimigo::printiv() override{
        cout << "veneno: " << get_veneno() << endl;
    }
};
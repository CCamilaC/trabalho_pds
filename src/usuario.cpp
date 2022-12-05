#include "usuario.hpp"

using namespace std;

    Usuario::Usuario(int vida, int atq, int def, int estamina){
       set_vida(vida);
       set_estamina(estamina);
       set_atq(atq);
       set_def(def);


    }
    virtual int Usuario::get_max_estamina(){
        return _max_estamina;
    }

    virtual int Usuario::get_vida(){
        return _vida;
    }
    virtual void Usuario::set_vida(int vida){
        _vida = vida;
    }
    virtual int Usuario::get_atq(){

        return _atq;
    }
    virtual void Usuario::set_atq(int atq){

        _atq = atq;
    }
    virtual int Usuario::get_def(){
        return _def;
    }
    virtual void Usuario::set_def(int def){
        _def = def;
    }
    virtual int Usuario::get_estamina(){
        return _estamina;
    }
    virtual void Usuario::set_estamina(int estamina){
        _estamina = estamina;
    }
    virtual void Usuario::print(){
        cout<<"vida: "<< get_vida() << "\n";
        cout<< "estamina: " << get_estamina() << "\n";
        cout<<"ataque: "<< get_atq()<< "\n";
        cout<<"defesa: "<< get_def() <<"\n";

    }

    virtual void Usuario::printv(){
       cout<< "Sua vida: "<< get_vida() << "\n";
       cout << "Sua estamin: " << get_estamina() << endl;
    }
    virtual void Usuario::printiv(){
       cout<< "Vida inimigo: "<< get_vida() << "\n";
       cout << "Estamina do inimigo: " << get_estamina() << endl;
    }

   
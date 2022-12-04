#include "usuario.hpp"

using namespace std;

    Usuario::Usuario(int x, int y, int z, int w){
       set_vida(x);
       set_estamina(y);
       set_atq(z);
       set_def(w);

       // veneno = false;
    }

    /*virtual bool Usuario::get_veneno(){
        return veneno;
    }

    virtual void Usuario::set_veneno(bool x){
        veneno = x;
    }*/

    virtual int Usuario::get_vida(){
        return vida;
    }
    virtual void Usuario::set_vida(int x){
        vida = x;
    }
    virtual int Usuario::get_atq(){

        return atq;
    }
    virtual void Usuario::set_atq(int x){

        atq = x;
    }
    virtual int Usuario::get_def(){
        return def;
    }
    virtual void Usuario::set_def(int x){
        def = x;
    }
    virtual int Usuario::get_estamina(){
        return estamina;
    }
    virtual void Usuario::set_estamina(int x){
        estamina = x;
    }
    virtual void Usuario::print(){
        cout<<"vida: "<< get_vida() << "\n";
        cout<< "estamina: " << get_estamina() << "\n";
        cout<<"ataque: "<< get_atq()<< "\n";
        cout<<"defesa: "<< get_def() <<"\n";
        //cout << "veneno: " << get_veneno() << endl;
    }

    virtual void Usuario::printv(){
       cout<< "sua vida: "<< get_vida() << "\n";
    }
    virtual void Usuario::printiv(){
       cout<< "vida inimigo: "<< get_vida() << "\n";
       //cout << "veneno: " << get_veneno() << endl;
    }

    virtual void Usuario::adiciona_item(item x){
        inventario.push_back(x);


    }

    virtual int Usuario::usa_item(int x, Usuario *p){


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

    virtual void Usuario::mostra_item(){
        for(int i = 0; i < inventario.size(); i ++){
            cout << "(" << i << ")" << inventario[i].getNome() << endl;
            }

    }
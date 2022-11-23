#include "jogador.hpp"

using namespace std;

    Jogador::Jogador(int x, int y, int z, int w){
        vida = x;
        atq = y;
        def = z;
        estamina = w;
        veneno = false;
    }

    bool Jogador::get_veneno(){
        return veneno;
    }

    void Jogador::set_veneno(bool x){
        veneno = x;
    }

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
        cout<<"vida: "<< get_vida() << "\n";
        cout<< "estamina: " << get_estamina() << "\n";       
        cout<<"ataque: "<< get_atq()<< "\n";
        cout<<"defesa: "<< get_def() <<"\n";
        cout << "veneno: " << get_veneno() << endl;
    }

    void Jogador::printv(){
       cout<< "sua vida:"<< get_vida() << "\n"; 
    }
    void Jogador::printiv(){
       cout<< "vida inimigo:"<< get_vida() << "\n"; 
       cout << "veneno:" << get_veneno() << endl;
    }

    void Jogador::adiciona_item(item x){
        inventario.push_back(x);

        if(x.getTipo() == 1){
            int p = 0;
            p = get_atq();
            p += x.getEfeito();
            set_atq(p);
          
        }
        if(x.getTipo() == 2){
            int p = 0;
            p = get_def();
            p += x.getEfeito();
            set_def(p);
            
        }
    }

    int Jogador::usa_item(int x, Jogador p){
        if(inventario[x].getTipo() == 1){
            //try catch erro "ja equipado"
            cout << "ja equipado" << endl;
        }
        if(inventario[x].getTipo() == 2){
            //try catch erro "ja equipado"
            cout << "ja equipado" << endl;
        }
        if(inventario[x].getTipo() == 3){
            set_vida(100);
            inventario.erase(inventario.begin() + x);
            printv();
        }
        if(inventario[x].getTipo() == 4){
          
            int x = p.get_vida() - inventario[x].getEfeito();
            //p.set_vida(x);
            //cout<<"vida do inimigo:"<< p.get_vida() <<"\n";
            inventario.erase(inventario.begin() + x);
            return 1;
        }
    }

    void Jogador::mostra_item(){
        for(int i = 0; i < inventario.size(); i ++){
            cout << "(" << i << ")" << inventario[i].getNome() << endl;
            }
        
    }
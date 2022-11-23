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
void Jogador::printv(){
    cout<<"sua vida:"<< get_vida() << "\n"; 
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

void Jogador::usa_item(int x){
    if(inventario[x].getTipo() == 1){
        //try catch erro "ja equipado"
    }
    if(inventario[x].getTipo() == 2){
        //try catch erro "ja equipado"
    }
    if(inventario[x].getTipo() == 3){
        set_vida(1000);
        printv();
    }
    if(inventario[x].getTipo() == 4){
        //vida1 -= inventario[x].getEfeito();
        //cout<<"vida do inimigo:"<< vida1 <<"\n";
    }
}

void Jogador::mostra_item(){
    for(int i = 0; i < inventario.size(); i ++){
        cout << inventario[i].getNome() << endl;
    }
}

std::string item::getNome(){
     return _nome;
}

int item::getTipo(){
    return _tipo;
}

int item::getEfeito(){
    return _efeito;
}

item::item(string x, int y, int z){
    _nome = x;
    _tipo = y;
    _efeito = z;
}
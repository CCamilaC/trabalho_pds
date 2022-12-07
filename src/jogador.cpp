#include <vector>
#include <math.h>
#include "jogador.hpp"

using namespace std;

Jogador::Jogador(int vida, int estamina, int ataque, int defesa){
    
    _vida = vida;
    _atq = ataque;
    _def = defesa;
    _estamina = estamina;
} 
int Jogador::get_vida(){
    return _vida;
}
void Jogador::set_vida(int x){
    _vida = x;
}
int Jogador::get_atq(){
    return _atq;
}
void Jogador::set_atq(int x){
    _atq = x;
}
int Jogador::get_def(){
    return _def;
}
void Jogador::set_def(int x){
    _def = x;
}
int Jogador::get_estamina(){
    return _estamina;
}
void Jogador::set_estamina(int x){
    _estamina = x;
}
void Jogador::print() {
    cout<<"vida: " ;
    cout<< "estamina: " ;
    cout<<"ataque: ";
    cout<<"defesa: ";
    cout << "veneno: ";
}
void Jogador ::printv(){
    cout << "Sua vida: ";
    cout << "Sua estamina: ";
}

void Jogador::adiciona_item(item x){
        _inventario.push_back(x);
 }

void Jogador::usa_item(int x, Jogador *p, Inimigo *i){

    if(_inventario[x].getTipo() == 1){
        int atq_antes = p->get_atq();
        int aux = 0;
        aux =_inventario[x].get_intensidadeEfeito() + p->get_atq();
        p->set_atq(aux);
        _inventario.erase(_inventario.begin() + x);
         cout << "Seu ataque aumentou de " << atq_antes << " para " << p->get_atq() << endl;
    }

    else if(_inventario[x].getTipo() == 2){
        int def_antes = p->get_def();
        int aux = 0;
        aux =_inventario[x].get_intensidadeEfeito() + p->get_def();
        p->set_def(aux);
         _inventario.erase(_inventario.begin() + x);
        cout << "Sua defesa aumentou de " << def_antes << " para " << p->get_def() << endl;
    }

    else if(_inventario[x].getTipo() == 3){
        int vida_antes = p->get_vida();
        int cura = _inventario[x].get_intensidadeEfeito();
        int aux1 = 0;
        int aux2 = 0;
        aux1 = cura + p->get_vida();
        if(aux1 > 100){
            aux2 = aux1 - 100;
            cura = cura - aux2;
            aux1 = 100;
        }
        p->set_vida(aux1);
        _inventario.erase(_inventario.begin() + x);
        cout << "Voce curou " << cura << " pontos de vida" << endl;
    }

    else if(_inventario[x].getTipo() == 4){
        bool t = true;
        i->set_veneno(t);
        _inventario.erase(_inventario.begin() + x);
        cout << "Voce usou o item" << endl;

        }
        else if(_inventario[x].getTipo() == 5){
        int efeito = _inventario[x].get_intensidadeEfeito();
        int aux1 = 0;
        int aux2 = 0;
        aux1 = p->get_vida() - efeito;
        if(aux1 < 0){
            aux2 = fabs(aux1);
            efeito = efeito - aux2;
            aux1 = 0;
        }
        p->set_vida(aux1);
        _inventario.erase(_inventario.begin() + x);
        cout << "O item falhou e voçê recebeu " << efeito << " de dano" << endl;
    }
}

void Jogador::mostra_item(){
    for(int i = 0; i < _inventario.size(); i ++){
        cout << "(" << i << ")" << _inventario[i].getNome() << endl;
    }
}

void Jogador::remove_item(){
    int random;
    random = (rand() % _inventario.size());
    _inventario.erase(_inventario.begin() + random);
}


#include <iostream>
#include "inferno.hpp"
#include <vector>
#include <string>
using namespace std;
//1 smp será a escolha boa
Inferno::Inferno(){ //construtor
    _choice.clear();
    _contador=0;
    batalha= batalhar();
}
int Inferno::Escolha(){
    int aux=0; //conterá a escolha feita
    do{ //escolha de uma das opções
        cin>>aux;
        switch (aux)
        {
        case '1':
            _contador++;
            _choice.push_back(aux);
            return aux;
            break;
        case '2':
            _choice.push_back(aux);
            return aux;
        default:
            break;
        }
    } while(aux!=1 || aux!=2);
}

int Inferno::Preguica(){
   //adicionar cout diálogo
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        break;
    case '2':
        //cout dialogo ruim
        break;
    default:
        break;
    }

    //inico da batalha
    batalha.batalhar();
}

int Inferno::Gula(){
    //adicionar cout diálogo
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        break;
    case '2':
        //cout dialogo ruim
        break;
    default:
        break;
    }
}
int Inferno::Soberba(){
    //adicionar cout diálogo
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        break;
    case '2':
        //cout dialogo ruim
        break;
    default:
        break;
    }

    //inico da batalha
    batalha.batalhar();
}
int Inferno::Luxuria(){

    //adicionar cout diálogo
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        break;
    case '2':
        //cout dialogo ruim
        break;
    default:
        break;
    }
    
}
int Inferno::Avareza(){
    //adicionar cout diálogo
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        break;
    case '2':
        //cout dialogo ruim
        break;
    default:
        break;
    }
}
int Inferno::Inveja(){
    //adicionar cout diálogo
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        break;
    case '2':
        //cout dialogo ruim
        break;
    default:
        break;
    }
    //inico da batalha
    batalha.batalhar();
}
int Inferno::Ira(){
    //adicionar cout diálogo
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        break;
    case '2':
        //cout dialogo ruim
        break;
    default:
        break;
    }
}

void Inferno::Batalha_final(){

    //cout dialogo
    batalha.batalhar();
}
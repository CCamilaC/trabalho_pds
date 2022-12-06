#include <iostream>
#include "../include/batalha.hpp"
#include "../include/inferno.hpp"
#include "../include/inventario.hpp"
#include "../include/usuario.hpp"
#include "../include/inimigo.hpp"
#include "../include/jogador.hpp"
#include "../include/ceu.hpp"
#include <string>

using namespace std;

int main()
{
    Jogador user(100, 6, 15, 10);
    item i1("Megafone de platão", 1, 5);//preguiça
    item i2("Brioche duro", 1, 7);//gula
    item i3("espada", 5, 5);//soberba
    item i4("colete de diamantes", 2, 8);//luxúria
    item i5("taser", 5, 5);//avareza
    item i6("lâmpada", 5, 5);//inveja
    item i7("GUIA", 2, 8);//ira
    Inimigo inim(300, 10, 10, 0, 0);
    Batalha luta;
    char aux;
    Inferno *inf= new Inferno ("",""); 
    //Inicializar_historia
    try{
        inf->Inicializar_historia();
    }
    catch(invalid_argument& e){
        cout<<e.what()<<endl;
    }
    //Preguiça
    try{
        aux=inf->Preguica();
        
    }
    catch(invalid_argument& e){
        cout<<e.what()<<endl;
    }
    if(aux=='1'){
        user.adiciona_item(i1);
    }
    while(luta.batalhar(&user, &inim) == 1){}
    //verificar se a vida não é zero
    //Gula
    try{
        inf->Gula();
    } 
    catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    if(aux=='1'){
        user.adiciona_item(i2);
    }
    //Soberba
    try{
    inf->Soberba();
    } 
    catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    if(aux=='2'){
        user.adiciona_item(i3);
    }
    while(luta.batalhar(&user, &inim) == 1){}
    //Luxuria
    try{
        aux = inf->Luxuria();
    } 
    catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    if(aux == '1'){
        user.adiciona_item(i4);
    }
    // Avareza
    try{
        aux = inf->Avareza();
    } 
    catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    if(aux == '2'){
        user.adiciona_item(i5);
    }
    //Inveja
    try{
        aux = inf->Inveja();
    } 
    catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    if(aux == '1'){
        user.adiciona_item(i6);
    }
    while(luta.batalhar(&user, &inim) == 1){}
    // Ira    
    try{
        inf->Ira();
    }
    catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    if(aux=='1'){
        user.adiciona_item(i7);
    }
    //batalha_final
    inf->Batalha_final();
    while(luta.batalhar(&user, &inim) == 1){}
    string nome;
    nome=inf->getNome();
    //PARTE DO CÉU
    Ceu ceu(nome);
    int pontuacaoFinal;
    pontuacaoFinal=inf->getContador();
    if(pontuacaoFinal>=4){
        ceu.Ceu_bom();
    }
    else{
        ceu.Ceu_ruim();
    }
    ceu.Finalizar_historia();
    /* OLHAR O QUE É ISSO COM OS MENINOS
    cout << "Jogador:" << endl;
    user.print();
    cout << endl << "Inimigo:" << endl;
    inim.print();
    cout << endl;

    cout << "sistema de batalha" << endl;
    Batalha luta;
    luta.batalhar(user, inim);
    */
    ////////////////////////////////////////////////////////////////////////////////////
    
    return 0;
}



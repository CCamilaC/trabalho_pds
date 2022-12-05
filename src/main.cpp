#include <iostream>
#include "../include/batalha.hpp"
#include "../include/inferno.hpp"
#include "../include/inventario.hpp"
#include "../include/usuario.hpp"
#include "../include/inimigo.hpp"
#include "../include/jogador.hpp"
#include <string>


using namespace std;

int main()
{
    
    Inferno inf("",""); 
    try{
        inf.Inicializar_historia();
    }
    catch(invalid_argument& e){
        cout<<e.what()<<endl;
    }
    try{
        inf.Preguica();
    }
    catch(invalid_argument& e){
        cout<<e.what()<<endl;
    }
    try{
    inf.Gula();
    } catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    try{
    inf.Soberba()
    } catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    try{
    inf.Luxuria();
    } catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    try{
    inf.Avareza();
    } catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    try{
    inf.Inveja();
    } catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    try{
    inf.Ira();
    } catch(invalid_argument& e){
        cout << e.what() << endl;
    }
    
    item i1("espada de fogo", 1, 3);
    item i2("escudo das almas", 2, 2);
    //item i3("elixir da vida", 3, 0);
    item i4("lagrimas da meia noite", 4, 5);
    //item i5("coxa de frango", 3, 0);
   //item i6("escudo do campeao infernal", 2, 3);
   //item i7("lamina do exilado", 1, 3);

    Jogador user(250, 25,10 , 5);
    user.adiciona_item(i1);
    user.adiciona_item(i2);
    user.adiciona_item(i4);
    //user.adiciona_item(i4);
    Jogador inim(300, 10, 0, 0);
     cout << "Jogador:" << endl;
    user.print();
    cout << endl << "Inimigo:" << endl;
    inim.print();
    cout << endl;

    cout << "sistema de batalha" << endl;
    Batalha luta;
    luta.batalhar(user, inim);

    ////////////////////////////////////////////////////////////////////////////////////
    
    return 0;
}




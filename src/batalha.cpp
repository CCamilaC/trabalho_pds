#include "batalha.hpp"

using namespace std;

void Batalha::batalhar(Jogador user, Jogador inim){
    int a;
    int b;
    int cont1 = 0;
    int cont2 = 0;
    int ux;
    int ix;

    while(1){

        int escolha = 0;
        int c = 0;

        ux = user.get_veneno();
        ix = inim.get_veneno();

/*
        if(ux == 1){
            if(cont1 < 5){
                user.set_vida(user.get_vida() - 5);
                user.printv();
                cont1++;
            } else{
                cont1 = 0;
                user.set_veneno(false);
            }
        }
        if(ix == 1){
            if(cont2 < 5){
                inim.set_vida(inim.get_vida() - 5);
                inim.printiv();
                cont2++;
            } else{
                cont2 = 0;
                inim.set_veneno(false);
            }
        }
        */

        user.printv();
        inim.printiv();


        //if (a == 1 || a == 3){

        VOLTA_AQUI:
        escolha = 0;

ESCOLHER:
        cout << "\n" << "escolha entre:" <<"\n\n"<<"(1)atacar"<<"\n\n"<<"(2)defender "<< "\n\n" << "(3)usar item" <<"\n\n";
        cin >> escolha;

        if (escolha == 1){
            int y = user.get_atq() - inim.get_def();
            y = inim.get_vida() - y;
            inim.set_vida(y);

             try{
         int x =  user.get_estamina() - 1;
    user.set_estamina(x);

 if(x < 0){
            x = 0;
             user.set_estamina(x);
      throw "sua estamina esta em zero, voce nao pode atacar. ";
    }

    }catch(const char *e){
cout << e;
goto ESCOLHER;
    }
            if (inim.get_vida() <= 0 || user.get_vida() <= 0){
                cout << "a batalha acabou" << endl;
                break;
            }
            cout<<"vida do inimigo:"<< inim.get_vida() <<"\n";
            cout<<"estamina do inimigo:"<< inim.get_estamina() <<"\n" << "====================" << "\n";
            user.print();
        }
        if (escolha == 2){
            int y = inim.get_atq() - user.get_def();
            int x = user.get_vida() - y;
            user.set_vida(x);
            int z = user.get_estamina() + 1;
            user.set_estamina(z);
            if (inim.get_vida() <= 0 || user.get_vida() <= 0){
                cout << "a batalha acabou";
                break;
            }
            user.print();


        }
        if (escolha == 3){
            int iten = 0;

            cout << "inventario:" << endl;
            user.mostra_item();
            cout << "(8)voltar" << endl;
            cin >> iten;
            if(iten == 8){
                goto VOLTA_AQUI;
            }
             user.usa_item(iten, &user);

            //inim.set_veneno(x);
            //inim.set_vida(inim.get_vida() - 5);
            //inim.printiv();
        }
        //}
        cout << "\n";

        //if (a == 0 || a == 2 || a == 4){

            cout<< "eh a vez do inimigo" << "\n\n";

VOLTAR:
    int aux = 5;
        c = rand() % 2;
         int cont;
        if(user.get_veneno() == 1){
                int x = 0;

                if(cont < 5){
aux = aux - cont;
cout <<  "o inimigo esta envenenado por:"<< aux<<" rodadas"<< "\n";
            x = inim.get_vida() - 1;
            inim.set_vida(x);
            ++cont;
                }else{
                    cout << "o inimigo nao esta mais envenenado" << "\n";
                bool y = false;
                user.set_veneno(y);}
        }

        if (c == 1){
            cout<< "o inimigo atacou:" << "\n\n";
            if(escolha == 2){
                int y = inim.get_atq() - user.get_def();
                int x = user.get_vida() - y;
                user.set_vida(x);
            } else{
                int y = inim.get_atq();
                int x = user.get_vida() - y;
                user.set_vida(x);
            }

            try{
    int z = inim.get_estamina() - 1;
    inim.set_estamina(z);
    if(z < 0){
        throw "o inimigo tentou atacar, mas esta sem estamina.";
    }
}catch(const char *e){

cout << e << "\n" << "\n";

goto VOLTAR;
}

            if (inim.get_vida() <= 0 || user.get_vida() <= 0){
                cout << "a batalha acabou";
                break;
            }
            user.printv();
        }

            if (c == 0){
                cout<< "o inimigo defendeu:" << "\n";
                if(escolha == 1){
                    int y = user.get_atq() - inim.get_def();
                    y = inim.get_vida() - y;
                    inim.set_vida(y);
                }

                int z = inim.get_estamina() + 1;
                inim.set_estamina(z);
                if (inim.get_vida() <= 0 || user.get_vida() <= 0){
                cout << "a batalha acabou";
                break;
            }
            cout << " vida do inimigo:" << inim.get_vida() << "\n";
            cout << " estamina do inimigo:" << inim.get_estamina() << "\n\n";
            }
        //}
        cout << "\n";

    }

}

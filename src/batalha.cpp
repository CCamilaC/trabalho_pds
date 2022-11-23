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

        VOLTA_AQUI:
        escolha = 0;


        cout << "\n" << "escolha entre:" <<"\n\n"<<"(1)atacar"<<"\n\n"<<"(2)defender "<< "\n\n" << "(3)usar item" <<"\n\n";
        cin >> escolha;

        if (escolha == 1){
            int y = user.get_atq() - inim.get_def();
            y = inim.get_vida() - y;
            inim.set_vida(y);
            int x = user.get_estamina() - 1;
            user.set_estamina(x);
            if (inim.get_vida() <= 0 || user.get_vida() <= 0){
                cout << "a batalha acabou" << endl;
                break;
            }
            cout<<"vida do inimigo:"<< inim.get_vida() <<"\n";
            cout<<"estamina do inimigo:"<< inim.get_estamina() <<"\n" << "====================" << "\n";
            user.print();
        }
        if (escolha == 2){
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
            int x = user.usa_item(iten, inim);
            if(x == 0){
                goto VOLTA_AQUI;
            }
            inim.set_veneno(x);
            inim.set_vida(inim.get_vida() - 5);    
            inim.printiv();
        }
        cout << "\n";



        cout<< "eh a vez do inimigo" << "\n\n";
    

        c = rand() % 2;

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
    
            int z = inim.get_estamina() - 1;
            inim.set_estamina(z);

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
        cout << "\n";

    }

}

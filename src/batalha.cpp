#include "batalha.hpp"

using namespace std;

void Batalha::batalhar(Jogador user, Jogador inim){
    int a;
    int b;
    while(1){
        a = rand()%2;

        int escolha = 0;


        if (a == 1){

            escolha = 0;

            
            cout << "\n" << "escolha entre:" <<"\n\n"<<"(1)atacar"<<"\n\n"<<"(2)defender "<< " (3)usar item" <<"\n\n";
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

            
        }
        cout << "\n";

        if (a == 0){

            cout<< "eh a vez do inimigo" << "\n\n";
            int c = 0;

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
        }
        cout << "\n";

    }

}

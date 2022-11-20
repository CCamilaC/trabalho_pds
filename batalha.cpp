#include "batalha.hpp"

Jogador jogador;

void Batalha::batalhar(){
    int a;
    int b;
    while(1){
        a = rand()%2;


        if (a == 1){



            int escolha = 0;
            cout << "\n" << "escolha entre:" <<"\n\n"<<"(1)atacar"<<"\n\n"<<"(2)defender "<< " (3)usar item" <<"\n\n";
            cin >> escolha;

            if (escolha == 1){
                int y = jogador.get_atq() - def1;
                vida1 = vida1 - y;
                int x = jogador.get_estamina() - 1;
                jogador.set_estamina(x);

                if (vida1 <= 0 || jogador.get_vida() <= 0){
                    cout << "a batalha acabou" << endl;
                    break;
                }
                cout<<"vida do inimigo:"<< vida1<<"\n";
                cout<<"estamina do inimigo:"<< estamina1<<"\n" << "====================" << "\n";
                jogador.print();
            }       
            if (escolha == 2){
                int y = atq1 - jogador.get_def();
                int x = jogador.get_vida() - y;
                jogador.set_vida( x);
                int z = jogador.get_estamina() + 1;
                jogador.set_estamina(z);

                if (vida1 <= 0 || jogador.get_vida() <= 0){
                    cout << "a batalha acabou";
                    break;
                }
                jogador.print();
            }
            if (escolha == 3){
                int iten = 0;
                cout << "inventario:" << endl;
                jogador.mostra_item();
                cin >> iten;
                jogador.usa_item(iten);
            }
        }
        cout << "\n";

        if (a == 0){

            cout<< "eh a vez do inimigo" << "\n\n";
            int c = 0;

            c = rand() % 2;

            if (c == 1){
                cout<< "o inimigo atacou:" << "\n\n";
                int y = atq1 - jogador.get_def();
                int x = jogador.get_vida() - y;
                jogador.set_vida(x);
                estamina1--;

                if (vida1 <= 0 || jogador.get_vida() <= 0){
                    cout << "a batalha acabou";
                    break;
                }
                jogador.printv();
            }

            if (c == 0){
                cout<< "o inimigo defendeu:" << "\n";
                int y = jogador.get_atq() - def1;
                vida1 = vida1 - y;
                estamina1++;

                if (vida1 <= 0 || jogador.get_vida() <= 0){
                    cout << "a batalha acabou";
                    break;
                }
                cout << " vida do inimigo:" << vida1<< "\n";
                cout << " estamina do inimigo:" << estamina1<< "\n\n";
            }
        }
        cout << "\n";

    }

}

#include "batalha.hpp"

using namespace std;

void Batalha::batalhar(Jogador *user, Jogador *inim){
    int escolha;
    int escolha_inim;
    cout << "\n" << "escolha entre:" <<"\n\n"<<"[1] = Atacar"<<"\n\n"<<"[2] = Defender "<< "\n\n" << "[3] = Usar item" <<"\n\n";
    cin >> escolha;
    if (escolha == 1){
        atacar(user, inim);
        

        user->printv();
        inim->printiv();
    }

    else if(escolha == 2){
        defender(user, inim);
        
        
        user->printv();
        inim->printiv();

    }

    else if(escolha == 3){

        while(inventario(user, inim) == 0){
            batalhar(user, inim);
        }
        user->printv();
        inim->printiv();
    
    
    }

    escolha_inim = (rand() % 2);
    if(escolha_inim == 0){
        cout << "O inimigo atacou" << endl;
        cout << "------------------------------------------------------" << endl;
        atacar(inim, user);

    }
    else if(escolha_inim == 1){
        cout << "O inimigo defendeu" << endl;
        cout << "------------------------------------------------------" << endl;
        defender(inim, user);

    }
}




        bool Batalha::atacar(Jogador *user, Jogador *inim){
            int y = user->get_atq() - inim->get_def();
            y = inim->get_vida() - y;
            inim->set_vida(y);

            try{
            int x =  user->get_estamina() - 1;
            user->set_estamina(x);

            if(x < 0){
                x = 0;
                user->set_estamina(x);
            throw "sua estamina esta em zero, voce nao pode atacar. ";
            }

            }catch(const char *e){
                cout << e;

            }
            if (inim->get_vida() <= 0 || user->get_vida() <= 0){
                cout << "a batalha acabou" << endl;
                return true;

            }
            cout<<"vida do " << inim->get_nome()<<":"<< inim->get_vida() <<"\n";
            cout<<"estamina do "<< inim->get_nome()<<":" << inim->get_estamina() <<"\n" << "====================" << "\n";
            user->print();
            return false;
        }

        bool Batalha::defender(Jogador *user, Jogador *inim){
            int y = inim->get_atq() - user->get_def();
            int x = user->get_vida() - y;
            user->set_vida(x);
            int z = user->get_estamina() + 1;
            user->set_estamina(z);
            if (inim->get_vida() <= 0 || user->get_vida() <= 0){
                cout << "a batalha acabou";
                return true;

            }
            user->print();
            return false;


        }

        bool Batalha::inventario(Jogador *user, Jogador *inim){
            
            int iten = 0;

            cout << "inventario: " << endl;
            user->mostra_item();
            cout << "[8] = voltar" << endl;
            cin >> iten;
            if(iten == 8){
                return 0;
            }
             user->usa_item(iten, user, inim);
             return 1;


        }


        void Batalha::envenenado(Jogador *user, Jogador *inim){
            int x = 0;
            int aux = 5;
            int cont;

            if(cont < 5){
                aux = aux - cont;
                cout <<  "o inimigo esta envenenado por:"<< aux <<" rodadas"<< "\n";
                x = inim->get_vida() - 1;
                inim->set_vida(x);
                ++cont;
            }else{
                cout << "o inimigo nao esta mais envenenado" << "\n";
                bool y = false;
                user->set_veneno(y);}
        }
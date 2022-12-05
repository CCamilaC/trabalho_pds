#include "../include/batalha.hpp"

using namespace std;

void Batalha::batalhar(Jogador *user, Jogador *inim){
int escolha;
    cout << "\n" << "escolha entre:" <<"\n\n"<<"(1)atacar"<<"\n\n"<<"(2)defender "<< "\n\n" << "(3)usar item" <<"\n\n";


    atacar(user, inim);
    atacar(inim, user);

}




        void Batalha::atacar(Jogador *user, Jogador *inim){
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

            }
            cout<<"vida do " << inim->get_nome()<<":"<< inim->get_vida() <<"\n";
            cout<<"estamina do "<< inim->get_nome()<<":" << inim->get_estamina() <<"\n" << "====================" << "\n";
            user->print();
        }
        void Batalha::defender(Jogador *user, Jogador *inim){
            int y = inim->get_atq() - user->get_def();
            int x = user->get_vida() - y;
            user->set_vida(x);
            int z = user->get_estamina() + 1;
            user->set_estamina(z);
            if (inim->get_vida() <= 0 || user->get_vida() <= 0){
                cout << "a batalha acabou";

            }
            user->print();


        }
        void Batalha::inventario(Jogador *user){
            int iten = 0;

            cout << "inventario:" << endl;
            user->mostra_item();
            cout << "(8)voltar" << endl;
            cin >> iten;
            if(iten == 8){

            }
             user->usa_item(iten, user);


        }



        void Batalha::envenenado(Jogador *user, Jogador *inim){
    int x = 0;
    int aux = 5;
    int cont;

                if(cont < 5){
aux = aux - cont;
cout <<  "o inimigo esta envenenado por:"<< aux<<" rodadas"<< "\n";
            x = inim->get_vida() - 1;
            inim->set_vida(x);
            ++cont;
                }else{
                    cout << "o inimigo nao esta mais envenenado" << "\n";
                bool y = false;
                user->set_veneno(y);}
        }

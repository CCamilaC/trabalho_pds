#include "batalha.hpp"
#include "jogador.hpp"
#include "inimigo.hpp"

using namespace std;
int cont = 0;

int Batalha::batalhar(Jogador *user, Inimigo *inim){
    int escolha;
    int escolha_inim;
    escolha_inim = (rand() % 2);

    cout << "\n" << "escolha entre:" <<"\n\n"<<"[1] = Atacar"<<"\n\n"<<"[2] = Defender "<< "\n\n" << "[3] = Usar item" <<"\n\n";
    cin >> escolha;
    inim->envenenado(cont);
    cont++;
    if(inim->get_vida() == 0){
        cout << "Voçê derrotou o inimigo" << endl;
        return 2;
    }
    
    if (escolha == 1 && escolha_inim == 0){
        
        cout << "O inimigo atacou" << endl;
        cout << "------------------------------------------------------" << endl;
        if(atacarJ(user, inim, 0)){
            cout << "Voçê derrotou o inimigo" << endl;
            return 2;
        }
        if(atacarI(inim, user, 0)){
            cout << "Voçê foi derrotado" << endl;
            return 0;
        };
        

        user->printv();
        inim->printv();
    }
    else if (escolha == 1 && escolha_inim == 1){
        
        cout << "O inimigo defendeu" << endl;
        cout << "------------------------------------------------------" << endl;
        if(atacarJ(user, inim, 1)){
            cout << "Voçê derrotou o inimigo" << endl;
            return 2;
        }
        defenderI(inim, user);
        

        user->printv();
        inim->printv();
    }    

    else if(escolha == 2 && escolha_inim == 0){
        
        cout << "O inimigo atacou" << endl;
        cout << "------------------------------------------------------" << endl;
        defenderJ(user, inim);
        if(atacarI(inim, user, 1)){
            cout << "Voçê foi derrotado" << endl;
            return 0;
        }
        
        
        user->printv();
        inim->printv();

    }
    else if(escolha == 2 && escolha_inim == 1){
        
        cout << "O inimigo defendeu" << endl;
        cout << "------------------------------------------------------" << endl;
        defenderJ(user, inim);
        defenderI(inim, user);
        
        
        user->printv();
        inim->printv();

    }
    else if(escolha == 3 && escolha_inim == 0){
        
        while(inventario(user, inim) == 0){
            batalhar(user, inim);
        }
        
        cout << "O inimigo atacou" << endl;
        cout << "------------------------------------------------------" << endl;
        if(atacarI(inim, user, 0)){
            cout << "Voçê foi derrotado" << endl;
            return 0;
        }
        user->printv();
        inim->printv();
    
    
    }
    else if(escolha == 3 && escolha_inim == 1){
        
        while(inventario(user, inim) == 0){
            batalhar(user, inim);
        }
        if(user->get_vida() == 0){
            cout << "voçê foi derrotado" << endl;
            return 0;
        }
        
        cout << "O inimigo defendeu" << endl;
        cout << "------------------------------------------------------" << endl;
        defenderI(inim, user);
        user->printv();
        inim->printv();
    
    }
    return 1;
    
}






bool Batalha::atacarJ(Jogador *user, Inimigo *inim, bool atq_def){
    try{
     int x =  user->get_estamina() - 1;
        user->set_estamina(x);

        if(x < 0){
            x = 0;
            user->set_estamina(x);
            throw "sua estamina esta em zero, voce nao pode atacar. ";
        }
        int y = user->get_atq();
        if(atq_def){
            y = y - inim->get_def();
        }
        y = inim->get_vida() - y;
        inim->set_vida(y);
    }catch(const char *e){
        cout << e << endl;
        batalhar(user, inim);
    }
    if (inim->get_vida() <= 0 || user->get_vida() <= 0){
        return true;
    }
    return false;
}

bool Batalha::atacarI(Inimigo *inim, Jogador *user, bool atq_def){
    try{
        int x =  inim->get_estamina() - 1;
        inim->set_estamina(x);

        if(x < 0){
            x = 0;
            inim->set_estamina(x);
            throw "sua estamina esta em zero, voce nao pode atacar. ";
        }
        int y = inim->get_atq();
        if(atq_def){
            y = y - user->get_def();
        }
        y = user->get_vida() - y;
        user->set_vida(y);
    }catch(const char *e){
        cout << e << endl;
        batalhar(user, inim);
    }
    if (inim->get_vida() <= 0 || user->get_vida() <= 0){
        return true;
    }
    return false;
}

bool Batalha::defenderJ(Jogador *user, Inimigo *inim){

    int z = user->get_estamina() + 1;
    if(z > user->get_max_estamina()){
        z = z - 1;
    }
    user->set_estamina(z);
    if (inim->get_vida() <= 0 || user->get_vida() <= 0){

        return true;

    }

    return false;


}
bool Batalha::defenderI(Inimigo *user, Jogador *inim){

    int z = inim->get_estamina() + 1;
    if(z > inim->get_max_estamina()){
        z = z - 1;
    }
    inim->set_estamina(z);
    if (inim->get_vida() <= 0 || user->get_vida() <= 0){

        return true;
    }
    return false;
    }

bool Batalha::inventario(Jogador *user, Inimigo *inim){

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


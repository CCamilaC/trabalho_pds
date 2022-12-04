#include "../include/ceu.hpp"
#include <iostream>
using namespace std;


Ceu::Ceu(int pessoa_salva, string nome){
    _pessoa_salva = pessoa_salva;
    _nome=nome;
}

int Ceu::getDestino(int escolha){
    return escolha;
}

void Ceu::Ceu_bom(){
    cout <<"--------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout << "Que golpe final foi aquele, " + _nome + "!! O jeito que você combinou os poderes dos itens" << endl;
    cout << "para derrotar o demônio foi sensacional, eu nunca duvidei de você! Sua pontuação foi excelente,"<< endl;
    cout << "tanto nas lutas quanto nas escolhas morais. Eu não imaginava que o projeto “Hell x heaven” fosse dar tão certo,"<< endl; 
    cout << "mas você é prova viva, viva talvez não, mas é prova de que ele funciona! Você conseguiu mostrar maestria em suas"<< endl; 
    cout << "decisões e revelou que até mesmo os pecados não são universais e merecem uma segunda perspectiva, conseguindo de fato" << endl;
    cout << "entender a dor de cada um. Sua forma compassiva mostrou que você possui uma das maiores qualidades que o céu precisa."<< endl;
    cout <<"-------------------------------------------------------------------------------------------------------------------------"<<endl;
    char resp;
    if(resp=='\n'){
        cout <<"------------------------------------------------------------------------------------------"<<endl;
        cout << "Parabéns Herói, você cumpriu seu objetivo e agora tem passe ilimitado para" << endl;
        cout << "o céu, mas além disso, você tem direito de selecionar uma das pessoas que você"<< endl;
        cout << "trombou para ir com você!"<< endl; 
        cout <<"------------------------------------------------------------------------------------------"<<endl;
        cout << "[1] = Platão"<< endl;
        cout << "[2] = Maria Antonieta"<< endl;
        cout << "[3] = Napoleão"<< endl;
        cout << "[4] = Marilyn Monroe"<< endl;
        cout << "[5] = Elon Musk"<< endl;
        cout << "[6] = Thomas Edison"<< endl;
        cout << "[7] = Zumbi dos Palmares"<< endl;
        cout <<"------------------------------------------------------------------------------------------"<<endl;
        cout <<"Faça sua escolha:" << endl;
        cin>>_pessoa_salva;

        switch(_pessoa_salva){
            case 1:
                cout << "Platão:"<< endl;
                cout << "Muito obrigado Herói!! "<< endl;
                cout << "Minha missão no céu será mostrar que o questionamento é base para qualquer evolução humana"<< endl;
                break;
            case 2:
                cout << "Maria Antonieta:"<< endl;
                cout << "Muito obrigado Herói!! "<< endl;
                cout << "Minha missão no céu será mostrar que o questionamento é base para qualquer evolução humana"<< endl;
                break;
            case 3:
                cout << "Napoleão:"<< endl;
                cout << "Que grande escolha você teve, agora chegou minha hora de comandar o céu também! "<< endl;
                cout << "Imagine? Eu sendo o Deus dos deuses?? Quer dizer, nós…"<< endl;
                break;
            case 4:
                cout << "Marilyn Monroe:"<< endl;
                cout << "Muito obrigada por compreender minha dor, espero conseguir abrir o sindicado APL (almas por liberdade), que"<< endl;
                cout << "tem como objetivo bloquear o vínculo criado pela dor, entre as vítimas e seus abusadores, pretendo"<< endl;
                cout << "começar com 20 cirurgias de desvinculação, por semana…"<< endl;
                break;
            case 5:
                cout << "Elon Musk:"<< endl;
                cout << "E tem pessoas que dizem que da terra não se leva nada," << endl;
                cout << "pois muito obrigado jovem, os poderosos sempre são poderosos"<< endl;
            case 6:
                cout<< "Thomas Edison:"<<endl;
                cout<< "Ohohoho, irei iluminar o céu inteiro com a MINHA invensão!!"<<endl;
            case 7:
                cout<< "Zumbi dos Palmares:"<<endl;
                cout<<"Obrigado companheiro, se tem alguma coisa que euaprendi com a minha experiência"<<endl;
                cout<<"é que quem sente o sofrimento alheio, nunca estará sozinho."<<endl;
        }        

    }
    cout<<"----------------------------------------------------------------------------------"<<endl;
    cout<<"Anjo: As escolhas foram feitas, espero que esteja feliz com elas!"<<endl; 
    cout<<"      Obrigado por ser parte desse experimento e até uma próxima vida" <<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;
}


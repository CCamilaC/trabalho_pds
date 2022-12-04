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
    cout << "Que golpe final foi aquele, “inserir nome da pessoa”! O jeito que você combinou os poderes dos itens" << endl;
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
        
        
        cin>>_pessoa_salva;

        

    }
}



#include "../include/ceu.hpp"
#include <iostream>
using namespace std;


Ceu::Ceu(string nome){
   _pessoa_salva = '0'; 
   _nome=nome;
}

void esperarEnter(){
   char tmp;
      cout << "Aperte enter para continuar" << endl;
      cin.get(tmp);
}

void Ceu::Ceu_bom(){
   //cout<<"----------------------------------------------------//----------------------------------------------------"<<endl;
   cout<<R"( 
                  ----o-
 _____________   %%% , ,%_________
(___________,,)  %c    >) ,________)
   (_________,,)  )   =  ,______)
        (_____,,)/ _/__,,____)
           / \   \__/ /\
          /\ |        \/\
         /__\|'   ,   /  \,
        < -  '====o==,  /_\
       /    /`       |\ __ \
      /__,_/    |  _/, \____\
      //   |     \/  \    \\
    _( \   \      \  \   _/ \
     //|    \     \  \    |/|
            < `  _\ -)
           /    |_/ |
          |    / |_/
         / _,  ' /|
         \/ \_,--.,
         '(    )'
        / |    | \
        |,/    \,/     )";
   cout << "\nAnjo: Que golpe final foi aquele, " + _nome + "!! O jeito que você combinou os poderes dos itens" << endl;
   cout << "para derrotar o demônio foi sensacional, eu nunca duvidei de você! Sua pontuação foi excelente,"<< endl;
   cout << "tanto nas lutas quanto nas escolhas morais. Eu não imaginava que o projeto “Hell x heaven” fosse dar tão certo,"<< endl; 
   cout << "mas você é prova viva, viva talvez não, mas é prova de que ele funciona! Você conseguiu mostrar maestria em suas"<< endl; 
   cout << "decisões e revelou que até mesmo os pecados não são universais e merecem uma segunda perspectiva, conseguindo de fato" << endl;
   cout << "entender a dor de cada um. Sua forma compassiva mostrou que você possui uma das maiores qualidades que o céu precisa."<< endl;
   //cout <<"-------------------------------------------------------------------------------------------------------------------------"<<endl;
   cin.get();
   cin.get();
   system("clear");
   cout <<"------------------------------------------------------------------------------------------"<<endl;
   cout << "Parabéns Herói, você cumpriu seu objetivo e agora tem passe ilimitado para" << endl;
   cout << "o céu, mas além disso, você tem direito de selecionar uma das pessoas que você"<< endl;
   cout << "trombou para ir com você!"<< endl<<endl; 
   //cout <<"------------------------------------------------------------------------------------------"<<endl;
   cout << "[1] = Platão"<< endl;
   cout << "[2] = Maria Antonieta"<< endl;
   cout << "[3] = Napoleão"<< endl;
   cout << "[4] = Marilyn Monroe"<< endl;
   cout << "[5] = Elon Musk"<< endl;
   cout << "[6] = Thomas Edison"<< endl;
   cout << "[7] = Zumbi dos Palmares"<< endl;
   cout <<""<<endl;
   cout <<"Faça sua escolha:" << endl;
   //cout<<"-----------------------------------------//-----------------------------------------"<<endl;
   _pessoa_salva = '0';
   do{
      cin>>_pessoa_salva;
      if(_pessoa_salva!= '1' && _pessoa_salva!='2' && _pessoa_salva!='3' && _pessoa_salva!='4' && _pessoa_salva!='5' && _pessoa_salva!='6' && _pessoa_salva!='7'){
         cout <<  "Você só pode salvar uma dessas pessoas, mesmo que você queira salvar o Papa!!"<<endl;
         cout <<  "Digite um número válido!!"<<endl;
      }
      switch(_pessoa_salva){
         case '1':
            cout << "Platão:"<< endl;
            cout << "Muito obrigado Herói!! "<< endl;
            cout << "Minha missão no céu será mostrar que o questionamento é base para qualquer evolução humana"<< endl;
            break;
         case '2':
            cout << "Maria Antonieta:"<< endl;
            cout << "Muito obrigado," + _nome +"!!"<< endl;
            cout << "Minha missão no céu será mostrar que o questionamento é base para qualquer evolução humana"<< endl;
            break;
         case '3':
            cout << "Napoleão:"<< endl;
            cout << "Que grande escolha você teve, agora chegou minha hora de comandar o céu também! "<< endl;
            cout << "Imagine? Eu sendo o Deus dos deuses?? Quer dizer, nós…"<< endl;
            break;
         case '4':
            cout << "Marilyn Monroe:"<< endl;
            cout << "Muito obrigada por compreender minha dor, espero conseguir abrir o sindicado APL (almas por liberdade), que"<< endl;
            cout << "tem como objetivo bloquear o vínculo criado pela dor, entre as vítimas e seus abusadores, pretendo"<< endl;
            cout << "começar com 20 cirurgias de desvinculação, por semana…"<< endl;
            break;
         case '5':
            cout << "Elon Musk:"<< endl;
            cout << "E tem pessoas que dizem que da terra não se leva nada," << endl;
            cout << "pois muito obrigado jovem, os poderosos sempre são poderosos"<< endl;
            break;
         case '6':
            cout<< "Thomas Edison:"<<endl;
            cout<< "Ohohoho, irei iluminar o céu inteiro com a MINHA invensão!!"<<endl;
            break;
         case '7':
            cout<<"Zumbi dos Palmares:"<<endl;
            cout<<"Obrigado companheiro, se tem alguma coisa que euaprendi com a minha experiência"<<endl;
            cout<<"é que quem sente o sofrimento alheio, nunca estará sozinho."<<endl;
            break;
         default:
            break;
      }
   }while(_pessoa_salva!= '1' && _pessoa_salva!='2' && _pessoa_salva!='3' && _pessoa_salva!='4' && _pessoa_salva!='5' && _pessoa_salva!='6' && _pessoa_salva!='7');
}

void Ceu::Ceu_ruim(){
   //cout<<"-----------------------------------------//-----------------------------------------"<<endl;
   cout<<R"( 
                  ----o-
 _____________   %%% , ,%_________
(___________,,)  %c    >) ,________)
   (_________,,)  )   =  ,______)
        (_____,,)/ _/__,,____)
           / \   \__/ /\
          /\ |        \/\
         /__\|'   ,   /  \,
        < -  '====o==,  /_\
       /    /`       |\ __ \
      /__,_/    |  _/, \____\
      //   |     \/  \    \\
    _( \   \      \  \   _/ \
     //|    \     \  \    |/|
            < `  _\ -)
           /    |_/ |
          |    / |_/
         / _,  ' /|
         \/ \_,--.,
         '(    )'
        / |    | \
        |,/    \,/     )";
   cout << "\nAnjo: "+_nome + ", você venceu a luta. Desculpe, não estou em clima de" << endl;
   cout << "comemoração. Terminamos agora de computar a sua pontuação e eu nem sabia" << endl;
   cout << "que tinha como o número ser tão pequeno. O que passou na sua cabeça para você" << endl;
   cout << "fazer escolhas tão ruins? Você sinceramente achou que era uma boa ideia ou só estava"<<endl;
   cout << "tentando me sacanear? Não sei nem por que fiquei empolgado em participar desse" <<endl;
   cout << "projeto, você deve achar isso tudo tão engraçado, pois saiba que eu posso perder" << endl;
   cout << "meu emprego por conta disso! Eu não acredito que discuti com o Miguel para te deixarem"<<endl;
   cout << "participar do projeto. Como pode um humano ser tão fundamentalmente malvado? Você vai pro"<<endl;
   cout << "inferno, e não para esse inferno legal cheio de provações e distrações, você vai para o"<<endl;
   cout << "inferno de verdade. Até nunca mais “herói”." << endl;
   cout<<"-----------------------------------------//-----------------------------------------"<<endl;
   cin.get();
}

void Ceu::Finalizar_historia(){
   //cout<<"-----------------------------------------//-----------------------------------------"<<endl;
   cin.get();
   cin.get();
   system("clear");
   cout<<"Anjo: As escolhas foram feitas, espero que esteja feliz com elas!"<<endl; 
   cout<<"      Obrigado por ser parte desse experimento e até uma próxima vida" <<endl;
   //cout<<"----------------------------------------------------------------------------------"<<endl;
   cout<<R"(
___  ___  _______   ________  ___      ___ _______   ________           ___    ___      ___  ___  _______   ___       ___              
|\  \|\  \|\  ___ \ |\   __  \|\  \    /  /|\  ___ \ |\   ___  \        |\  \  /  /|    |\  \|\  \|\  ___ \ |\  \     |\  \             
\ \  \\\  \ \   __/|\ \  \|\  \ \  \  /  / | \   __/|\ \  \\ \  \       \ \  \/  / /    \ \  \\\  \ \   __/|\ \  \    \ \  \            
 \ \   __  \ \  \_|/_\ \   __  \ \  \/  / / \ \  \_|/_\ \  \\ \  \       \ \    / /      \ \   __  \ \  \_|/_\ \  \    \ \  \           
  \ \  \ \  \ \  \_|\ \ \  \ \  \ \    / /   \ \  \_|\ \ \  \\ \  \       /     \/        \ \  \ \  \ \  \_|\ \ \  \____\ \  \____      
   \ \__\ \__\ \_______\ \__\ \__\ \__/ /     \ \_______\ \__\\ \__\     /  /\   \         \ \__\ \__\ \_______\ \_______\ \_______\    
    \|__|\|__|\|_______|\|__|\|__|\|__|/       \|_______|\|__| \|__|    /__/ /\ __\         \|__|\|__|\|_______|\|_______|\|_______|    
                                                                        |__|/ \|__|                                                     
                                                                                                                                        
                                                                                                                                     )";

}




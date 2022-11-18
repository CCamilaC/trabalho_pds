#include <iostream>
#include "inferno.hpp"
#include <vector>
#include <string>
using namespace std;
//1 smp será a escolha boa

Inferno::Inferno(){ //construtor
    _choice.clear();
    _contador=0;
}
int Inferno::Escolha(){
    int aux=0; //contera a escolha feita
    do{ //escolha de uma das opcoes
        cin>>aux;
        if(aux!=1 || aux!=2){
            cout<<"Anjo: Eii espertalhão, não adianta burlar as regras hein!! Você tem que escolher um das opções 1 ou 2, vou te dar uma nova chance:";
        }
        switch (aux)
        {
        case '1':
            _contador++;
            _choice.push_back(aux);
            return aux;
            break;
        case '2':
            _choice.push_back(aux);
            return aux;
        default:
            break;
        } 
    } while(aux!=1 || aux!=2);
}

void Inferno::Preguica(){
   //adicionar cout dialogo
    int decisao;
    cout<<"Antes mesmo de alcançar o seu objetivo você escuta vozes alteradas. Várias pessoas se reúnem em um círculo discutindo algo, mas o assunto parece variar dependendo de qual voz você presta atenção. No centro dessa baderna está um homem com uma longa barba branca discursando. Você se aproxima."<<endl;
    cout<<"Platão: Não há espaço para filósofos no mundo de hoje. Tudo que todos pensam é no lucro e na produção de bens. Taxado como preguiçoso, dá pra acreditar? Pensar é um trabalho tão nobre quanto agir! Isso é tudo propaganda capitalista idiota, culpa desses empreendedores, gente desse tipo é permitida aqui?. Você aí! Eu nunca te vi por essas bandas antes… sim sim, uma mente fresca. Nos diga o que você pensa, entre na nossa discussão!"<<endl; 
    cout<<"ESCOLHA 1 OU 2:"<<endl;
    cout<<"------------------------\\------------------------"<<endl;
    cout<<"1- O capitalismo é o mal da sociedade, um trabalho como o seu deveria ser o mais prestigiado de todos."<<endl;
    cout<<"2- Todos devem fazer sua parte, pare de ser preguiçoso. Ninguém vive de ideais ou enche a barriga com discursos."<<endl;

    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        cout<<"Platão: É assim que se fala! Eu amo quando concordam comigo. É como eu sempre digo “Quem comete uma injustiça é sempre mais infeliz que o injustiçado”, calma, não era essa a frase que eu queria. De todo jeito você caiu nas minhas graças, tome esse megafone de presente, ele tem o poder mágico de fazer as pessoas te escutarem."<<endl;
        break;
    case '2':
        //OBSERVAÇÃO: TERA QUE COLOCAR O NOME DO PERSONAGEM AQUI
        cout<<"Platão: É assim que se fala! Eu amo quando concordam comigo. É como eu sempre digo “Quem comete uma injustiça é sempre mais infeliz que o injustiçado”, calma, não era essa a frase que eu queria. De todo jeito você caiu nas minhas graças, tome esse megafone de presente, ele tem o poder mágico de fazer as pessoas te escutarem."<<endl;
        break;
    default:
        break;
    }
    cout<<"Sua resposta traz consigo uma grande reverberação dos demais filósofos. De repente você sente algo atingindo sua orelha com força, um deles atirou um rolo de pergaminho em sua direção e você não pode deixar isso passar sem consequências"<<endl;
    //inico da batalha
    batalha.batalhar();
}

void Inferno::Gula(){
    //adicionar cout dialogo
    cout<<"Antes mesmo de seu localizador apitar você vê ao longe uma grande mesa de banquete. Animado pela perspectiva de um lanchinho, você anda em direção a mulher sentada na cabeceira. Sua tela te avisa que é Maria Antonieta, a infame rainha francesa."<<endl;
    cout<<""<<endl;
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        break;
    case '2':
        //cout dialogo ruim
        break;
    default:
        break;
    }
}
void Inferno::Soberba(){
    //adicionar cout dialogo
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        break;
    case '2':
        //cout dialogo ruim
        break;
    default:
        break;
    }

    //inico da batalha
    batalha.batalhar();
}
void Inferno::Luxuria(){

    //adicionar cout dialogo
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        break;
    case '2':
        //cout dialogo ruim
        break;
    default:
        break;
    }
    
}
void Inferno::Avareza(){
    cout<<"A falta de qualquer objeto na vasta planície escura traz ansiedade. Você se apoia no localizador para encontrar a sua próxima provação. Ao longe se encontra um homem estranho, com uma certa cara de rato. O aparelho diz que é Elon Musk, o famoso bilionário."<<endl;
    
    //Elon falando
    cout<<"Elon Musk: O capitalismo é um jogo, você não pode me culpar por ter ganhado. Ter nascido em um berço de ouro é só um detalhe, tenho certeza que qualquer um poderia ter chegado no meu nível se tivesse se esforçado o suficiente. Bando de preguiçosos com suas filosofias e ideais.";
    cout<<" O que eles esperavam que eu fizesse? Desistisse de tudo que tinha e acabasse com o emprego de milhares de pessoas para trazer melhores condições de vida ou qualquer coisa assim?"<<endl;
    
    cout<<"ESCOLHA 1 OU 2:"<<endl;
    cout<<"------------------------\\------------------------"<<endl;
    cout<<"1- Nada é um jogo quando envolve a vida dos outros, nem um centavo de um bilionário é ganho de forma ética. A redistribuição de ganhos é a única forma realmente ética de lidar com a riqueza."<<endl;
    cout<<"2- Não tem problema em aprender a usar o sistema para ganhar. Não foi você que instaurou essa forma de vida injusta, por que você deveria desistir de tudo que conquistou?"<<endl;
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        cout<<"Nada é um jogo quando envolve a vida dos outros, nem um centavo de um bilionário é ganho de forma ética. A redistribuição de ganhos é a única forma realmente ética de lidar com a riqueza."<<endl;
        break;
    case '2':
        cout<<"Não tem problema em aprender a usar o sistema para ganhar. Não foi você que instaurou essa forma de vida injusta, por que você deveria desistir de tudo que conquistou?"<<endl;
        break;
    default:
        break;
    }
}
void Inferno::Inveja(){
    cout<<"Ao longe há uma luz fraca, o localizador apita naquela direção. Passa pela sua cabeça a hipótese de ser a saída do seu inferno pessoal, mas estranhamente quanto mais perto da luz mais quente o ambiente fica. Após seus olhos se acostumarem com a claridade você vê um homem perto de uma fogueira."<<endl;
   
    //Thomas falando
    cout<<"Thomas Edison: No inferno, cercado de fogo ainda, isso sim é castigo eterno. Se me deixassem trazer uma lâmpada pra cá… Oh, você aí, olhe por onde anda! Ok, eu sei que deve ser extremamente chocante me ver por aqui, o Thomas Edison. Eu sou um dos grandes pais da ciência, eu trouxe a luz pro mundo, literalmente!";
    cout<<"Ok, talvez não literalmente, mas eu merecia a glória daquela invenção. Só eu era capaz de levar a lâmpada a um novo nível, a sociedade precisava descobrir essa maravilha da tecnologia, que mal tem não ter sido o inventor que a popularizou? Esses ingratos não teriam metade do que tem hoje se não fosse por mim! Você entende, não?"<<endl;
    cout<<"ESCOLHA 1 OU 2:"<<endl;
    cout<<"------------------------\\------------------------"<<endl;
    cout<<"1- Não importa o bem que se faz ao mundo no fim, roubar nunca é certo."<<endl;
    cout<<"2- O crescimento científico deve ser priorizado, não importa os meios."<<endl;

    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        cout<<"Thomas Edison: Quem disse algo sobre roubar? Eu só peguei a ideia emprestada por uns séculos. Eu já disse que admitiria tudo se me deixassem chegar ao céu. É claro que lá eu falaria sem parar das minhas outras 1091 patentes, se bem que ninguém liga pra nada sem ser a lâmpada..."<<endl;
        break;
    case '2':
        cout<<"Thomas Edison: Esse sabe do que fala! O que mais importa é a glória, quer dizer, a humanidade. Agora me diga, as pessoas ainda falam de mim lá em cima? Claro que falam o grande Thomas Edison, como podem me esquecer..."<<endl;
        break;
    default:
        break;
    }
    //inico da batalha
    cout<<"Quanto mais você se afasta do “inventor” mais arrepiada sua pele fica. De algum modo você sente a atmosfera ao seu redor mudar, como se alguém estivesse te observando. A presença da sua mochila passa pela sua cabeça e você decide abraçá-la em um gesto protetor, como se soubesse que algo estaria atrás dela. Você tenta se acalmar dizendo que é apenas um truque do nível da inveja, mas poucos passos depois algo puxa suas costas com força"<<endl;
    batalha.batalhar();
}
void Inferno::Ira(){
    cout<<"Você está no chão, juntando o resto das suas energias após uma batalha tão difícil quando você ouve, ao fundo, um choro. A princípio você continua deitada(o) à espera de que seja somente mais uma alma vagando, mas você percebe que os choros estão se multiplicando mais e mais e quando percebe só consegue ouvir um barulho ensurdecedor de um grito, até que você estreita os olhos e vê o que julga ser o Zumbi dos Palmares gritando..."<<endl;
    cout<<"Zumbi dos Palmares: Ira!! eu fiquei 14.600 dias na terra desejando minha morte por conta da ira dos brancos, eu cultivei por 14.600 toda dor e sofrimento que a ira deles depositavam em mim, e agora eu estou no inferno por retribuir nem uma fração daquilo que eles fizeram com milhares de pessoas?!";
    cout<<"O meu inferno começou logo quando eu nasci, minha alma faleceu quando eu fui escravizado, torturado, tratado como demônio. Eu duvido que alguém que realmente entende minha situação iria fazer algo diferente de mim, você não concorda?"<<endl;
    cout<<"ESCOLHA 1 OU 2:"<<endl;
    cout<<"------------------------\\------------------------"<<endl;
    cout<<"1- Concordo! A guerra é justa quando se luta por liberdade."<<endl;
    cout<<"2- Discordo! Se as mãos de dois combatentes estão sujas de sangue, então nunca haverá um lado certo."<<endl;

    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        break;
    case '2':
        //cout dialogo ruim
        break;
    default:
        break;
    }
}

void Inferno::Batalha_final(){

    //cout dialogo
    batalha.batalhar();
}
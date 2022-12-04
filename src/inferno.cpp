#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <conio.h>

#include "../include/inferno.hpp"
using namespace std;

//ESCOLHA 1 SEMPRE SERÁ A CERTA 

Inferno::Inferno(string n, string p){ //construtor
    _choice.clear();
    _contador=0;
    _nome=n;
    _pecadoJog=p;
}
int Inferno::Escolha(){
    int aux='0'; //contera a escolha feita
    do{ //escolha de uma das opcoes
        cin>>aux;
        if(aux!=1 && aux!=2){
            cout<<"\nAnjo: Eii espertalhão, não adianta burlar as regras hein!! Você tem que escolher uma das opções 1 ou 2, vou te dar uma nova chance:"<<endl<<endl;
        }
        switch (aux)
        {
        case 1:
            _contador++;
            _choice.push_back(aux);
            return aux;
            break;
        case 2:
            _choice.push_back(aux);
            return aux;
        default:
            break;
        } 
    } while(aux!=1 && aux!=2);
}
int Inferno::getContador(){
    return _contador;
}

void Inferno::Inicializar_historia(){
    //SE DER TEMPO REALOCAR AS VARIAVEIS NOME E PECADO PRA JOGADOR
    cout<<"Bem-vindo pobre alma mortal! Eu sou o anjo designado para cuidar de você por aqui. O sistema diz que você morreu hoje, e, devido a superlotação no purgatório, conseguimos uma vaga aqui no inferno. Só preciso que você confirme seu nome e o pecado que te trouxe aqui."<<endl<<endl;
    string no, pe;
    cout<<"DIGITE SEU NOME: "<<endl;
    getline(cin,no);
    cout<<"\nDIGITE SEU PECADO: "<<endl;
    getline(cin,pe);
    cout<<"\nÉ, esse pecado é pior do que bater na mãe. Brincadeira, não se preocupe, sua estadia no inferno pode não ser permanente. Nosso novo programa chamado 'Hell X Heaven' acabou de entrar na fase de teste e você é nossa primeira cobaia. É bem simples, tudo que você deve fazer é percorrer os horripilantes sete níveis do inferno! Aqui está um localizador mostrando todas as provações que você deve enfrentar para terminar o desafio. Faça questão de parar em todos os lugares que ele apontar. Como você deve imaginar, não gostamos de trapaceiros. Vá meu caro pecador e prove sua dignidade!”"<<endl<<endl;
    cout<<"-----------------------------------------//-----------------------------------------"<<endl<<endl;
    Inferno(no, pe);
}

void Inferno::Preguica(){
    int decisao;
    cout<<"Antes mesmo de alcançar o seu objetivo você escuta vozes alteradas. Várias pessoas se reúnem em um círculo discutindo algo, mas o assunto parece variar dependendo de qual voz você presta atenção. No centro dessa baderna está um homem com uma longa barba branca discursando. Você se aproxima."<<endl<<endl;
    cout<<"Platão: Não há espaço para filósofos no mundo de hoje. Tudo que todos pensam é no lucro e na produção de bens. Taxado como preguiçoso, dá pra acreditar? Pensar é um trabalho tão nobre quanto agir! Isso é tudo propaganda capitalista idiota, culpa desses empreendedores, gente desse tipo é permitida aqui?. Você aí! Eu nunca te vi por essas bandas antes… sim sim, uma mente fresca. Nos diga o que você pensa, entre na nossa discussão!"<<endl<<endl; 
    cout<<_escolha<<endl;
    cout<<"1- O capitalismo é o mal da sociedade, um trabalho como o seu deveria ser o mais prestigiado de todos."<<endl;
    cout<<"2- Todos devem fazer sua parte, pare de ser preguiçoso. Ninguém vive de ideais ou enche a barriga com discursos."<<endl;

    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        cout<<"\nPlatão: É assim que se fala! Eu amo quando concordam comigo. É como eu sempre digo “Quem comete uma injustiça é sempre mais infeliz que o injustiçado”, calma, não era essa a frase que eu queria."<<endl<<endl;
        cout<<"*** NOVO ITEM ADQUIRIDO! ***"<<endl;
        cout<<"--- VOCÊ GANHA UM MEGAFONE DE PLATÃO. ELE TEM O PODER MÁGICO DE FAZER AS PESSOAS TE ESCUTAREM ---"<<endl<<endl;
        break;
    case '2':
        //OBSERVAÇÃO: TERA QUE COLOCAR O NOME DO PERSONAGEM AQUI
        //FEITO 
        cout<<"\nPlatão: Eu deveria saber, alguém que diz "<<endl;
        cout<<'"'<<_pecadoJog<<'"'<<" para um anjo pensaria assim, devo dizer que não fico surpreso."<<endl<<endl;
        break;
    default:
        break;
    }
    cout<<"Sua resposta traz consigo uma grande reverberação dos demais filósofos. De repente você sente algo atingindo sua orelha com força, um deles atirou um rolo de pergaminho em sua direção e você não pode deixar isso passar sem consequências"<<endl;
    cout<<"-----------------------------------------//-----------------------------------------"<<endl<<endl;
    //inico da batalha
}

void Inferno::Gula(){
    cout<<"Antes mesmo de seu localizador apitar você vê ao longe uma grande mesa de banquete. Animado pela perspectiva de um lanchinho, você anda em direção a mulher sentada na cabeceira. Sua tela te avisa que é Maria Antonieta, a infame rainha francesa."<<endl<<endl;
    cout<<"Maria Antonieta: Eu disse uma frase boba uma vez e agora sou obrigada a jantar lama todo dia que nem uma plebeia. O que há de tão mau em incentivar o consumo de brioches? Eu entendo que acumular comida pode ser visto como ruim por alguns, mas vocês só pensam nisso quando alguém rico faz isso. Se um esfomeado qualquer decidir roubar um brioche para não morrer de fome ele deverá ser punido no inferno?"<<endl<<endl;
    cout<<_escolha<<endl;
    cout<<"1- Todos devem ter suas necessidades básicas atendidas, mesmo que às vezes isso aconteça por meios duvidosos."<<endl;
    cout<<"2- O pecado está na ação, não importa a intenção por trás dela. É a única forma realmente justa de lidar com a imoralidade."<<endl;
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        cout<<"\nMaria Antonieta: Não venha com esse papo de socialista para cima de mim. Daqui a pouco nossa janta vai ser cachorros."<<endl<<endl;
        cout<<"*** NOVO ITEM ADQUIRIDO! ***"<<endl;
        cout<<"--- VOCÊ GANHA UM BRIOCHE DURO E VELHO. DA PARA REBATER UMA BOLA COM ESSA COISA ---"<<endl<<endl;
        break;
    case '2':
        //cout dialogo ruim
        cout<<"\nMaria Antonieta: Bla bla bla, isso é papo de moralista. Deve ser por isso que você morreu como um ninguém e eu sou lembrada até hoje como uma rainha!"<<endl<<endl;
        break;
    default:
        break;
    }
    cout<<"-----------------------------------------//-----------------------------------------"<<endl<<endl;
}
void Inferno::Soberba(){
    //adicionar cout dialogo
    cout<<"Andando pelas terras devastadas do inferno, você vê um vulto branco se aproximando de você em alta velocidade. Quando o esbelto cavalo branco para a sua frente um homem baixíssimo desce de sua lombar. Você nem precisa olhar seu localizador para saber que é Napoleão, o soberbo."<<endl;
    cout<<"Napoleão: Mais um dia no inferno, quem diria. Eu só estava tentando fazer o melhor pela França e pelo mundo! Deus não entende nada de paz e harmonia, elas só vêm pela guerra. Um mundo unificado é um mundo melhor! Todos seriam felizes sob o meu comando. Imagine uma Europa unida, não, esqueça a Europa, um mundo unido! Planeta Napoleônico, isso sim é um bom nome. Você daria um bom súdito, talvez eu até te desse um papel mais importante no meu reino, o que acha?"<<endl;
    cout<<_escolha<<endl;
    cout<<"1- Se a unidade vem da dor e da conquista então ela não está unificando nada. "<<endl;
    cout<<"2- Sabe de uma coisa? A humanidade seria melhor com todos do mesmo lado. Eu aceitaria sua proposta."<<endl<<endl;
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        cout<<"\nNapoleão: Você não tem nenhuma visão de futuro, só quer saber de harmonia e amor. Vou te provar como é bom ter um pouco de poder. Mesmo aqui a maioria dos demoniozinhos não me incomodam porque eu sou o invencível Napoleão, e com certeza não é por causa do meu cavalo. Vá lá e tente sobreviver sem poder. "<<endl<<endl;
        break;
    case '2':
        //cout dialogo ruim
        cout<<"\nNapoleão: É assim que eu gosto! Podíamos começar conquistando essa parte do inferno, eu te dou 5%, das riquezas que conquistarmos, não, talvez 2%. Enfim, vamos lá!"<<endl<<endl;
        cout<<"*** NOVO ITEM ADQUIRIDO! ***"<<endl<<endl;
        cout<<"---VOCÊ GANHA UMA ESPADA PARA TE ACOMPANHAR COM NAPOLEÃO"<<endl<<endl;
        break;
    default:
        break;
    }
    cout<<"-----------------------------------------//-----------------------------------------"<<endl<<endl;
    //inico da batalha
    //batalha.batalhar();
}
void Inferno::Luxuria(){
    //adicionar cout dialogo
    cout<<"De longe você escuta uma voz angelical cantando, seu localizador apitando atrapalha as notas afinadas da dama. Enfiando o aparelho irritante no meio das roupas para abafar o barulho, você se aproxima da mulher mais linda que já viu na vida: Marilyn Monroe. Assim que ela te vê, ela corre na sua direção se desculpando"<<endl<<endl;
    cout<<"Marilyn Monroe: Eu não tinha escolha, era o único jeito de sobreviver a Hollywood da época, nunca gostei do que faziam, mas eu precisava me manter entre eles para não calarem a única voz que eu ainda tinha. Eu fui abusada, violentada, chamada de vadia e a única vez que eu era vista minimamente como uma pessoa era quando me sexualizavam, eu fugia para a vida de glamour porque não tinha mais escolha. Por acaso isso é um crime tão grave? Aposto que se fosse um “outrO” no meu lugar ele não estaria aqui, você concorda?"<<endl<<endl;
    cout<<_escolha<<endl;
    cout<<"1- concordo!"<<endl;
    cout<<"2- acho que não concordo, pois se você quisesse que isso não acontecesse com você, você deveria agir de forma respeitável. Uma vez que já estava na posição de sexualizada, você deixou claro que qualquer um tinha direito de fazer o que bem entender. O que não aconteceria com um homem"<<endl;
    int decisao;
    decisao=Escolha();
    switch (decisao)
    {
    case '1':
        //cout dialogo bom
        cout<<"\nMarilyn Monroe: muito obrigada! Ter uma pessoa que entenda a injustiça que sofri é muito importante para mim"<<endl<<endl;
        cout<<"*** NOVO ITEM ADQUIRIDO! ***"<<endl;
        cout<<"--- VOCÊ GANHA UM COLETE DE DIAMENTES. AGORA OU VOCÊ ESTÁ SUPER PROTEGIDO OU ESTÁ RICO ---"<<endl<<endl;
        break;
    case '2':
        //cout dialogo ruim
        cout<<"\nMarilyn Monroe: Me rebaixar, essa é ótima, como se em algum momento eu estivesse em alguma posição de poder sobre eles. Esqueça que eu te disse algo, você não entenderia mesmo."<<endl<<endl;
        break;
    default:
        break;
    }
    cout<<"-----------------------------------------//-----------------------------------------"<<endl<<endl;
}
void Inferno::Avareza(){
    cout<<"A falta de qualquer objeto na vasta planície escura traz ansiedade. Você se apoia no localizador para encontrar a sua próxima provação. Ao longe se encontra um homem estranho, com uma certa cara de rato. O aparelho diz que é Elon Musk, o famoso bilionário."<<endl;
    
    cout<<"Elon Musk: O capitalismo é um jogo, você não pode me culpar por ter ganhado. Ter nascido em um berço de ouro é só um detalhe, tenho certeza que qualquer um poderia ter chegado no meu nível se tivesse se esforçado o suficiente. Bando de preguiçosos com suas filosofias e ideais.";
    cout<<" O que eles esperavam que eu fizesse? Desistisse de tudo que tinha e acabasse com o emprego de milhares de pessoas para trazer melhores condições de vida ou qualquer coisa assim?"<<endl<<endl;
    
    cout<<_escolha<<endl;
    cout<<"1- Nada é um jogo quando envolve a vida dos outros, nem um centavo de um bilionário é ganho de forma ética. A redistribuição de ganhos é a única forma realmente ética de lidar com a riqueza."<<endl;
    cout<<"2- Não tem problema em aprender a usar o sistema para ganhar. Não foi você que instaurou essa forma de vida injusta, por que você deveria desistir de tudo que conquistou?"<<endl;
    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //dialogo bom
        cout<<"\nElon Musk: Nada é um jogo quando envolve a vida dos outros, nem um centavo de um bilionário é ganho de forma ética. A redistribuição de ganhos é a única forma realmente ética de lidar com a riqueza."<<endl<<endl;
        break;
    case '2':
        cout<<"\nElon Musk: Não tem problema em aprender a usar o sistema para ganhar. Não foi você que instaurou essa forma de vida injusta, por que você deveria desistir de tudo que conquistou?"<<endl<<endl;
        cout<<"*** NOVO ITEM ADQUIRIDO! ***"<<endl;
        cout<<"--- VOCÊ GANHA UM TESAR PARA SE DEFENDER, CUIDADO VOCẼ PODE LEVAR UM CHOQUE"<<endl<<endl;
        break; 
    default:
        break;
    }
    cout<<"-----------------------------------------//-----------------------------------------"<<endl<<endl;
}
void Inferno::Inveja(){
    cout<<"Ao longe há uma luz fraca, o localizador apita naquela direção. Passa pela sua cabeça a hipótese de ser a saída do seu inferno pessoal, mas estranhamente quanto mais perto da luz mais quente o ambiente fica. Após seus olhos se acostumarem com a claridade você vê um homem perto de uma fogueira."<<endl<<endl;
   
    //Thomas falando
    cout<<"Thomas Edison: No inferno, cercado de fogo ainda, isso sim é castigo eterno. Se me deixassem trazer uma lâmpada pra cá… Oh, você aí, olhe por onde anda! Ok, eu sei que deve ser extremamente chocante me ver por aqui, o Thomas Edison. Eu sou um dos grandes pais da ciência, eu trouxe a luz pro mundo, literalmente!"<<endl<<endl;
    cout<<"Ok, talvez não literalmente, mas eu merecia a glória daquela invenção. Só eu era capaz de levar a lâmpada a um novo nível, a sociedade precisava descobrir essa maravilha da tecnologia, que mal tem não ter sido o inventor que a popularizou? Esses ingratos não teriam metade do que tem hoje se não fosse por mim! Você entende, não?"<<endl<<endl;
    cout<<_escolha<<endl;
    cout<<"1- Não importa o bem que se faz ao mundo no fim, roubar nunca é certo."<<endl;
    cout<<"2- O crescimento científico deve ser priorizado, não importa os meios."<<endl<<endl;

    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //dialogo bom
        cout<<"\nThomas Edison: Quem disse algo sobre roubar? Eu só peguei a ideia emprestada por uns séculos. Eu já disse que admitiria tudo se me deixassem chegar ao céu. É claro que lá eu falaria sem parar das minhas outras 1091 patentes, se bem que ninguém liga pra nada sem ser a lâmpada..."<<endl<<endl;
        break;
    case '2':
        cout<<"\nThomas Edison: Esse sabe do que fala! O que mais importa é a glória, quer dizer, a humanidade. Agora me diga, as pessoas ainda falam de mim lá em cima? Claro que falam o grande Thomas Edison, como podem me esquecer..."<<endl;
        cout<<"*** ITEM PERDIDO! ***"<<endl;
        cout<<"--- QUEM MANDOU APOIAR UM INVEJOSO. ---"<<endl;
        break;
    default:
        break;
    }
    cout<<"-----------------------------------------//-----------------------------------------"<<endl<<endl;
    //inico da batalha
    cout<<"\nQuanto mais você se afasta do “inventor” mais arrepiada sua pele fica. De algum modo você sente a atmosfera ao seu redor mudar, como se alguém estivesse te observando. A presença da sua mochila passa pela sua cabeça e você decide abraçá-la em um gesto protetor, como se soubesse que algo estaria atrás dela. Você tenta se acalmar dizendo que é apenas um truque do nível da inveja, mas poucos passos depois algo puxa suas costas com força"<<endl<<endl;
   
}
void Inferno::Ira(){
    cout<<"Você está no chão, juntando o resto das suas energias após uma batalha tão difícil quando você ouve, ao fundo, um choro. A princípio você continua deitada(o) à espera de que seja somente mais uma alma vagando, mas você percebe que os choros estão se multiplicando mais e mais e quando percebe só consegue ouvir um barulho ensurdecedor de um grito, até que você estreita os olhos e vê o que julga ser o Zumbi dos Palmares gritando..."<<endl<<endl;
    cout<<"Zumbi dos Palmares: Ira!! eu fiquei 14.600 dias na terra desejando minha morte por conta da ira dos brancos, eu cultivei por 14.600 toda dor e sofrimento que a ira deles depositavam em mim, e agora eu estou no inferno por retribuir nem uma fração daquilo que eles fizeram com milhares de pessoas?!";
    cout<<"O meu inferno começou logo quando eu nasci, minha alma faleceu quando eu fui escravizado, torturado, tratado como demônio. Eu duvido que alguém que realmente entende minha situação iria fazer algo diferente de mim, você não concorda?"<<endl<<endl;
    cout<<_escolha<<endl;
    cout<<"1- Concordo! A guerra é justa quando se luta por liberdade."<<endl;
    cout<<"2- Discordo! Se as mãos de dois combatentes estão sujas de sangue, então nunca haverá um lado certo."<<endl;

    int decisao;
    decisao=Escolha();
    
    switch (decisao)
    {
    case '1':
        //dialogo bom
        cout<<"\nZumbi dos Palmares: Não gosto do que fiz, mas isso só foi reflexo do que fizeram comigo."<<endl<<endl;
        cout<<"*** NOVO ITEM ADQUIRIDO! ***"<<endl;
        cout<<"--- VOCÊ GANHA UM CHICOTE. USE SABIAMENTE. ---"<<endl<<endl;
        break;
    case '2':
        cout<<"\nZumbi dos Palmares: Certo nas leis de deus eu não sei, mas definitivamente tinha um lado errado e eu não estava nele."<<endl<<endl;
        break;
    default:
        break;
    }
    cout<<"-----------------------------------------//-----------------------------------------"<<endl<<endl;
}

void Inferno::Batalha_final(){
    if(_contador>3)
    {
        cout<<"Anjo: Seu progresso foi excelente! O jeito que você lidou com aquele homem irritante repercutiu pelo céu inteiro. Eu até tive que mentir para alguns anjos para impedir que eles viessem te ver hoje e atrapalhasse a tarefa final. Ah sim, tenho que te contar sobre ela. Essa é minha parte preferida.";
        cout<<"Meu querido herói, quer dizer aventureiro, você deve enfrentar o senhor dos pecados, o sete-pele, o sinteco gelado, o DEMÔNIO! Não se preocupe muito, é só sair no soco com ele, vou garantir que não sejam usados muitos golpes sujos. Boa sorte campeão!"<<endl<<endl;
    } else{
        cout<<"Anjo: Pecador, você chegou! Sinceramente eu duvidei que você conseguiria terminar suas provações já que algumas das suas escolhas foram...duvidosas, chegamos até a fazer algumas apostas lá no céu sobre o que aconteceria com você e agora eu vou ter que preencher a papelada daquele otário do Gabriel por algumas décadas.";
        cout<<"Enfim, é hora de terminar a sua jornada, só resta um último desafio à sua frente: você deve enfrentar o senhor dos pecados, o encardido, o sete-pele, o sinteco gelado, o DEMÔNIO! Não se preocupe muito, é só sair no soco com ele, vou garantir que não sejam usados muitos golpes sujos, e eu digo isso pra você, seu encrenqueiro"<<endl<<endl;
    }
    cout<<"Aqui vem o vencedor dos vencedores, o rei dos reis, o anjo que comanda, o grande diabo! (ele percebe que está visível) Eu disse para só abaixar a cortina depois da minha fala! Bando de incompetentes. Agora minha incrível entrada dramática foi arruinada, todo aquele ensaio na frente do espelho foi inútil. Enfim, o que importa é que eu vou mostrar como eu trato pessoas como você e acabar com essa coisa do céu de querer controlar até o inferno"<<endl<<endl;
    //batalha.batalhar();
    cout<<"-----------------------------------------//-----------------------------------------"<<endl<<endl;
}
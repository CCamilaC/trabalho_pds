#ifndef ceu_bom_H
#define ceu_bom_H

#include <iostream>
#include "historia.hpp"
#include "batalha.hpp"

class CeuBom: public Historia
{
    Batalha batalha;

    public:
    void finalizar_historia(){
        cout<<"Pecador, você chegou! Sinceramente eu duvidei que você conseguiria terminar suas provações já que algumas das suas escolhas foram…duvidosas, chegamos até a fazer algumas apostas lá no céu sobre o que aconteceria com você e agora eu vou ter que preencher a papelada daquele otário do Gabriel por algumas décadas. Enfim,  é hora de terminar a sua jornada, só resta um último desafio à sua frente: você deve enfrentar o senhor dos pecados, o encardido, o sete-pele, o sinteco gelado, o DEMÔNIO! Não se preocupe muito, é só sair no soco com ele, vou garantir que não sejam usados muitos golpes sujos, e eu digo isso pra você, seu encrenqueiro."<<endl;
    }


};

#endif
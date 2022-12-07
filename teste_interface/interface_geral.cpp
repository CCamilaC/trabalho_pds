#pragma once
#include "raylib.h"
#include <string>

class Geral{
    private:

    public:
        Geral(){}

        float frameWidth(Texture2D imagem){
            return (imagem.width / 8);
        }
        int maxFrames(Texture2D imagem){
            return (int)(imagem.width / (int)frameWidth(imagem));
        }
        
        virtual void Back(float frameWidth, int frame, Texture2D fundo) = 0;
        
        //virtual std::string texto() = 0;
        //virtual void objetos() = 0;
            
};
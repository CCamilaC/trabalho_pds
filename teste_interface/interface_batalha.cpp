
#include "interface_geral.cpp"

class InterfaceB : public Geral{


    public:

        InterfaceB():Geral() {}

        void Back(float frameWidth, int frame, Texture2D fundo) override{

            DrawTextureRec(
                        fundo,
                        Rectangle{(frameWidth * frame), 0, frameWidth, (float)fundo.height },
                        Vector2{0, 0},
                        RAYWHITE);
            

        }
};

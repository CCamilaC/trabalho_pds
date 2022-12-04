namespace ray{
    #include "raylib.h"
};
class Button {
	private:
        ray::Sound _sound;
		ray::Texture2D _texture;
		ray::Rectangle _sourceRec;
		ray::Rectangle _btnBounds;
        int _btnState;
        float _width;
        float _height;

	public:
        Button(const char* textureFile, const char* soundFile, float posX, float posY);
        ~Button();
        int getBtnState();
        void setBtnState(int btnState);
        void action();
        void draw();
        void mouseAction();
};
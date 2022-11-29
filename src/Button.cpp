#include "Button.hpp"

Button::Button(const char* textureFile, const char* soundFile, float posX, float posY) {
    _texture = ray::LoadTexture(textureFile);   // Load button texture
    _sound = ray::LoadSound(soundFile);         // Load button sound

    _width = (float)_texture.width;
    _height = (float)_texture.height;

    _sourceRec = { 0, 0, _width, _height };
    _btnBounds = { posX, posY, _width, _height };
    
    _btnState = 0;  // Button state: 0-NORMAL, 1-MOUSE_HOVER, 2-PRESSED
}

Button::~Button() {
    ray::UnloadTexture(_texture);   // Unload button texture
    ray::UnloadSound(_sound);       // Unload sound
}

int Button::getBtnState() {
    return _btnState;
}

void Button::setBtnState(int btnState) {
    _btnState = btnState;
}

void Button::action() {
    // TODO: Any desired action
    
    ray::SetSoundVolume(_sound, 1.0);
    ray::PlaySound(_sound); // Load button sound
}

void Button::draw() {
    ray::DrawTextureRec(_texture, _sourceRec, (ray::Vector2){ _btnBounds.x, _btnBounds.y }, ray::WHITE); // Draw button frame
}

void Button::mouseAction() {
    ray::Vector2 mousePos = ray::GetMousePosition();
    
    if (ray::CheckCollisionPointRec(mousePos, _btnBounds)){
        if (ray::IsMouseButtonDown(ray::MOUSE_BUTTON_LEFT))
            setBtnState(2);
        else
            setBtnState(1);
        
        if (ray::IsMouseButtonReleased(ray::MOUSE_BUTTON_LEFT))
            action();
    }
    else
        setBtnState(0);

    _sourceRec.y = getBtnState() * _height;
}
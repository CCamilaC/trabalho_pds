#include "raylib.h"


typedef enum GameScreen { LOGO = 0, MENU, GAMEPLAY, FINAL} GameScreen;

int main(){
    
    InitWindow(1272, 500, "H x H");
    SetTargetFPS(60);
    GameScreen currentScreen = LOGO;

    int framesCounter = 0;
    
    
    Texture2D fundo1;
    Texture2D fundo2;
    Texture2D logo;
            
    fundo1 = LoadTexture("resources/hell2.png");
    fundo2 = LoadTexture("resources/hell.png");
    logo = LoadTexture("resources/logo.png");
    
    
   float frameWidth1 = fundo1.width / 8 ;
   float frameWidth2 = fundo2.width / 8 ;
   int maxFrames1 = (int)(fundo1.width / (int)frameWidth1);
   int maxFrames2 = (int)(fundo2.width / (int)frameWidth2);
    
    
            
             
    
            float timer = 0.0f;
            int frame1 = 0;
            int frame2 = 0;
            

            frame1 = frame1 % maxFrames1;
            frame2 = frame2 % maxFrames2;
    
    while(!WindowShouldClose()){
        timer += GetFrameTime();
            
            if(timer >= 0.1f){
                timer = 0.0f;
                frame1 += 1;
                frame2 += 2;
            }
    
        switch(currentScreen)
        {
            case LOGO:
            {
                framesCounter++;
                if(framesCounter > 180){
                    currentScreen = MENU;
                }
            }break;
            case MENU:
            {
                if(IsKeyPressed(KEY_ENTER)){
                    currentScreen = GAMEPLAY;
                }
            }break;
            case GAMEPLAY:
            {
                if(IsKeyPressed(KEY_ENTER)){
                    currentScreen = FINAL;
                }
            }break;
            case FINAL:
            {
                if(IsKeyPressed(KEY_ENTER)){
                    currentScreen = MENU;
                }
            }break;
            default: break;
        }
        
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        switch(currentScreen){
            case LOGO:
            {
                DrawTexture(logo, 400, 0, RAYWHITE);
                DrawText("HEAVEN x HELL", 20, 20, 40, LIGHTGRAY);
                DrawText("CARREGANDO...", 20, 220, 20, GRAY);
            }break;
            case MENU:
            {
               
                   DrawTextureRec(
                        fundo1,
                        Rectangle{(frameWidth1 * frame1), 0, frameWidth1, (float)fundo1.height },
                        Vector2{0, 0},
                        RAYWHITE);
                
                
                    DrawText("HEAVEN x HELL", 20, 20, 60, WHITE);
                    DrawText("PRESSIONE ENTER para JOGAR", 450, 400, 20, WHITE);
            }break;
            case GAMEPLAY:
            {
                DrawTextureRec(
                        fundo2,
                        Rectangle{(frameWidth2 * frame2), 0, frameWidth2, (float)fundo2.height },
                        Vector2{0, 0},
                        RAYWHITE);
            

        
                DrawText("GAMEPLAY SCREEN", 20, 20, 40, WHITE);
                DrawText("PRESS ENTER or TAP to JUMP to ENDING SCREEN", 120, 220, 20, WHITE);
            }break;            
            case FINAL:
            {
                DrawRectangle(0, 0, 1272, 550, BLACK);
                DrawText("GAME OVER", 436, 75, 60, RED);
                DrawText("PRESSIONE ENTER para voltar para o MENU", 150, 400, 40, RED);
            }break;
            default: break;
        }
        EndDrawing();
    
    }
                
    
    CloseWindow();
    
    return 0;
    
    
}
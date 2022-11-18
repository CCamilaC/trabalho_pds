#ifndef Inferno_h
#define Inferno_h

class Inferno: public Historia
{
    public:
    void inicializar_historia();
    int Preguica();
    int Gula();
    int Soberba(); 
    int Luxuria(); 
    int Avareza(); 
    int Inveja(); 
    int Ira();
    
    private:
    std::vector<int> _choice; //variável que armazena as escolhas do usuário
    int _contador; //auxiliar para determinar quantas escolhas boas foram
                  //feitas pelo usuário
};
#endif 
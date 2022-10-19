#ifndef jogador
#define jogador 

class joador
{
    private:
    std::string _nome;
    std::string _pq_vc_morreu;

    public:
    Usuario(std::string nome, std::string pecado);
    std::string getNome();
    std::string getPecado();
}
#endif
#ifndef INIMIGO_HPP_INCLUDED
#define INIMIGO_HPP_INCLUDED

using namespace std;

class Inimigo: protected Usuario{
    private:
        bool _envenenado;
    public: Inimigo::Inimigo(int vida, int estamina, int ataque, int defesa, bool veneno);

    bool Inimigo::get_veneno();

    void Inimigo::print() override;

    void Inimigo::printiv() override;
};
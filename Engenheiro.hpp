#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
    private:
        int _projetos;

    public:
        Engenheiro(std::string nome, double salarioHora, int projetos);

        void setProjetos(int projetos);
        int getProjetos();

        void mostrarDados() override;
};

#endif
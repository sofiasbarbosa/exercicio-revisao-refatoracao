#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

const double HORAS_JORNADA_TRABALHO = 8;
const double BONUS_HORA_EXTRA = 0.5;

class Empregado {
    protected:
        std::string _nome;
        double _salarioHora;
        double _horasTrabalhadas;
    
    public:
        Empregado(std::string nome, double salarioHora);

        void setNome(std::string nome);
        std::string getNome();

        void setSalarioHora(double salarioHora);
        double getSalarioHora();

        void setHorasTrabalhadas(double horasTrabalhadas);
        double getHorasTrabalhadas();

        double pagamentoDia();

        virtual void mostrarDados() = 0;
};

#endif
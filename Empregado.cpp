#include "Empregado.hpp"

Empregado::Empregado(std::string nome, double salarioHora): _nome(nome), _salarioHora(salarioHora), _horasTrabalhadas(0) { }  

void Empregado::setNome(std::string nome) {
    this->_nome = nome;
}

std::string Empregado::getNome() {
    return this->_nome;
}

void Empregado::setSalarioHora(double salarioHora) {
    this->_salarioHora = salarioHora;
}

double Empregado::getSalarioHora() {
    return this->_salarioHora;
}

void Empregado::setHorasTrabalhadas(double horasTrabalhadas) {
    this->_horasTrabalhadas = horasTrabalhadas;
}

double Empregado::getHorasTrabalhadas() {
    return this->_horasTrabalhadas;
}

double Empregado::pagamentoDia() {
    double totalHorasTrabalhadas = this->_horasTrabalhadas;

    if (this->_horasTrabalhadas > HORAS_JORNADA_TRABALHO) {
        double horasExtra = (this->_horasTrabalhadas - HORAS_JORNADA_TRABALHO) * BONUS_HORA_EXTRA;
        totalHorasTrabalhadas += horasExtra;
    }

    return totalHorasTrabalhadas * this->_salarioHora;
}

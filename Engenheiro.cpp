#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string nome, double salarioHora, int projetos): Empregado(nome, salarioHora), _projetos(projetos) { }

void Engenheiro::setProjetos(int projetos) {
    this->_projetos = projetos;
}

int Engenheiro::getProjetos() {
    return this->_projetos;
}

void Engenheiro::mostrarDados() {
    std::cout << "Nome: " << this->getNome() << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoDia() << std::endl;
    std::cout << "Projetos: " << this->getProjetos() << std::endl;
}
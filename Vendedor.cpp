#include "Vendedor.hpp"

Vendedor::Vendedor(std::string nome, double salarioHora, double quotaMensalVendas): Empregado(nome, salarioHora), _quotaMensalVendas(quotaMensalVendas) { }

void Vendedor::setQuotaMensalVendas(double quotaMensalVendas) {
    this->_quotaMensalVendas = quotaMensalVendas;
}

double Vendedor::getQuotaMensalVendas() {
    return this->_quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() {
    return this->_quotaMensalVendas * NUMERO_MESES_NO_ANO;
}

void Vendedor::mostrarDados() {
    std::cout << "Nome: " << this->getNome() << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoDia() << std::endl;
    std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
}
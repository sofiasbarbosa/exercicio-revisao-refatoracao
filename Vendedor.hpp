#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

const int NUMERO_MESES_NO_ANO = 12; 

class Vendedor : public Empregado {
    private:
        double _quotaMensalVendas;

    public:
        Vendedor(std::string nome, double salarioHora, double quotaMensalVendas);

        void setQuotaMensalVendas(double quotaMensalVendas);
        double getQuotaMensalVendas();

        double quotaTotalAnual();

        void mostrarDados() override;
};

#endif
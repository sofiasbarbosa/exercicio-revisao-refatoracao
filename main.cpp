#include "Empregado.hpp"

#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

    Engenheiro eng1("Joao Snow", 35, 3);
    eng1.setHorasTrabalhadas(9.5);
    eng1.mostrarDados();
    
    std::cout << std::endl;

    Engenheiro eng2("Daniela Targaryen", 30, 1);
    eng2.setHorasTrabalhadas(8);
    eng2.mostrarDados();
    
    std::cout << std::endl;

    Engenheiro eng3("Bruno Stark", 30, 2);
    eng3.setHorasTrabalhadas(8);
    eng3.mostrarDados();

    std::cout << std::endl;
    
    Vendedor vend1("Tonho Lannister", 20, 5000);
    vend1.setHorasTrabalhadas(6);
    vend1.mostrarDados();
    
    std::cout << std::endl;

    Vendedor vend2("Jose Mormont", 25, 3000);
    vend2.setHorasTrabalhadas(8);
    vend2.mostrarDados();

    std::cout << std::endl;

    Vendedor vend3("Sonia Stark", 30, 4000);
    vend3.setHorasTrabalhadas(8);
    vend3.mostrarDados();

    return 0;
}
#include <iostream>

int main() {
    float salario,novoSalario;
    
    std::cout << "Digite o seu salario: " << std::endl;
    std::cin >> salario;
    
    novoSalario = salario * 1.15;
    
    std::cout << "Seu novo salario com aumento: " << novoSalario; 

    return 0;
}
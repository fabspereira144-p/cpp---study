#include <iostream>

int main() {
    float valorProduto,desconto;
    
    std::cout << "Digite o valor do produto: " << std::endl;
    std::cin >> valorProduto;
    
    desconto = valorProduto * 0.90;
    
    std::cout << "Valor do produto com desconto: " << desconto << std::endl;

    return 0;
}
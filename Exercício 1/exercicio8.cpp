#include <iostream>
int main() {
    int x, y;
    int troca;
        
    std::cout << "Digite um valor: " << std::endl;
    std::cin >> x;
    std::cout << "Digite outro valor: " << std::endl;
    std::cin >> y;
        
    troca = x;
    x = y;
    y = troca;
        
    std::cout << "\n" << x << std::endl << y << std::endl;
        

    return 0;
}
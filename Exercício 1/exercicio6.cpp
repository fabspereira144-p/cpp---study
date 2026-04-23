#include <iostream>

int main()
{
    float r, pi, area;
    
    std::cout << "Digite o valor do raio do circulo: " << std::endl;
    std::cin >> r;
    
    r = r * r;
    pi = 3.14159;
    area = pi * r;
    
    std::cout << "Valor da area: " << area << std::endl;


    return 0;
}
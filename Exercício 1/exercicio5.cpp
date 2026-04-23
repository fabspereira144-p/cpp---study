#include <iostream>

int main()
{
    float fahreinhait,celsius;
    
    std::cout << "Digite o valor para conversao(celsius): " << std::endl;
    std::cin >> celsius;
    
    fahreinhait = (celsius * 1.8) + 32;
    
    std::cout << "Fahreinhait: " << fahreinhait << std::endl;


    return 0;
}
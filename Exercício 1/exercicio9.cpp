#include <iostream>

int main() {
    int n,y,z;
    
    std::cout << "Digite um valor(n): " << std::endl;
    std::cin >> n;
    
    y = n - 1;
    z = n + 1;
    
    std::cout << "Sucessor do n: " << z << std::endl;
    std::cout << "Antecessor do n: " << y << std::endl;

    return 0;
}
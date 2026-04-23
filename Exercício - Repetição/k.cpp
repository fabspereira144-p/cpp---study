#include <iostream>
using namespace std;

int main() {
    unsigned long graos = 1;
    unsigned long soma = 0;

    for (int i = 1; i <= 64; i++) {
        soma += graos;
        graos *= 2;
    }

    cout << "Total de graos: " << soma << endl;
}
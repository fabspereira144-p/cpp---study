#include <iostream>
using namespace std;

int main() {
    int base, expoente, resultado;
    resultado = 1; //

    cout << "Digite o valor da base: " << endl;
    cin >> base;
    cout << "Digite o valor do expoente: " << endl;
    cin >> expoente;

    for (int i=0; i<expoente; i++)
    {
        resultado *= base; //3*3*3*...
    }
    
    cout << "Resultado: " << resultado;
    return 0;
}
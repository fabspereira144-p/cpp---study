#include <iostream>
using namespace std;

int main() {
    int x;
    unsigned long long soma = 0;

    for(int i = 1; i <= 15; i++)
    {   
        unsigned long long fatorial = 1; //Precisa reiniciar o fatorial dentro do laço princiapal

        cout << "Digite o " << i << " valor" << endl;
        cin >> x;

        for (int l = 1; l <= x; l++)
        {
            fatorial *= l;
        }

        cout << "Fatorial de " << x << " = " << fatorial << endl;
        soma += fatorial;
    }
    
    cout << "Soma: " << soma << endl;
    return 0;
}
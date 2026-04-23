#include <iostream>
using namespace std;

int main() {

    int x;
    int maior;
    int menor;

    cout << "Digite o valor de X(positivo): " << endl;
    cin >> x;

    if (x < 0)
    {
        cout << "Valor inválido. Encerrando...";
        return 0;
    }

    maior = x;
    menor = x;

    while (x >= 0)
    {
        cin >> x;

        if (x < 0)
        {
            break;
        }

        if (x > maior)
        {
            maior = x;
        }
        if (x < menor)
        {
            menor = x;
        }

    }

    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    
    return 0;
}
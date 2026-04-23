#include <iostream>
using namespace std;

int main() {

    int x;
    int soma = 0;
    float media;
    int valoresLidos = 0;

    cout << "Dgite valores de X (positivo): " << endl;
    cin >> x; //Usar variável antes de inicializar o while
    

    while (x >= 0)
    {
        soma += x;
        valoresLidos++;

        cin >> x;
    }


    if (valoresLidos > 0)
    {
        media = (float)soma / valoresLidos;
        cout << "Soma dos valores: " << soma << endl;
        cout << "Media: " << media << endl;
        cout << "Valores lidos: " << valoresLidos << endl;
    }
    else
    {
        cout << "Valores invalidos";
    }

    return 0;
}
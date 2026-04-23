#include <iostream>
using namespace std;

int main() {

    float IMC, Peso, Altura;

    cout << "Digite sua altura(m): " << endl;
    cin >> Altura;
    cout << "Digita seu peso(kg): " << endl;
    cin >> Peso;

    IMC = Peso / (Altura * Altura);

    if (IMC < 18.5)
    {
        cout << "Abaixo do peso";
    }
    else if (IMC >= 18.5 && IMC <= 24.9)
    {
        cout << "Peso normal";
    }
    else if (IMC >= 25 && IMC <= 29.9)
    {
        cout << "Sobrepeso";
    }
    else
    {
        cout << "Obesidade";
    }

    return 0;
}
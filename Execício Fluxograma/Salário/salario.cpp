#include <iostream>
using namespace std;

int main() {

    float Salario, Imposto, salarioLiquido;

    cout << "Digite seu salario bruto: " << endl;
    cin >> Salario;

    if (Salario <= 2259)
    {
        cout << "Isento";
        Imposto = 0;
    }
    else if (Salario >= 2259.01 && Salario <= 3751)
    {
        cout << "Imposto de 7,5%";
        Imposto = Salario * 0.075;
    }
    else if (Salario >= 3751.01 && Salario <= 4664)
    {
        cout << "Imposto de 15%";
        Imposto = Salario * 0.15;
    }
    else
    {
        cout << "Imposto de 22.5%";
        Imposto = Salario * 0.225;
    }

    salarioLiquido = Salario - Imposto;
    
    cout << "\nSeu salario bruto: " << Salario;
    cout << "\nSeu salario liquido: " << salarioLiquido;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    float Peso, Idade;

    cout << "Digite sua idade: " << endl;
    cin >> Idade;
    cout << "Digite seu peso: " << endl;
    cin >> Peso;
    
    if (Idade >= 12 && Idade <= 17)
    {
        cout << "Juvenil";
    }
    else if (Idade >= 18 && Peso <= 75)
    {
        cout << "Adulto leve";
    }
    else if (Idade >= 18 && Peso > 75) 
    {
        cout << "Adulto Pesado";
    }
    else
    {
        cout << "Não Permitido";
    }
    
}
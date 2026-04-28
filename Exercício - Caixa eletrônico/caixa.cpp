#include <iostream>
using namespace std;

int main()
{
    int saque;
    int quantidade;
    
    cout << "Digite o valor do saque: " << endl;
    cin >> saque;

    if (saque <= 0)
    {
        cout << "Valor de saque deve ser inteiro e positivo." << endl;
        return 0;
    }

    //100
    quantidade = saque / 100;
    saque = saque % 100;
    cout << "Cedulas de 100: " << quantidade << endl;

    //50
    quantidade = saque / 50;
    saque = saque % 50;
    cout << "Cedulas de 50: " << quantidade << endl;

    //20
    quantidade = saque / 20;
    saque = saque % 20;
    cout << "Cedulas de 20: " << quantidade << endl;

    //10
    quantidade = saque / 10;
    saque = saque % 10;
    cout << "Cedulas de 10: " << quantidade << endl;

    //5
    quantidade = saque / 5;
    saque = saque % 5;
    cout << "Cedulas de 5: " << quantidade << endl;

    //2
    quantidade = saque / 2;
    saque = saque % 2;
    cout << "Cedulas de 2: " << quantidade << endl;

    if (saque != 0)
    {
        cout << "Nao foi possivel realizar o saque" << endl;
    }
}
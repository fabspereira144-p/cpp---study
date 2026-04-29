#include <iostream>
using namespace std;

int main()
{
    string acharIdade;
    int idade[5] = {38, 18, 19, 18, 5};
    string nomes [5] = {"Aluisio", "Maria", "Joao", "Lucas", "Jose"};
    bool achou = false;

    cout << "Digite um nome: " << endl;
    cin >> acharIdade;

    for (int i=0; i<5; i++)
    {
        if(nomes[i] == acharIdade)
        {
            cout << nomes[i] << " tem " << idade[i] << " anos" << endl;
            achou = true;
        }
    }

    if (achou == false)
    {
        cout << "Nao achou" << endl;
    }

    return 0;
}
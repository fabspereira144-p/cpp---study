#include <iostream>
using namespace std;

int main() {

    string NOME;
    char SEXO;

    cout << "Digite seu nome: " << endl;
    cin >> NOME;
    cout << "Informe seu sexo: " << endl;
    cin >> SEXO;

    if (SEXO == 'm' || SEXO == 'M') {
        cout << NOME << ".Sr.";
    }
    else if (SEXO == 'f' || SEXO == 'F'){
        cout << NOME << ".Sra.";
    }
    else {
        cout << "Sexo informado invalido";
    }
    return 0;
}
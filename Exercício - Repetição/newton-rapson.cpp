#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double Y, X1, Xi, X_novo;
    int acumulador=1; //nao conta a primeira iterção que acontece anter do loop, por isso começar em 1

    cout << "Digite qual numero voce deseja saber a raiz quadrada: " << endl;
    cin >> Y;

    X1 = Y/2;
    Xi = X1;
    X_novo = Xi - ((Xi * Xi) - Y) / (2 * Xi);

    while (fabs(X_novo - Xi) >= 0.1) //enquanto o resultado for maior que 0.1 faça o loop
    {
        Xi = X_novo; //antigo x_next vira o xi
        X_novo = Xi - ((Xi * Xi) - Y) / (2 * Xi); //calcula x_next a partir no xi
        acumulador++;
    }

    cout << "Resultado usando aproximacoes sucessivas de Newton Rapson: " << X_novo << endl;
    cout << "Resultado da raiz usando sqrt(): " << sqrt(Y) << endl;
    cout << "Diferenca: " << fabs(sqrt(Y) - X_novo) << endl;
    cout << "Total de iteracoes: " << acumulador;
    
    return 0;  
}
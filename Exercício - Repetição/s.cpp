#include <iostream>
using namespace std;

int main(){
    int dividendo, divisor;
    int quociente = 0;

    cout << "Digite o dividendo: " << endl;
    cin >> dividendo;
    cout << "Digite o divisor: " << endl;
    cin >> divisor;

    if (divisor == 0)
    {
        cout << "Operacao invalida";
    }

    while (dividendo >= divisor)
    {
        dividendo -= divisor;
        quociente++;
    }

    cout << "Quociente: " << quociente << endl;
    
    return 0;
}
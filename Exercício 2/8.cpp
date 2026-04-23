#include <iostream>
using namespace std;

int main() {

    int x, y;

    cout << "Digite um numero: " << endl;
    cin >> x;
    cout << "Digite outro numero: " << endl;
    cin >> y;

    if (x == y) {
        cout << "Os numeros sao iguais!";
    }else {
        cout << "Maior: " << ((x > y) ? x : y);
    }

    return 0;
}
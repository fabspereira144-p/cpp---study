#include <iostream>
using namespace std;

int main() {

    int x, y, troca;

    cout << "Digite um numero: " << endl;
    cin >> x;
    cout << "Digite outro numero: " << endl;
    cin >> y;

    troca = x;
    x = y;
    y = troca;

    cout << x << endl << y;

    return 0;
}
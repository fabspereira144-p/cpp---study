#include <iostream>
using namespace std;

int main() {

    int x,y,res;

    cout << "Escreva um número: " << endl;
    cin >> x;
    cout << "Escreva outro número: " << endl;
    cin >> y;

    res = x / y;

    cout << x << " / " << y << " = " << res << endl;
    return 0;
}
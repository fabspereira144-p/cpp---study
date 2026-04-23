#include <iostream>
using namespace std;

int main() {
    int a,b,res;
    cout << "Primeiro valor: " << "\n";
    cin >> a;
    cout << "Segundo valor: " << "\n";
    cin >> b;

    if (a == b) {
        res = 0;
    } else {
        if (a > b) {
            res = a - b;
        } else {
            res = b - a;
        }
    }

    cout << "Resposta: " << res;
}
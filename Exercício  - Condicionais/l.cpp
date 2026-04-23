#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    if (n < 3) {
        cout << n;
    }
    else {
        cout << "VALOR FORA DA FAIXA PERMITIDA";
    }

    return 0;
}
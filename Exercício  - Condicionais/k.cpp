#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    if (n > 1 && n < 9){
        cout << "O VALOR ESTA NA FAIXA PERMITIDA";
    }
    else {
        cout << "O VALOR ESTA FORA DA FAIXA PERMITIDA";
    }
    return 0;
}
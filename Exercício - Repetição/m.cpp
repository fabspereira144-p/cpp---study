#include <iostream>
using namespace std;

int main() {
    int x;
    int soma = 0;
    float media;

    for (int i=1; i <= 10; i++)
    {
        cin >> x;
        soma += x;
    }

    media = soma / 10.0;

    cout << "\nMedia dos valores: " << media;
    return 0;
}
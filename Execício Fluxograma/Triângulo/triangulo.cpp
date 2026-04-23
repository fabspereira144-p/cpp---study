#include <iostream>
using namespace std;

int main() {

    float A, B, C;

    cout << "Digite o lado A: " << endl;
    cin >> A;
    cout << "Digite o lado B: " << endl;
    cin >> B;
    cout << "Digite o lado C: " << endl;
    cin >> C;

    if (A < B + C && B < A + C && C < A + B)
    {
        if (A == B && B == C)
        {
            cout << "Triangulo Equilatero";
        }
        else if (A == B || A == C || B == C)
        {
            cout << "Triangulo Isosceles";
        }
        else
        {
            cout << "Triangulo Escaleno";
        }
    }
    else
    {
        cout << "Nao e um triangulo";
    }

    return 0;
}
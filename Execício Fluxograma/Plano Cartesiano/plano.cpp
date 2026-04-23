#include <iostream>
using namespace std;

int main() {

    int X, Y;

    cout << "Digite X: " << endl;
    cin >> X;
    cout << "Digite Y: " << endl;
    cin >> Y;

    if (X > 0 && Y > 0)
    {
        cout << "1 Quadrante";
    }
    else if (X < 0 && Y > 0)
    {
        cout << "2 Quadrante";
    }
    else if (X < 0 && Y < 0)
    {
        cout << "3 Quadrante";
    }
    else if (X > 0 && Y < 0)
    {
        cout << "4 Quadrante";
    }
    else
    {
        cout << "Sobre o eixo ou na origem";
    }

    return 0;
}
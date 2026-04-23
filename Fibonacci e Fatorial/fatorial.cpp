#include <iostream>
using namespace std;

int main() {
    int x;
    int fatorial = 1;

    cout << "Digite: " << endl;
    cin >> x;

    for (int i = 1; i <= x; i++) 
    {
        fatorial *= i;
    }

    cout << x << "! = " << fatorial;
}
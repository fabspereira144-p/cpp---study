#include <iostream>
using namespace std;

int main() {

    int A,B,C,D;
    cin >> A >> B >> C >> D;

    cout << "NUMEROS DIVISIVEIS POR 2 OU 3: \n";

    if (A % 2 == 0 || A % 3 == 0)
    {
       cout << A << " DIVISIVEL\n";
    }
    if (B % 2 == 0 || B % 3 == 0)
    {
       cout << B << " DIVISIVEL\n";
    }
    if (C % 2 == 0 || C % 3 == 0)
    {
       cout << C << " DIVISIVEL\n";
    }
    if (D % 2 == 0 || D % 3 == 0)
    {
       cout << D << " DIVISIVEL\n";
    }
    

    return 0;
}
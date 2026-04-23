#include <iostream>
using namespace std;

int main() {

    int A,B,C,D;
    cin >> A >> B >> C >> D;

    if (A % 2 == 0 && A % 3 == 0)
    {
       cout << A << " DIVISIVEL POR 2 E 3\n";
    }
    if (B % 2 == 0 && B % 3 == 0)
    {
       cout << B << " DIVISIVEL POR 2 E 3\n";
    }
    if (C % 2 == 0 && C % 3 == 0)
    {
       cout << C << " DIVISIVEL POR 2 E 3\n";
    }
    if (D % 2 == 0 && D % 3 == 0)
    {
       cout << D << " DIVISIVEL POR 2 E 3\n";
    }
    

    return 0;
}
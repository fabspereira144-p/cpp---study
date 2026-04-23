#include <iostream>
using namespace std;

int main() {
    int A, B, C, TROCA;
    
    cin >> A >> B >> C;

    if (A > B) {
        TROCA = A;
        A = B;
        B = TROCA;
    }

    if (A > C) {
        TROCA = A;
        A = C;
        C = TROCA;
    }

    if (B > C) {
        TROCA = B;
        B = C;
        C = TROCA;
    }

    cout << A << " " << B << " " << C << endl;

    return 0;
}
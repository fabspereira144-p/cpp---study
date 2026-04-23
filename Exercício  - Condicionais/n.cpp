#include <iostream>
using namespace std;

int main() {

    int A,B,C,SOMA;
    cout << "DIGITE 3 VALORES: " << endl;
    cin >> A >> B >> C;

    SOMA = A+B+C;

    if (SOMA >= 100)
    {
        cout << SOMA;
    }
    
    return 0;
}
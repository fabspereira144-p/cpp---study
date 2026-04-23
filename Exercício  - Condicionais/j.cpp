#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "DIGITE UM NUMERO: " << endl;
    cin >> n;

    if (n % 2 == 0) {
        cout << "NUMERO PAR";
    }
    else {
        cout << "NUMERO IMPAR";
    }

    return 0;
}
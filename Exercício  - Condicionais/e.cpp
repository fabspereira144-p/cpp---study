#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double A, B, C, DELTA;
    double X,X1,X2;    
    
    cout << "DIGITE OS VALORES A, B E C EM ORDEM: ";
    cin >> A >> B >> C;


    if(A!=0) {
        DELTA = (B*B) - 4 * A * C;

        if (DELTA < 0) {
            cout << "NAO HA SOLUCAO REAL!";
        }
        else if (DELTA > 0) {
            X1 = ((-B) + sqrt(DELTA)) / (2 * A);
            X2 = ((-B) - sqrt(DELTA)) / (2 * A);

            cout << "X1: " << X1 << endl;
            cout << "X2: " << X2 << endl;
        }
        else if(DELTA == 0) {
            X = -B/(2*A);

            cout << "X: " << X;
        }
    }else {
        cout << "EQUACAO INCOMPLETA";
    }
    
    return 0;
}
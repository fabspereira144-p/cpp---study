#include <iostream>
using namespace std;

int main() {

    int A,B,C,D,E;
    int menor, maior;

    cout << "DIGITE 5 VALORES: ";
    cin >> A >> B >> C >> D >> E;

    maior = A;
    menor = A;

    //Maior numero
    if(B > maior) {
        maior = B;
    }
    if(C > maior) {
        maior = C;
    }
    if(D > maior) {
        maior = D;
    }
    if(E > maior) {
        maior = E;
    }

    //Menor numero
    if(B < menor) {
        menor = B;
    }
    if(C < menor) {
        menor = C;
    }
    if(D < menor) {
        menor = D;
    }
    if(E < menor) {
        menor = E;
    }

    cout << "MAIOR: " << maior << endl;
    cout << "MENOR: " << menor;
    
    return 0;
}
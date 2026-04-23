#include <iostream>
using namespace std;

int main() {

    int distancia, gasolina, kmL;

    cout << "Distancia(km): " << endl;
    cin >> distancia;
    cout << "Gasolina gasta(l): " << endl;
    cin >> gasolina;

    kmL = distancia/gasolina;

    cout << kmL << "Km/L";

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    double horas;

    cout << "Digite as horas: " << endl;
    cin >> horas;

    double minutos, segundos;

    minutos = horas * 60;
    segundos = horas * 360;

    cout << minutos << " Minutos " << " e " << segundos << " segundos ";

    return 0;
}
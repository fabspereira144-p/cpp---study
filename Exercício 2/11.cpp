#include <iostream>
using namespace std;

int main() {

    int segundos, minutos, horas;

    cout << "Digite os segundos: " << endl;
    cin >> segundos;

    horas = segundos / 3600; //Pega quantas unidades cabem
    segundos = segundos % 3600; //Pega o que sobra 

    minutos = segundos / 60; //Pega o novo valor de segundos 
    segundos = segundos % 60; //Pega o que sobrou

    cout << horas << " hora(s), " << minutos << " minuto(s) " << "e " << segundos << " segundo(s)";

    return 0;
}
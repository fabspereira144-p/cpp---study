#include <iostream>
using namespace std;

int main() {

    float C, F;

    for(C=10; C<=100; C+=10)
    {
        F = (9 * C + 160) / 5;
        cout << "Celsius: " << C << endl;
        cout << "Fahrenheit: " << F << endl;
    }

    return 0;
}
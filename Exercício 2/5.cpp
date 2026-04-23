#include <iostream>
using namespace std;

int main() {

    int n1,n2,n3, media;

    cout << "Digite suas tres notas: " << endl;
    cin >> n1 >> n2 >> n3;

    media = (n1 + n2 + n3) / 3;

    cout << "Sua media: " << media;

    return 0;
}
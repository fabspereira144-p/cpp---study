#include <iostream>
using namespace std;

int main() {

    float n1,n2,n3,n4,md;

    cout << "Digite suas notas (de espaço entre as notas digitadas): " << "\n";
    cin >> n1 >> n2 >> n3 >> n4;

    md = (n1 + n2 + n3 + n4) / 4;

    if (md >= 50) {
        cout << "Aluno Aprovado!\n";
    } else {
        cout << "Aluno Reprovado!\n";
    }

    cout << "MEDIA DO ALUNO: " << md;

    return 0;
}
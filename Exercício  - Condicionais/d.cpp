#include <iostream>
using namespace std;

int main() {

    float n1,n2,n3,n4,md1;
    float ne,md2;

    cout << "Digite suas notas: " << "\n";
    cin >> n1 >> n2 >> n3 >> n4;

    md1 = (n1+n2+n3+n4)/4;

    if(md1 >= 7) {
        cout << "ALUNO APROVADO!\n";
        cout << "MEDIA: " << md1;
    } else {
        cout << "ALUNO REPROVADO! INSIRA NOTA DO EXAME: \n";
        cin >> ne;

        md2 = (md1 + ne) / 2;
        
        if (md2 >= 5) {
            cout << "ALUNO APROVADO!\n";
        } else {
            cout << "ALUNO REPROVADO!\n";
        }

        cout << "MEDIA DO ALUNO: " << md2;
    }

    return 0;
}
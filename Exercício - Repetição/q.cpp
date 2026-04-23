#include <iostream>
using namespace std;

int main() {
    float largura, comprimento, area, areaTotal;
    char resposta;
    string nome;
    areaTotal = 0;

    while(true)
    {
        cout << "Nome do comodo: " << endl;
        cin >> nome;
        cout << "Largura(m): " << endl;
        cin >> largura;
        cout << "Comprimento(m): " << endl;
        cin >> comprimento;

        area = (largura * comprimento);
        areaTotal += area;

        cout << "Area do " << nome << " : " << area << "m2" << endl;

        cout << "Deseja realizar a medicao de outra area? (S/N) ";
        cin >> resposta;

        if(resposta == 'S' || resposta == 's')
        {
            continue;
        }
        else if (resposta == 'N' || resposta =='n')
        {
            break;
        }
        else
        {
            cout << "Respota invalida.Encerrando...";
            break;
        }
    }

    cout << "\nArea total: " << areaTotal << "m2";

    return 0;
}
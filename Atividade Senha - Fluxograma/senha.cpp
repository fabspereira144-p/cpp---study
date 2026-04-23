#include <iostream>
using namespace std;

int main()
{
    string SENHA_ATUAL = "1234";
    string SENHA;
    int CONT_ACESSO = 0;

    while(true)
    {
        cout << "ENTRE COM SENHA: " << endl;
        cin >> SENHA;

        if(SENHA == SENHA_ATUAL)
        {
            if(CONT_ACESSO <= 3)
            {
                cout << "ABRIR PORTA" << endl;
                CONT_ACESSO = 0;
                break;
            }
            else
            {
                cout << "SENHA BLOQUEADA" << endl;
            }
        }
        else
        {
            if(SENHA == "admin123")
            {
                string NOVA_SENHA;
                bool temNumero = false;
                bool temEspecial = false;

                string numeros = "0123456789";
                string especiais = "!@#$%^&*()-_+=[]{};:,.<>/?|";

                while (true) {
                    cout << "DIGITE NOVA SENHA: " << endl;
                    cin >> NOVA_SENHA;

                    for(int i=0; i < NOVA_SENHA.length(); i++)
                    {
                        string caractereAtual = NOVA_SENHA.substr(i,1); // Extrai um caractere de cada vez como uma substring

                        // Verifica se essa substring existe dentro da nossa lista de números
                        if(numeros.find(caractereAtual) != -1)
                        {
                            temNumero = true;
                        }
                        // Verifica se essa substring existe dentro da nossa lista de especiais
                        if(especiais.find(caractereAtual) != -1)
                        {
                            temEspecial = true;
                        }
                    }

                    if (temNumero && temEspecial)
                    {
                        cout << "SENHA REDIFINIDA COM SUCESSO" << endl;
                        SENHA_ATUAL = NOVA_SENHA;
                        CONT_ACESSO = 0;
                        break;
                    }
                    else
                    {
                        if (temNumero == false)
                        {
                            cout << "SUA SENHA NAO CONTEM NUMEROS" << endl;
                        }
                        else 
                        {
                            cout << "SUA SENHA NAO CONTEM CARACTERES ESPECIAIS" << endl;
                        }
                    }
                }   
            }
            else
            {
                cout << "SENHA INVALIDA" << endl;
                CONT_ACESSO += 1;
            }
        }
    } 
    return 0;
}
#include <iostream>
#include <cctype>
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
                
                while(true)
                {
                    bool EX_NUMERO = false;
                    bool EX_CARACTERE = false;

                    cout << "DIGITE A NOVA SENHA: " << endl;
                    cin >> NOVA_SENHA;

                    for (char a : NOVA_SENHA)
                    {
                        if(isdigit(a))
                        {
                            EX_NUMERO = true;
                        }
                        else if(!isalnum(a))
                        {
                            EX_CARACTERE = true;
                        }
                    }

                    if (EX_NUMERO && EX_CARACTERE)
                    {
                        cout << "SENHA REDEFINIDA COM SUCESSO" << endl;
                        SENHA_ATUAL = NOVA_SENHA;
                        CONT_ACESSO = 0;
                        break;
                    }
                    else
                    {
                        cout << "A SENHA PRECISA CONTER PELO MENOS 1 NUMERO E 1 CARACTERE ESPECIAL" << endl;
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
#include <iostream>
using namespace std;

int main() {


    for (int i=1 ; i<=10; i++)
    {
        if(i % 2 != 0)
        {
            int fatorial = 1;
            for (int l=1; l<=i; l++)
            {
                fatorial *= l;
            }

            cout << i << "! = " << fatorial << endl;
        }
    }
    return 0;
}
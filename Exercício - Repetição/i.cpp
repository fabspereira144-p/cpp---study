#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 1;
    int proximo;

    for (int i=0; i<=15; i++)
    {
        cout << x << " ";

        proximo = x + y; 
        x = y; 
        y = proximo;
    }
    
    return 0;
}
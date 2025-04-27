//b) Que imprima en pantalla todos los múltiplos de 6, desde 6 hasta 30 (6, 12, 18, 24 y 30).//

#include <iostream>

int main() 
{
    cout << "Múltiplos de 6 desde 6 hasta 30:" << endl;

    for (int i = 6; i <= 30; i += 6) 
{
        cout << i <<" ";
    }
    return 0;
}

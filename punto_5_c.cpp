//c) Imprimir en pantalla los números de 1 a 16 y sus valores al cuadrado al lado (1 – 1, 2 – 4, 3 – 9, 4 – 16, 5 – 25, etc.). Este ejercicio es igual que el hecho anteriormente con while pero utilizando el ciclo for//

#include <iostream>
using namespace std;

int main() 
{
    for (int i = 1; i <= 16; ++i) 
{
        int cuadrado = i * i;
    cout << i << " - " << cuadrado << endl;
    }
    return 0;
}

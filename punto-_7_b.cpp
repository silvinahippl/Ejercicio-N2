//Escribir programas con ciclos while para:  Imprimir en pantalla los números del 10 al 1 (hacia atrás).

#include <iostream>
using namespace std;

int main()
{
int numero = 10

while(numero >= 1 )// mientras 10 sea igual o menor a 1
{
cout << numero<<" "; //imprime numero, " " para espacio entre numeros
numero = numero - 1;
}
return 0;
}


//Escribir programas con ciclos while para: d) Imprimir en pantalla los números de 1 a 16 y sus valores al cuadrado al lado (1 – 1, 2 – 4, 3 – 9, 4 – 16, 5 – 25, etc.)

#include <iostream>
using namespace std;

int main()
{
int numero = 1
int cuadrado

while (numero <=16)// mientras 1 sea igual o menor a 16
{
cuadrado = numero * numero; // si pongo despues de cout no sabe q valor tiene
cout <<numero<<"-"<< cuadrado<<endl; //agregue guion y salto de linea al final.
numero = numero + 1;
}
return 0;
}

//Escribir programas con ciclos while para: c) Imprimir en pantalla los números de 2 al 20 incrementando de a dos (2, 4, 6, 8, etc.)

#include <iostream>
using namespace std;

int main()
int numero = 2;

while (numero <=20) //Se ejecuta mientras num sea igual o menos a 20
{
cout <<numero <<" "<<endl; //" " para espacio entre numeros
numero = numero + 2;
}
return 0;
}

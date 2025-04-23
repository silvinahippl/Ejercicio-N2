//Ejercicio N°2 - Info. General:  Escribir un programa creando dos variables enteras, llamadas x e y, y guardar en cada una un valor entero ingresado por el usuario. Utilizar una sentencia if/else para mostrar en pantalla el nombre de la variable que tenga el mayor valor.//

#include <iostream>
using namespace std;

int main()
{
int x;
int y; 

cout <"ingrese el valor de x: ";
cin >> x;

cout <<"ingrese el valor de y: ";
cin >> y;

if ( x > y )
{ 
 cout <<"tu valor es mayor a y";
}
ense if (y > x)
{
cout <<"tu valor es mayor a x";
}
else 
{
cout <<"tus valores son iguales";
}
return 0;
}

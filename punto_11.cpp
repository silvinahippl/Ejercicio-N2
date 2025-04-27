//Reescribir el programa “switch” de la clase sobre “Estructuras de Control” (Menú de Nivel de Dificultad) usando constantes enumeradas para representar los niveles de dificultad. La variable numero seguirá siendo de tipo entero.
#include <iostream>
using namespace std;

enum NivelDificultad {
facil = 1//si no se le asigna valor comienza en 0
intermedio = 2
dificil = 3

int main()
{
  cout<<"Elegi nivel de dificultad seleccionando su numero correspondiente"<<endl; //le aparece 
  cout <<"1.facil"<<endl;
  cout <<"2.intermedio"<<endl;
  cout <<"3.dificil"<<endl;
  int numero;
  cin>> numero;

  switch (numero)
    {
      case facil: //opcion
        cout<<facil<<endl; //se imprime
      break; //sale de la estructura
      case intermedio:
        cout<<intermedio<<endl;
      break;
      case dificil:
        cout<<dificil<<endl;
      break;
      default:
    }
  return 0;
}

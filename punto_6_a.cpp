#include <iostream>
using namespace std;

enum Raza {
    HUMANO = 1,// Asignacion de valor
    ELFO = 2,
    GNOMO = 3,
    ENANO = 4,
    SEMIORCO = 5, //va con coma al final

int main()
int seleccionar; //declaracion de la varible q es igual al valor de case

cout <<"Seleccione una raza usando un valor del 1 al 5" ; //MUESTRA EN PANTALLA
cout <<"HUMANO: 1";
cout <<"ELFO: 2";
cout <<"GNOMO: 3";
cout <<"ENANO: 4";
cout <<"SEMIORCO: 5";
cin >>seleccionar; //lee la variable asignada

switch (seleccionar)//opciones
{
case HUMANO:
cout <<"Los humanos constituyen la raza predominante en Faerum. Gobiernan la mayoría de los reinos e imperios más importantes en los Reinos Olvidados"<<endl;
  break; //para salir de la opcion
case ELFO:
cout <<"Los elfos son normalmente más bajos y delgados que los humanos. Sus rasgos son finos y delicados, hablan con entonación melódica. Se les considera frívolos y distantes."<<endl;
    break;
case ENANO:
cout <<"Los enanos son unos individuos pequeños y robustos, fácilmente reconocibles por su forma y estatura. Tienen los mofletes rosados y los ojos y el cabello oscuros. Los enanos tienden a ser ariscos."<<endl;
  break;
case GNOMO:
cout <<"Emparentados con los enanos, los gnomos son significativamente más pequeños que sus primos lejanos. Los gnomos, como ellos mismos sostienen con orgullo, son también menos rechonchos que los enanos."<<endl;
  break;
case SEMIORCO:
cout <<"Estos individuos, famosos por su gran fuerza, son el fruto de la unión de un progenitor humano y otro orco. Poseen la misma estatura que los humanos, pero pesan algo más debido a su complexión musculosa"<<endl;
break;
  default:
 cout<<"Opcion inexistente"<< endl;
}

return 0;
}

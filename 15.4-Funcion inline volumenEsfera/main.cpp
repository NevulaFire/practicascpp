#include <iostream>
#include <math.h> //libreria estandar para calculos matematicos
using namespace std;

inline double volumenEsfera(double radio)
{

return 4/3*3.14159* pow(radio,3);

};//se termina la funcion inline

int main()
{
double datoradio;

cout<<"Escriba el radio de la esfera"<<endl;
cin>>datoradio;
cout<<"El volumen da la esfera es: "<<volumenEsfera(datoradio)<<endl;


return 0;
}

//La lógica de este programa consiste en primero declarar la variable inline, poniendo
//dentro del parentesis la varible radio que esta en el return. En el return solo se
//pone la operacion que se aplica para calcular el volumen de la esfera, considerando que
//la palabra "pow" es una funcion que hace operaciones de potencias, que en este caso eleva a la 3 a la variable radio
//Dentro de la funcion main, se declara que el usuario debe ingresar el dato del radio para calcularlo
//por lo que si es importante declarar nuevamente dentro del mainuna segunda varible de tipo double llamada "datoradio".
//Como resultado obtenemos que para imprimir el volumen de la esfera de invoca a la funcion inline poniendo dentro del
//parentesis el parametro del radio que quieres calcular, es por eso que se pone dentro del parentesis la variable
//dato radio.

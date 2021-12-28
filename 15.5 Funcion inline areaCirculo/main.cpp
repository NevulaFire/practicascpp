#include <iostream>
#include <math.h> //libreria estandar para calculos matematicos
using namespace std;

inline double areaCirculo(double radio)
{

return 3.14159* pow(radio,2); //Formula del area de un circulo PI x radio al cuadrado

};//se termina la funcion inline

int main()
{
double datoradio; //variable que introduce el usuario

cout<<"Escriba el radio del circulo para calcular el area: ";
cin>>datoradio;
cout<<"El area del circulo con radio "<<datoradio; cout <<" es: "<<areaCirculo(datoradio)<<endl;


return 0;
}

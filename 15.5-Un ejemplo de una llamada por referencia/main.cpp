#include <iostream>

using namespace std;
int cuadradoporValor(int);
void cuadradoPorReferencia(int &);

int main()
{
    int x = 2, z = 4;
    cout<<"x = "<<x<<" antes de cuadradoPorValor\n"<<"Valor devuelto por CuadradoPorValor:"
    <<cuadradoporValor(x)<<endl
    <<"x = "<<x<<"despues de CuadradoPorValor\n"<<endl;

    cout<<"z = "<<z<<" despues de cuadradoPorReferencia"<<endl;
    cuadradoPorReferencia(z);
    cout<<"z = "<<z<<" despues de CuadradoPorReferencia\n"<<endl;

    return 0;
}


int cuadradoporValor(int a){
return a *= a; //argumento de la llamada no modificada
} // fin de la funcion cuadradoporValor

void cuadradoPorReferencia(int &cref)
{
cref *= cref; //argumento de la llamada modificada

}//fin de la funcion cuadradoPorReferencia

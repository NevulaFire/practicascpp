#include <iostream>
#include <cmath>

using namespace::std;


class Complejo //INICIO DE CLASE LLAMADA COMPLEJO
{
public: //CONTROLADOR DE ACCESOS TIPO PUBLIC
Complejo( double = 0, double = 0);
void InsertarN();
double Nreal();
double Nimaginario();

void Suma(double, double, double, double);
void Resta(double, double, double, double);

void Impresion(){
cout << "( " << R << " , " << I <<" )" << endl;
}

private: //CONTROLADOR DE ACCESOS TIPO PRIVATE
double R;
double I;
};

// CONSTRUCTOR
Complejo::Complejo( double a, double b)
{
R = a;
I = a;
}

void Complejo::InsertarN()
{



cout << "\n PARTE REAL: ";
cin >> R;
cout << "\n PARTE IMAGINARIA: ";
cin >> I;
}
double Complejo::Nreal()
{
return R;
}
double Complejo::Nimaginario()
{
return I;
}

//FUNCION SUMA

void Complejo::Suma( double a, double b, double c, double d)
{
cout <<"\n SUMA:  ( "  << a + c
<< " , " << b + d
<<" )" << endl;
}

//FUNCION RESTA

void Complejo::Resta( double a, double b, double c, double d)
{
cout <<"\n RESTA:  ( " << a - c << " , "
<< b - d
<<" )" << endl;
}


//FUNCION MAIN
int main()
{

cout<<"\n BIENVENIDO A ESTE PROGRAMA"<<endl;
cout<<" **************************"<<endl;

cout<<"\n *Para realizar correctamene las operaciones"<<endl;

Complejo s;
Complejo x;
Complejo y;

cout<<"\n DIGITE EL PRIMER NUMERO COMPLEJO"<<endl;
x.InsertarN();
cout<<"\n DIGITE EL SEGUNDO NUMERO COMPLEJO"<<endl;
y.InsertarN();
cout<<"\n *El resultado de las operaciones es: "<<endl;
s.Suma(x.Nreal(), x.Nimaginario(), y.Nreal(), y.Nimaginario());
s.Resta(x.Nreal(), x.Nimaginario(), y.Nreal(), y.Nimaginario());

return 0;
} 




/*INSTRUCCCIONES DEL CÓDIGO
Cree una clase llamada Complejo para Nrealizar aritmética con números complejos. Escriba un programa controlador
para probar sus clases.
Los números complejos tienen la forma:
NumeroR + NumeroI * i
en donde i es
√1
Utilice variables double para representar datos de tipo private de una clase. Proporcione un constructor
que permita inicializar un objeto de esta clase cuando se declare. El constructor debe contener valores predeterminados,
en caso de que no se proporcionen inicializadores. Proporcione funciones miembro de tipo public para
cada uno de los siguientes:
a) Suma de dos números complejos: las partes Nreales se suman juntas y las partes imaginarias se suman juntas.
b) Resta de dos números complejos: la parte Nreal del operando derecho se resta de la parte Nreal del operando
izquierdo, y la parte imaginaria del operando derecho se resta de la parte imaginaria del operando izquierdo.
c) Impresión de números complejos de la forma (a, b), en donde a es la parte Nreal y b es la parte imaginaria.
*/




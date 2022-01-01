//16.6 Clase llamada Racional
#include <iostream>
#include<stdlib.h>

using namespace::std;

class Racional // INICIO DE LA CLASE RACIONAL
{
public:
Racional( float = 0, float = 0);
void User();
void Sum(float, float, float, float);
void Resta(float, float, float, float);
void Multi(float, float, float, float);
void Division(float, float, float, float);

float Numerador();
float Denominador();

private:
float x;
float y;
};

// CONSTRUCTOR
Racional::Racional( float s, float t)
{
x = s;
y = t;
}


//FUNCION CONDICIONAL
int Condicional( int u, int v)
{
int t;

while ( u > 0 ) //USO DE WHILE
{

if ( u < v )
{
t = u;
u = v;
v = t;
}

u = u - v;
}
return v;
}

// FUNCION SUMA
void Racional::Sum( float num1, float num2, float num3, float num4)
{
float numerador = num1*num4 + num2*num3;
float denominador = num2*num4;
int auxiliar = Condicional(numerador, denominador);

cout << "\n La suma es: " << numerador/auxiliar << " / "
<< denominador/auxiliar << endl;
cout << "\n La suma en notacion decimal es: "<< numerador/denominador<< endl;
}


// FUNCION RESTA
void Racional::Resta( float n1, float n2, float n3, float n4)
{
float numerador = n1*n4 - n2*n3;
float denominador = n2*n4;
int auxiliar = Condicional( numerador, denominador );
cout << "\n La resta es: "
<< numerador/auxiliar << " / " << denominador/auxiliar << endl;
cout <<"\n La resta en notacion decimal es: " << numerador/denominador
<< endl;
}

//FUNCION MULTIPLICACION
void Racional::Multi( float m1, float m2, float m3, float m4)
{
float numerador = m1*m3;
float denominador = m2*m4;
int auxiliar = Condicional( numerador, denominador);
cout << "\n La multiplicacion es: " << numerador/auxiliar
<< " / " << denominador/auxiliar << endl;
cout <<"\n La multiplicacion en notacion decimal es: " <<numerador/denominador
<< endl;
}

//FUNCION DIVISION
void Racional::Division(float nm1, float nm2, float nm3, float nm4)
{
float numerador = nm1*nm4;
float denominador = nm3*nm2;
int auxiliar = Condicional( numerador, denominador );
cout << "\n La division es: "
<< numerador/auxiliar << " / " << denominador/auxiliar << endl;
cout <<"\n La division en notacion decimal es: "
<< numerador/denominador << endl;
}

// FUNCION MIEMBRO USER
void Racional::User()
{
cout <<"\n Introduzca el numerador: ";
cin >> x;
cout <<"\n Introduzca el denominador: ";
cin >> y;
}

// FUNCION NUMERADOR
float Racional::Numerador()
{
return x;
}

// FUNCION DENOMINADOR

float Racional::Denominador()
{
return y;
}

//INICIO FUNCION MAIN
int main()
{

cout<<"       BIENVENIDO A ESTE PROGRAMA"<<endl;
cout<<"      ****************************";

cout<<"\n *Para realizar correctamene las operaciones"<<endl;

cout<<"\n DIGITE EL PRIMER NUMERO RACIONAL"<<endl;
Racional numero1;
numero1.User();
Racional numero2;
cout<<"\n DIGITE EL SEGUNDO NUMERO RACIONAL"<<endl;
numero2.User();
Racional numero;
system("cls"); //LIMPIAR PANTALLA
cout<<"       BIENVENIDO A ESTE PROGRAMA"<<endl;
cout<<"      ****************************";

cout<<"\n   *Las operaciones obtenidas son:"<<endl;

numero.Sum( numero1.Numerador(), numero1.Denominador(), numero2.Numerador(),numero2.Denominador());
numero.Resta( numero1.Numerador(), numero1.Denominador(), numero2.Numerador(),numero2.Denominador());
numero.Multi( numero1.Numerador(), numero1.Denominador(), numero2.Numerador(),numero2.Denominador());
numero.Division( numero1.Numerador(), numero1.Denominador(), numero2.Numerador(),numero2.Denominador());

return 0; //MARAVILLOSISIMO RETURN 0 XD

}


/*INSTRUCCIONES DEL PROGRAMA:

Cree una clase llamada Racional para realizar aritmética con fracciones. Escriba un programa controlador para
evaluar su clase.
Utilice variables enteras para representar los datos de tipo private de la clase, es decir, el numerador y el de nominador.
Proporcione un constructor que permita a un objeto de esta clase que se inicialice cuando se declare.
El constructor debe contener valores predeterminados, en caso de que no se proporcionen inicializadores, y debe
almacenar la fracción en su forma reducida. Por ejemplo, la fracción:

2
4

se almacenaría en el objeto como 1 en el numerador y 2 en el denominador. Proporcione una función miembro
public para realizar cada una de las siguientes tareas:
a) Sum de dos números racionales: el resultado debe almacenarse en forma reducida.
b) Resta de dos números racionales: el resultado debe almacenarse en forma reducida.
c) Multiplicación de dos números racionales: el resultado debe almacenarse en forma reducida.
d) División de dos números racionales: el resultado debe almacenarse en forma reducida.
e) Impresión de números racionales de la forma a/b, en donde a es el numerador y b es el denominador.
f) Impresión de números racionales en formato de punto flotante. */

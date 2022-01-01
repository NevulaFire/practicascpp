//16.7 Clase Rectangulo
#include <iostream>
#include <stdlib.h>

using namespace std;

class Rectangulo{
private: //ATRIBUTOS
float largo, ancho;
public:
Rectangulo(float,float); //CONSTRUCTOR
void perimetro();
void area();
void establecer();
};
//INICIALIZACION DEL CONSTRUCTOR
Rectangulo::Rectangulo(float _largo, float _ancho){
largo = _largo;
ancho = _ancho;
}
//FUNCION ESTABLECER
void Rectangulo::establecer()
{
cout <<"\n Introduzca el largo del rectangulo: ";
cin >>largo;
cout <<"\n Introduzca el ancho del rectangulo: ";
cin >>ancho;
}

//FUNCION PERIMETRO
void Rectangulo::perimetro(){
float perimetro1;

perimetro1 = (2*largo) + (2*ancho);
cout<<"\n EL perimetro del rectangulo es:"<<perimetro1;
}
//FUNCION AREA
void Rectangulo::area(){

float area1;

area1 = largo * ancho;

cout<<"\n El area es: "<<area1;
}
//FUNCION MAIN
int main()
{
cout<<"       BIENVENIDO A ESTE PROGRAMA"<<endl;
cout<<"      ****************************";

cout<<"\n *Para obtener el area y perimetro de un rectangulo"<<endl;

cout<<"\n DIGITE LOS SIGUIENTES VALORES:"<<endl;
Rectangulo r1 (0,0); //SE INICIALZA DESDE 0
r1.establecer();
r1.perimetro();
r1.area();
return 0;
}

 // Figura 15.8: fig15_08.cpp
 // Uso de argumentos predeterminados
 #include <iostream>

 using std::cout;
 using std::endl;
 int volumenCaja( int longitud = 1, int ancho = 1, int alto = 1 );

 int main()
 {
 cout<<"El volumen predeterminado de la caja es : "<<volumenCaja()
<<"\n\nEl volumen de una caja de longitud 10,\n"
<<"ancho 1 y altura 1 es: � << volumenCaja( 10 )"
 << "\n\nEl volumen de una caja de longitud 10,\n"
 << "ancho 5 y altura 1 es: � << volumenCaja( 10, 5 )"
 << "\n\nEl volumen de una caja de longitud 10,\n"
 << "ancho 5 y altura 2 es: � << volumenCaja( 10, 5, 2 )"
<< endl;

 return 0;
 } // fin de la funci�n main

 // Calcula el volumen de la caja
 int volumenCaja( int longitud, int ancho, int altura )
 {
 return longitud * ancho * altura;
 } // fin de la funci�n volumenCaja

//Este programa no compila debido a que es un ejemplo de una referencia no inicializada, en este caso
//tendriamos que asiganrle a &y = x para que compile


#include <iostream>

using namespace std;

int main()
{
int x = 3, &y; //Error: y se debe inicializar

cout<<"x = "<< x << endl << "y = " << y <<endl;
y = 7; //aqui se le cambia el valor asigando a y
cout<<"x = "<<x<<endl<<"y ="<<y<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
int x = 3, &y = x; //y no es un alias para x

cout<<"x = "<< x << endl << "y = " << y <<endl;
y = 7; //aqui se le cambia el valor asigando a y
cout<<"x = "<<x<<endl<<"y ="<<y<<endl;
    return 0;
}

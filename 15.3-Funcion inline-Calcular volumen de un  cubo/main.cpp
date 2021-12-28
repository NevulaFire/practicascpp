//Figura 15.3: fig15_03.cpp
//Uso de la funcion inline para calcular
//el volumen de un cubo

#include <iostream>

using namespace std;

inline double cubo(const double s){return s * s * s;}

int main()


{

    double lado; //tipo de dato que es la variable

    for (int k =1; k<4; k++){ //inicia el for
        cout<<"\nIntroduzca la longitud de un lado del cubo: ";
        cin>>lado;
        cout<<"El volumen del cubo con lado "<<lado<< " es: "<<cubo(lado)<< endl;
        } // fin del for




    cout << "\n*******Fin del programa*********" << endl;
    return 0;
}

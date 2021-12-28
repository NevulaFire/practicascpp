#include <iostream>
using namespace std;

class Hora{
public:
    Hora();
    void estableceHora(int, int, int);
    void imprimeMilitar();
    void imprimeEstandat();
private:
    int hora; // 0- 23
    int minuto; // 0-59
    int segundo;// 0-59
}; //Fin de la clase hora



int main()
{

    return 0;
}

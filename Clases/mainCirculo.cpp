#include "Circulo.h"
using namespace std;

int main(){
    Circulo c1; //crea con el constructor default
    Circulo c2(4.5); //crea con el constructor con parámetros
    c1.mostrar();
    cout<< "Tengo un area de : " << c1.area() <<endl;
    cout<< "Tengo un perimetro de : " << c1.perimetro() <<endl;
    c2.mostrar();
    cout<< "Tengo un area de : " << c2.area() <<endl;
    cout<< "Tengo un perimetro de : " << c2.perimetro() <<endl;
    return 0;
}
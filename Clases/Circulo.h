#ifndef CIRCULO_H
#define CIRCULO_H
#include<iostream>
const double PI=3.1416;

//Declaración de la clase
class Circulo{
    public:
        Circulo(); //Constructor por defecto
        Circulo(double); //Constructor con parámetros
        double getRadio() const; //Método de acceso
        void setRadio(double); 
        double area();
        double perimetro();
        void mostrar();
    private:
        double radio;
};

//Definición de la clase
Circulo::Circulo(){
    radio=1;
}
Circulo::Circulo(double _radio){
    radio= _radio;
}

double Circulo::getRadio()const{
    return radio;
}

void Circulo::setRadio(double _radio){
    radio= _radio;
}

double Circulo::area(){
    double a = PI * radio * radio;
    return a;

}

double Circulo::perimetro(){
    double p= 2 * PI * radio;
    return p;
}
void Circulo::mostrar(){
    std::cout <<" Soy un circulo de radio: " <<radio <<std::endl;
}


#endif //CIRCULO_H
#ifndef FRACCION_H
#define FRACCION_H
#include<string>
#include<iostream>
// Escribe la clase Fracción de acuerdo con los comentarios

// Clase Fraccion
// publico
    // constructor default que inicialice la fracción con 1/2
    // constructor con parámetros para numerador y denominador
    // métodos de acceso para todos los atributos
    // métodos de modificación para todos los atributos
    // método calcValorReal que regresa el valor en decimal de la fracción
    // por ejemplo si la fracción es 1/2 regresa 0.5
// privado
    // atributos enteros num y den
  

// implementa los métodos



class Fraccion{
    private:
        int num, den;
    public:
        Fraccion();
        Fraccion(int,int);
        int getNum();
        int getDen();
        void setNum(int);
        void setDen(int);
        double calcValorReal();
};

Fraccion::Fraccion(){
    num = 1;
    den = 2;
}

Fraccion::Fraccion(int _num, int _den){
    num = _num;
    den = _den;
}

int Fraccion::getNum(){
    return num;
}

int Fraccion::getDen(){
    return den;
}

void Fraccion::setNum(int _num){
    num = _num;
}

void Fraccion::setDen(int _den){
    den =_den;
}

double Fraccion::calcValorReal(){
    return (num * 1.0)/den;
}

#endif // FRACCION_H
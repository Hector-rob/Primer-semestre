#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>

// Define una clase Punto que representa una posición en la pantalla, recuerda que los puntos en la pantalla están en pixeles, 
// por eso x y son int. Además considera que la esquina superior izquierda es la posición 0, 0 y no tendremos coordenadas negativas.
class Punto
{
    public:
        //Constructor default pone el punto en el origen de la ventana (0,0)
        Punto(); 
        // Constructor con parámetros recibe la posición en x y la posición en y 
        Punto(int, int);
        // Método de acceso para X
        int getX();
        int getY();
        void setX(int);
        void setY(int);    
        //Cambiar los dos atributos x e y
        void cambiaCoordenada(int, int);
        //Imprimir la posicion
        void imprimePunto();
        void sumX(int);
        void sumY(int);
    private:
        int x;
        int y;
};

// Implementa el constructor default, inicia los atributos x e y a 0

Punto::Punto(){
    x = 0;
    y = 0;
}

// Implementa el constructor con parámetros, llama aquí a los setters de X e Y para que tengan la verificación
Punto::Punto(int xx, int yy) {
    setX(xx);
    setY(yy);
    //llama al setter que falta
}
// Implementa el método de acceso para x
int Punto::getX(){
    return x;
}

int Punto::getY(){
    if (y < 0){
        y = 0;
    }
    return y;
}
// Implementa el método de acceso para Y
void Punto::setX(int xx){
    if (xx < 0){
        xx = 0;
    }
    x = xx;
}

void Punto::setY(int yy){
    if (yy < 0){
        yy = 0;
    }
    y = yy;
}

void Punto::sumX(int inc){
    x = getX()+ inc;
}

void Punto::sumY(int inc){
    y = getY() + inc;
}
// Implementa el método de modificación para Y, verifica que el parámetro recibido es mayor o igual a 0, sino, ponle valor de 0
//Implementa el  setter de Y verifica que el parámetro recibido es mayor o igual a 0, sino, ponle el valor de 0
//Llama los setters de X e Y para tener la verificación
void Punto::cambiaCoordenada(int xx, int yy){
   setX(xx);
   setY(yy);
}

//Imprime los datos de las coordenadas del punto, no modifiques este método
void Punto::imprimePunto(){
    std::cout << "(" << x << ","<< y << ")" <<std::endl;
}

#endif //PUNTO_H


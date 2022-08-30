#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <string>
#include "Punto.h"

class Personaje{
    public:
        //Constructor por default
        Personaje();
        //Constructor con parámetros, recibe un objeto Punto
        Personaje(std::string n, Punto p);
        //Getters y Setters de los atributos 
        std::string getNombre();
        Punto getPosicion();
        void setNombre(std::string n);
        void setPosicion(Punto p);
        // Método cambia posición, recibe datos en x e y y actualiza los valores de x, así como de y del atributo posición
        void cambiaPosicion(int, int);
        //Método que avanza al personaje en horizontal, actualiza la coordenada x del atributo posición
        void avanzaHor(int);
        //Método que avanza al personaje en vertical, actualiza la coordenada y del atributo posicion
        void avanzaVer(int);
        //Imprime el nombre y posición del personaje
        void imprime();
    private:
        std::string nombre;
        Punto posicion;
        
};

//Constructor default inicia el nombre a "Creatura"
Personaje::Personaje(){
    nombre = "Creatura";
}

Personaje::Personaje(std::string n , Punto p){
    nombre = n;
    posicion = p;

}
//Constructor con parámetros, inicia los atributos a lo que recibe como parámetro


// Setter de nombre

void Personaje::setNombre(std::string n){
    nombre = n;
}

void Personaje::setPosicion(Punto p){
    posicion = p;
}
// Getter de nombre

std::string Personaje::getNombre(){
    return nombre;
}

Punto Personaje::getPosicion(){
    return posicion;
}

//Setter de posicion - recibe un Punto


//Getter de posicion - devuelve un Punto



//Cambia las coordenadas de su atributo posición
void Personaje::cambiaPosicion(int x, int y){
    Punto p(x,y);
    posicion = p;
}


    
//Actualiza la coordenada X de la posición sumándole el incremento que recibe
void Personaje::avanzaHor(int inc){
    posicion.sumX(inc);
   //Completa el método
}

//Actualiza la coordenada Y de la posición sumándole el incremento que recibe
void Personaje::avanzaVer(int inc){
    //Completa el método
    posicion.sumY(inc);
}

//Imprime el personaje, no modifiques este método
void Personaje::imprime(){
    std::cout << nombre << " esta en la coordenada ";
    posicion.imprimePunto();
}

#endif //PERSONAJE_H
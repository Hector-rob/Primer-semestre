// Completa la clase Baraja, tendrá los 52 naipes que conforman una baraja ordenada.

#ifndef BARAJA_H
#define BARAJA_H

#include "Naipe.h"

class Baraja{
    
    public:
        // Constructor por default, crea los Naipes necesarios en una baraja
        Baraja();
        // Método de tipo void que muestra las cartas/naipes de la baraja en orden
        void muestraBaraja() const;
        // Método de tipo void que muestra un naipe de la baraja ordenada, se le pasa como parámetro un numero entero entre 1 y 52
        void eligeNaipe(int) const;
    
    private:
        Naipe baraja[52];
};

// arreglos constantes para que sea más fácil la creación de los naipes de la baraja, no los cambies
const std::string figuras[4]={" DE CORAZONES", " DE DIAMANTES", " DE PICAS", " DE TREBOLES"};
const std::string valores[13]={"AS", "2", "3", "4", "5", "6", "7", "8", "9", "10", "JOTO", "REINA", "REY"};

//Este constructor crea la baraja ordenada usando los arreglos de figuras y valores para generar las combinaciones para crear todas 
// las cartasde la baraja, usando el constructor con parámetros del Naipe. Primero todos los corazones, luego diamantes, posteriormente // picas y luego tréboles, observa el mismo orden en que están los arreglos.
Baraja::Baraja(){
    int cont=0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            Naipe aux (valores[j], figuras[i]);
            baraja[cont]= aux; //Aqui debe ir la creacion de un naipe con un valor y una figura tomada de los arreglos;
            cont++;
        }
    }
}
//Metodo muestra baraja, recorre el arreglo de Naipes y los va desplegando a pantalla
void Baraja::muestraBaraja() const{
    for (int i = 0; i < 52; i++){
        baraja[i].muestra();
    }
}
//Método eligeNaipe recibe un entero que representa un numero de carta, por ejemplo la carta 10 es el AS DE CORAZONES
//El número que recibe debe estar entre 1 y 52 sino, despliega la carta 1 (posición 0 del arreglo).
void Baraja::eligeNaipe(int pos) const{
    if (pos >= 1 && pos <= 52){
        baraja[pos-1].muestra();
    }
    else {
        baraja[0].muestra();
    }


}


#endif //BARAJA_H
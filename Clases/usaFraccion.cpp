#include "Fraccion.h"
#include <iostream>
#include <string>
using namespace std;

void llenaArreglo(Fraccion arr[], int cantidad){
    int nume, denom;
     for (int i = 0; i < cantidad; i++){
        cout << "Teclea el numerador y el denominador de la fracción " << endl;
        cin >> nume >> denom;
        arr[i].setNum(nume);
        arr[i].setDen(denom);
    }
}

void printArreglo(Fraccion arr[], int cantidad,  double valor){
    for (int i = 0; i<cantidad; i++){
        if (arr[i].calcValorReal()>valor){
            cout <<arr[i].getNum() << "/" << arr[i].getDen() << " " << arr[i].calcValorReal() <<endl;
       }
    };

}


int main(){
    int cantidad;
    Fraccion arrFraccion[20];

    // Declara un arreglo de objetos de tipo Fracción con 20 posiciones 
    // y declara la variable para la cantidad de Fracciones que tendrá el arreglo
    
    double valor;
    
    //cout << "Cuantas fracciones hay?: " << endl;
    cin >> cantidad;

    llenaArreglo(arrFraccion, cantidad);

   

    
    
    //cout << "Se mostrarán las fracciones cuyo valor decimal sea mayor a un valor, teclea ese valor" << endl;
    cin >> valor;

    printArreglo(arrFraccion, cantidad, valor);

    


    // lee el valor para la variable que contiene la cantidad de fracciones
    
    // Haz una repetición para pedir esa cantidad de datos de tipo Fraccion
     
       
        
        // coloca los datos en la casilla correspondiente del arreglo de Fracciones
    
    
    
   
    
    // muestra en la pantalla solamente las fracciones cuyo valor en decimal es mayor que el valor dado 
    
    
    return 0;
}

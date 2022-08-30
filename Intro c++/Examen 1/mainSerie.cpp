#include <iostream>
using namespace std;
#include "Serie.h"

//COMPLETA este programa principal, escribe las funciones que hagan falta...

// 1. ESCRIBE la función que carga información de una determinada cantidad de Series en un arreglo, con datos que 
//    proporciona el usuario.Se pide al usuario título y luego # de capítulos, para cada serie que vayas a registrar
//    (pide los datos al usuario en ese orden).
//    El título de la serie manéjalo por simplicidad de una sola palabra por ejemplo: Scandal
//    No pongas ningún mensaje al usuario para recibir los datos
void cargarSeries(Serie listaSeries[], int cantSeries){
    string titulo;
    int numCaps;
    for (int i = 0; i < cantSeries; i++){
        cin >> titulo;
        cin >> numCaps;
        listaSeries[i].setTitulo(titulo);
        listaSeries[i].setNumCap(numCaps);
        
    }
}




// 2. ESCRIBE la función que recorre el arreglo de objetos Serie, busca un determinado titulo y si lo encuentra, 
//    intenta el registro del número de capitulos vistos de esa serie.
void registrarSerie(string _titulo, Serie listaSeries[], int caps){
    for (int i = 0; i < 10; i++){
        if (listaSeries[i].getTitulo() == _titulo){
            listaSeries[i].registraAvance(caps);
        }
    }

}



// 3. COMPLETA esta función que mostrará todas las series que han sido cargadas.
void muestraSeries(Serie lista[], int cant){
    cout << "------------------------------"<<endl; //No la quites
    for(int i = 0; i < cant; i++){
       //Escribe la instrucción para imprimir la información de la serie, usando el método correspondiente de Serie.
       lista[i].imprime();
        
        cout << "------------------------------"<<endl; //No la quites
    }
}

int main(){
    // 4. CREA un arreglo de objetos Serie llamado listaSeries con 10 localidades
    Serie listaSeries[10];
    
    //Variables que te van a servir para tus opciones del programa principal
    int cantSeries, caps;
    int numCaps;
    char opcion;
    string titulo;
    //cout << "¿Cuántas series vas a ingresar? "; déja esta instrucción como comentario
    // 5. ESCRIBE la instrucción para recibir la cantidad de series
    cin >> cantSeries;
   
    // 6. LLAMA/INVOCA a la función para cargar los datos de las series
    cargarSeries(listaSeries, cantSeries);
    
    do {
       //cout << "a) Registrar # de capitulos vistos b) Mostrar series c) Terminar" << endl; ***Deja como comentario
        cin >> opcion;
        switch (opcion) {
            case 'a':
                //En esta opción se registran capítulos vistos de una serie en particular
                //cout << "Titulo de la serie a actualizar: ";***Deja esta linea como comentario
                // 7. ESCRIBE la instrucción para recibir el titulo de la serie
                cin >> titulo;
                
               //cout << "Cantidad de capítulos que viste: "; ***Deja esta linea como comentario
                // 8. ESCRIBE la instrucción para recibir la cantidad de capítulos que vió el usuario
                cin >> caps;
                
                // 9. LLAMA/INVOCA a la función correspondiente que creaste en este archivo para registrar el avance de una serie
                registrarSerie(titulo, listaSeries, caps);
                
                
                break;
            case 'b':
                // En esta opción se deben mostrar todas las series que han sido registradas
                // 10. ESCRIBE lo necesario para realizar la acción mencionada en el renglón anterior
                for (int i = 0; i < cantSeries; i++){
                    muestraSeries(listaSeries, cantSeries);
                }


                
                break;
            case 'c':
                cout << "Escogiste salir del menu." << endl; //No modifiques esto
                break;
                
            default:
                cout << "Error, opcion incorrecta" << endl;// No modifiques esto
        }
    } while (opcion != 'c');
    
    return 0;

}
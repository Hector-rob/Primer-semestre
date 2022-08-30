#include <iostream>
using namespace std;

#include "Habitacion.h"

int main() {
    string nombre, marca;
    int pulg, habitacion;
    char opcion;
    
    // 1) Crea 2 objetos de tipo Habitacion room1 y room2 usando el constructor default.
    Habitacion room1;
    Habitacion room2;
    Television tv1;
    Television tv2;

    
    
    
    
    do {
        //cout << " a) Preparar habitación " << endl;
        //cout << " b) Mostrar habitaciones " << endl;
        //cout << " c) Cambiar televisión de habitación " << endl;
        //cout << " d) Terminar " << endl;
        cin >> opcion;
        
        switch (opcion) {
            case 'a': {
                //cout << "Preparar habitación 1 o 2? ";
                cin >> habitacion;
                //cout << "Nombre de la habitación: ";
                cin >> nombre;
                //cout << "Televisión asignada? Teclea la marca y el tamaño en pulgadas en ese orden ";
                cin >> marca >> pulg;
                
                // 2) Agrega lo necesario para poner los datos al objeto correspondiente
                if (habitacion == 1) {
                    tv1.setMarca(marca);
                    tv1.setPulgadas(pulg);
                    room1.setNombre(nombre);
                    room1.setTvAsignada(tv1);
                }
                else { 
                    tv2.setMarca(marca);
                    tv2.setPulgadas(pulg);
                    room2.setNombre(nombre);
                    room2.setTvAsignada(tv2); // si habitación == 2

                
                    
                }
                break;
            }  // cierra caso a
            case 'b': {
                
                // 3) Muestra los datos de la habitación 1
                cout << "Habitación 1" << endl;
                cout << "Nombre : " <<  room1.getNombre() << endl;
                cout << "Televisión asignada : " << room1.getTvAsignada().getMarca() << " - " <<  room1.getTvAsignada().getPulgadas()  << endl;
                
                // 4) Muestra los datos de la habitación 2
                cout << "Habitación 2" << endl;
                cout << "Nombre : " << room2.getNombre()  << endl;
                cout << "Televisión asignada : " << room2.getTvAsignada().getMarca() << " - " << room2.getTvAsignada().getPulgadas()  << endl;
                
                break;
            }  // cierra caso b
            case 'c': {
             
                
                //cout << "Cambiar televisión, para cual Habitación 1 o 2? ";
                cin >> habitacion;
                //cout << "Teclea los datos de la nueva TV (marca y pulgadas) en ese orden ";
                cin >> marca >> pulg;
                
                // 5) Modifica los datos de la televisión asignada a esta habitación
                if (habitacion == 1) {

                
                
                
                }
                else {   // si habitacion == 2

                
                
                
                
                
                }
                break;
            }  // cierra caso c
        }   // cierra el switch
    } while (opcion != 'd');
       
    return 0;
}

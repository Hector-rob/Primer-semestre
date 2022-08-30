#include "Television.h"
#include <string>
#include <iostream>

class Habitacion {
public:
    Habitacion();
    Habitacion(std::string nom, Television tv);
    
    void setNombre(std::string nom);
    std::string getNombre();
    
    // 1) Agrega el encabezado de los métodos get y set para el atributo tvAsignada
    void setTvAsignada(Television);
    Television getTvAsignada();
    
    
    
private:
    std::string nombre;
    Television tvAsignada;
};


// 2) Completa el constructor default poniendo como valor inicial:
//    nombre de la habitación = "disponible", Televisión asignada marca = Sony y pulgadas = 50
Habitacion::Habitacion() {
    nombre = "disponible";
    tvAsignada.setMarca("Sony");
    tvAsignada.setPulgadas(50);

    
    
    
    
}

// 3) Completa el consructor con parámetros
Habitacion::Habitacion(std::string nom, Television tv) {
    nombre = nom;
    tvAsignada.setMarca(tv.getMarca());
    tvAsignada.setPulgadas(tv.getPulgadas());
}

void Habitacion::setNombre(std::string nom) {
    nombre = nom;
}
std::string Habitacion::getNombre() {
    return nombre;
}

void Habitacion::setTvAsignada(Television tv){
    tvAsignada = tv;

}

// 4) Implementa los métodos get y set para el atributo tvAsignada
Television Habitacion::getTvAsignada(){
    return tvAsignada;
}





//Define los atributos y métodos de la clase Cliente. Inlcuye la clase Dirección
//Autores: Hector Robles Villarreal A01634105 y Óscar Jahír Valdés Caballero A01638923
//El programa fue todo hecho en equipo
//Fecha de creación: 29 de noviembre de 2020 / Última modificación: 1 de diciembre de 2020

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include "Direccion.h"

class Cliente{
    public:
        Cliente();
        Cliente(std::string, int, Direccion);
        std::string getNombre();
        int getIdCliente();
        Direccion getDireccion();
        void setNombre(std::string);
        void setIdCliente(int);
        void setDireccion(Direccion);
        void printCliente();
    private:
        std::string nombre;
        int idCliente;
        Direccion direccion;
};

//constructor por, default, inicializa los valores de los atributos a strings vacíos y -1
// llama al constructor default de Direccion para inicializar la variable direccion
Cliente::Cliente(){
    nombre = "";
    idCliente = -1;
    direccion = Direccion();
}

//constructor con parámetros, recibe 3 parámetros y cambia nombre, idCliente y direccion por los parámetros recibidos
Cliente::Cliente(std::string _nombre, int _idCliente, Direccion _direccion){
    nombre = _nombre;
    idCliente = _idCliente;
    direccion = _direccion;
}

//método de acceso para nombre, regresa un string
std::string Cliente::getNombre(){
    return nombre;
}

//método de acceso para IdCliente, regresa un int
int Cliente::getIdCliente(){
    return idCliente;
}

//método de acceso para direccion, regresa un valor tipo Direccion
Direccion Cliente::getDireccion(){
    return direccion;
}

//método de modificación para nombre, recibe un string y actualiza el valor de nombre por ese string
//no regresa nada
void Cliente::setNombre(std::string _nombre){
    nombre = _nombre;
}

//método de modificación para idCliente, recibe un int y actualiza el valor de idCliente por ese int
//no regresa nada
void Cliente::setIdCliente(int _idCliente){
    idCliente = _idCliente;
}

//método de modificación para direccion, recibe un valor tipo Direccion y actualiza el valor de direccion por esa Direccion
//no regresa nada
void Cliente::setDireccion(Direccion _direccion){
    direccion = _direccion;
}

//metodo para imprimir el cliente, no regresa nada
void Cliente::printCliente(){
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "ID: " << idCliente << std::endl;
    std::cout << "Dirección: "<< std::endl; 
    direccion.printDireccion();
}

#endif //ClIENTE_H
//Define los atributos y métodos de la clase Producto
//Autores: Hector Robles Villarreal A01634105 y Oscar Valdés 
//El programa fue todo hecho en equipo
//Fecha de creación: 29 de noviembre de 2020 / Última modificación: 1 de diciembre de 2020
#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <string>

class Producto{
    public:
        Producto();
        Producto(std::string, double); 
        std::string getNombre()const;
        double getPrecio() const;
        int getIdProducto() const;
        void setNombre(std::string);
        void setPrecio(double);
        void setId(int);
        void printProducto();
    private:
        int idProducto;
        double precio;
        std::string nombre;
};

//constructor por default, inicializa nombre a string vacío y el resto de atributos en -1
Producto::Producto(){
    nombre = "";
    idProducto = -1;
    precio = -1;
}

// constructor con parámetros, recibe el nombre y el precio actualiza esos atributos
Producto::Producto(std::string _nombre, double _precio){
    nombre = _nombre;
    precio = _precio;
}

//método de acceso para el nombre, regresa un string
std::string Producto::getNombre()const{
    return nombre;
}

//método de acceso para el precio, regresa un double
double Producto::getPrecio() const{
    return precio;
}

//método de acceso para el id, regresa un int
int Producto::getIdProducto() const{
    return idProducto;
}

//método de modificación del nombre, recibe un string y cambia el valor de nombre por ese string
//no regresa nada
void Producto::setNombre(std::string _nombre){
    nombre = _nombre;
}

//método de modificación del precio, recibe un double y cambia el valor de precio por ese double
//no regresa nada
void Producto::setPrecio(double _precio){
    precio = _precio;
}

//método de modificación del id, recibe un int y cambia el valor de id por ese int
//no regresa nada
void Producto::setId(int _id){
    idProducto = _id;
}
//imprime el producto, no regresa nada
void Producto::printProducto(){
    std::cout << "ID del producto: " << idProducto <<std::endl;
    std::cout << "Nombre del producto: " << nombre << std::endl;
    std::cout << "Precio del producto: $" << precio << std::endl <<std::endl;
}

#endif // PRODUCTO_H
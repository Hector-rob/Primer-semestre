//Define los atributos y métodos de la clase Compra. Inlcuye la clase Cliente y la clase Producto
//Autores: Hector Robles Villarreal A01634105 y Óscar Jahír Valdés Caballero A01638923
//El programa fue todo hecho en equipo
//Fecha de creación: 29 de noviembre de 2020 / Última modificación: 1 de diciembre de 2020

#ifndef COMPRA_H
#define COMPRA_H
#include "Cliente.h"
#include "Producto.h"

class Compra{
    public:
        Compra();
        Compra(Cliente, Producto);
        Cliente getCliente();
        Producto getProducto();
        int getIdCompra();
        void setCliente(Cliente);
        void setProducto(Producto);
        void setIdCompra(int);
        void printCompra();
    private:
        Cliente cliente;
        Producto producto;
        int idCompra;
};

//constructor por default, llama a los constructores default de Cliente y Producto para inicializar cliente y producto
//inicializa idCompra en -1
Compra::Compra(){
    cliente = Cliente();
    producto = Producto();
    idCompra = -1;
}

//constructor con parámetros, recibe un dato tipo Ciente y otro tipo Producto e inicializa cliente y producto a esos valores
//inicializa compra en -1
Compra::Compra(Cliente _cliente, Producto _producto){
    cliente = _cliente;
    producto = _producto;
    idCompra = -1;
}

//método de acceso para cliente, regresa un valor tipo Cliente
Cliente Compra::getCliente(){
    return cliente;
}

//método de acceso para producto, regresa un valor tipo Producto
Producto Compra::getProducto(){
    return producto;
}

//método de acceso para idCompra, regresa un int
int Compra::getIdCompra(){
    return idCompra;
}

//método de modificación para cliente, recibe un valor tipo Cliente y actualiza el valor de cliente
//no regresa nada
void Compra::setCliente(Cliente _cliente){
    cliente = _cliente;

}

//método de modificación para producto, recibe un valor tipo Producto y actualiza el valor de producto
//no regresa nada
void Compra::setProducto(Producto _producto){
    producto = _producto;
}

//método de modificación para idCompra, recibe un int y actualiza el valor de idCompra por ese int
//no regresa nada
void Compra::setIdCompra(int _idCompra){
    idCompra = _idCompra;
}

//método para imprimir la compra
void Compra::printCompra(){
    std::cout << "-----FACTURA-----" << std::endl;
    std::cout <<"Id de compra: " << idCompra << std::endl;
    std::cout << "Cliente: " << cliente.getNombre() << std::endl;
    std::cout << "-Direccion de envio-" << std::endl;
    cliente.getDireccion().printDireccion();
    std::cout << std::endl;
    std::cout << "-Producto-" << std::endl;
    producto.printProducto();
}

#endif //COMPRA_H
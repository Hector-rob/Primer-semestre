//Define los atributos y métodos de la clase Direccion
//Autores: Hector Robles Villarreal A01634105 y Oscar Valdés 
//El programa fue todo hecho en equipo
//Fecha de creación: 29 de noviembre de 2020 / Última modificación: 1 de diciembre de 2020

#ifndef DIRECCION_H
#define DIRECCION_H
#include <iostream>
#include <string>

class Direccion{
    public:
        Direccion();
        Direccion(std::string, std::string, std::string, std::string, std::string);
        std::string getPais();
        std::string getEstado();
        std::string getCiudad();
        std::string getCodigoPostal();
        std::string getCalleNum();
        void setPais(std::string);
        void setEstado(std::string);
        void setCiudad(std::string);
        void setCodigoPostal(std::string);
        void setCalleNum(std::string);
        void printDireccion();
    private: 
        std::string pais, estado, ciudad, codigoPostal, calleNum;
};

// constructor por default, inicializa todos los atributos a strings vacíos
Direccion::Direccion(){
    pais = "";
    estado = "";
    ciudad = "";
    codigoPostal = "";
    calleNum = "";
}

//constructor con parámetros, recibe 5 strings y actualiza cada atributo
Direccion::Direccion(std::string _pais, std::string _estado,  std::string _ciudad, 
                     std::string _codigoPostal, std::string _calleNum){
    pais = _pais;
    estado = _estado;
    ciudad = _ciudad;
    codigoPostal = _codigoPostal;
    calleNum = _calleNum;
}

//método de acceso para pais, regresa un string
std::string Direccion::getPais(){
    return pais;
}

//método de acceso para estado, regresa un string
std::string Direccion::getEstado(){
    return estado;
}

//método de acceso para ciudad, regresa un string
std::string Direccion::getCiudad(){
    return ciudad;
}

//método de acceso para codigoPostal, regresa un string
std::string Direccion::getCodigoPostal(){
    return codigoPostal;
}

//método de acceso para CalleNum, regresa un string
std::string Direccion::getCalleNum(){
    return calleNum;
}

//método de modificación para pais, recibe un string y actualiza el valor de pais por ese string
//no regresa nada
void Direccion::setPais(std::string _pais){
    pais = _pais;
}

//método de modificación para estado, recibe un string y actualiza el valor de estado por ese string
//no regresa nada
void Direccion::setEstado(std::string _estado){
    estado = _estado;
}

//método de modificación para ciudad, recibe un string y actualiza el valor de ciudad por ese string
//no regresa nada
void Direccion::setCiudad(std::string _ciudad){
    ciudad = _ciudad;
}

//método de modificación para CodigoPostal, recibe un string y actualiza el valor de CodigoPostal por ese string
//no regresa nada
void Direccion::setCodigoPostal(std::string _codigoPostal){
    codigoPostal = _codigoPostal;
}

//método de modificación para CalleNum, recibe un string y actualiza el valor de CalleNum por ese string
//no regresa nada
void Direccion::setCalleNum(std::string _calleNum){
    calleNum = _calleNum;
}

//método que imprime la dirección, no regresa nada
void Direccion::printDireccion(){
    std::cout << "Pais: " << pais << std::endl;
    std::cout << "Estado: " << estado << std::endl;
    std::cout << "Ciudad: " << ciudad << std::endl;
    std::cout << "Codigo postal: " << codigoPostal <<std::endl;
    std::cout << "Calle y numero: " << calleNum << std::endl;   
}

#endif //DIRECCION_H
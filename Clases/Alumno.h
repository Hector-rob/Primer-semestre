// Escribe la clase Alumno de acuerdo con los comentarios
// Incluye las librerias requeridas
// Utiliza el espacio de trabajo estándar
// implementa los métodos

// Clase Alumno

// publico
    // constructor omisión que inicialice los atributos tipo string en nulo y los atributos numéricos en cero.
    // constructor con parámetros para matricula, nombre, carrera y edad
    // métodos de acceso para todos los atributos
    // métodos de modificación para todos los atributos
    // método imprimeAlumno que muestre en pantalla los atributos del alumno en el formato [matricula - nombre - carrera - edad]
    // método cumpleanios que incremente en uno la edad y lo muestre

// privado
    // atributos string matricula, nombre y carrera
    // atributo entero edad


#ifndef ALUMNO_h
#define ALUMNO_h
#include<iostream>
#include<string>
class Alumno{
    private:
        std::string matricula;
        std::string nombre;
        std::string carrera;
        int edad;
    public:
        Alumno();
        Alumno(std::string, std::string, std::string, int);
        std::string getMatricula();
        std::string getNombre();
        std::string getCarrera();
        int getEdad();
        void setMatricula(std::string);
        void setNombre(std::string);
        void setCarrera(std::string);
        void setEdad(int);
        void imprimeAlumno();
        void cumpleanios();    
    
};

Alumno::Alumno(){
    matricula = "nulo";
    nombre = "nulo";
    carrera = "nulo";
    edad = 0;
}

Alumno::Alumno(std::string _matricula, std::string _nombre, std::string _carrera, int _edad){
    matricula = _matricula;
    nombre = _nombre;
    carrera = _carrera;
    edad = _edad;
}

std::string Alumno::getMatricula(){
    return matricula;
}

std::string Alumno::getNombre(){
    return nombre;
}

std::string Alumno::getCarrera(){
    return carrera;
}

int Alumno::getEdad(){
    return edad;
}

void Alumno::setMatricula(std::string _matricula){
    matricula = _matricula;
}
    
void Alumno::setNombre(std::string _nombre){
    nombre = _nombre;
}
    
void Alumno::setCarrera(std::string _carrera){
    carrera = _carrera;
}
    
void Alumno::setEdad(int _edad){
    edad = _edad;
}

void Alumno::imprimeAlumno(){
    std::cout<< "[" <<matricula <<" - " <<nombre <<" - "<<carrera <<
        " - " <<edad <<"]" <<std::endl;
}

void Alumno::cumpleanios(){
    edad = edad+1;
    
}

#endif //ALUMNO_h
    
    
    
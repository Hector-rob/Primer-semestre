#ifndef SERIE_H
#define SERIE_H
#include <string>
#include <iostream>

//Clase Serie define una serie de televisión, con una determinado número de capítulos
//Objetos de esta clase guardan los datos del título de la serie, el número de capítulos de la serie
//y el número de capítulos vistos

//Revisa la clase Serie y completa los dos métodos que hacen falta:

class Serie{
    public:
        Serie();
        Serie(std::string, int);
        std::string getTitulo() const;
        void setTitulo(std::string);
        int getNumCap() const;
        void setNumCap(int);
        int getVistos()const;
        void imprime() ;
        void registraAvance(int);
        int capitulosSinVer();
        //1. DECLARA el método registraAvance que recibe una cantidad de capítulos que se vieron, no devuelve nada
        
        //2. DECLARA el método capítulosSinVer, regresa la cantidad de capítulos que no se han visto de la serie
        
    private:
        std::string titulo;  //Titulo de la serie
        int numCap;     //Número de capítulos que tiene la serie
        int vistos;     //Capítulos vistos
};

//Constructor por default
Serie::Serie(){
    titulo="";
    numCap=0;
    vistos=0;
}
Serie::Serie(std::string _titulo, int _numCap){
    titulo = _titulo;
    numCap = _numCap;
    vistos = 0;
}
// 3. IMPLEMENTA el Constructor con parámetros, el atributo vistos se inicia en 0, 
//    los otros dos se actualizan con los datos recibidos como parámetros



// Getter y Setter de titulo
std::string Serie::getTitulo() const{
    return titulo;
}

void Serie::setTitulo(std::string tit){
    titulo=tit;
}


//Getter y setter de número de capítulos
int Serie::getNumCap() const{
    return numCap;
}

void Serie::setNumCap(int cap){
    numCap=cap;
}

//Getter de numero de capítulos vistos
int Serie::getVistos() const{
    return vistos;
}

void Serie::registraAvance(int _numCap){
    if (_numCap < 0 && (_numCap + vistos) <= numCap){
        vistos = _numCap + vistos;
    }
    
    

}
// 4. IMPLEMENTA el método registraAvance que recibe una cantidad de capítulos que se vieron, no devuelve nada
//    Debe revisar que la cantidad de capitulos vistos sea mayor a 0 y que con el avance 
//    no se pase del numero de capitulos de la serie

int Serie::capitulosSinVer(){
    return numCap - vistos;
}

// 5. IMPLEMENTA el método capítulosSinVer, regresa la cantidad de capítulos que no se han visto de la serie




// 6. Este Método imprime los datos de la serie, NO MODIFIQUES, sólo COMPLETA lo que falta
void Serie::imprime() {
    std::cout << titulo << std::endl;
    std::cout << "Numero de Capítulos " << numCap << " No has visto: " << (numCap - vistos) << std::endl;
}

#endif //SERIE_H
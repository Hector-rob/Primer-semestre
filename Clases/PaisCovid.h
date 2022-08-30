#ifndef PAISCOVID_H
#define PAISCOVID_H
#include<string>
#include<iostream>

class PaisCovid{
    private:
        std::string nombre;
        int enfermos;
        int muertes;
        int curados;
        int infectadosT;
    public:
        PaisCovid();
        PaisCovid(std::string, int);
        std::string getNombre();
        int getEnfermos();
        int getMuertes();
        int getCurados();
        void setNombre(std::string);
        void setEnfermos(int);
        void setMuertes(int);
        void setCurados(int);
        int registraEnfermos(int);
        void registraCurados(int);
        void registraMuertes(int);
        int infectadosTotales();
        double tasaMortalidad();
        void imprime();
};

PaisCovid::PaisCovid(){
    nombre = "Desconocido";
    enfermos = 0;
    muertes = 0;
    curados = 0;
    infectadosT = 0;
}

PaisCovid::PaisCovid(std::string _nombre, int _enfermos){
    nombre = _nombre;
    enfermos = _enfermos;
    muertes = 0;
    curados = 0;
    infectadosT=0;
}

std:: string PaisCovid::getNombre(){
    return nombre;
}

int PaisCovid::getEnfermos(){
    return enfermos;
}

int PaisCovid::getMuertes(){
    return muertes;
}

int PaisCovid::getCurados(){
    return curados;
}

void PaisCovid::setNombre(std::string _nombre){
    nombre = _nombre;
}

void PaisCovid::setEnfermos(int _enfermos){
    enfermos = _enfermos;
}

void PaisCovid::setMuertes(int _muertes){
    muertes = _muertes;
}

void PaisCovid::setCurados(int _curados){
    curados = _curados;
}

int PaisCovid::registraEnfermos(int _nuevosEnfermos){
    if (_nuevosEnfermos <= 0) {
        return 0;
    }
    else{
        enfermos = enfermos + _nuevosEnfermos;
        return enfermos;
    }
}

void PaisCovid::registraCurados(int _nuevosCurados){
    if (_nuevosCurados <=0){
        curados = curados+0;
    }
    else{
        enfermos = enfermos - _nuevosCurados;
        curados = curados + _nuevosCurados;

    }
}

void PaisCovid::registraMuertes(int _nuevasMuertes){
    if (_nuevasMuertes <=0){
        muertes = muertes+0;
    }
    else{
        muertes = muertes + _nuevasMuertes;
        enfermos = enfermos - _nuevasMuertes;
    }
}

int PaisCovid::infectadosTotales(){
    infectadosT = enfermos + curados + muertes;
    return infectadosT;
}

double PaisCovid::tasaMortalidad(){
    return (muertes * 100.0) / infectadosT;
}

void PaisCovid::imprime(){
    std::cout << "Pais: " << nombre << std::endl;
    std::cout << "Infectados totales: "<< infectadosTotales() << std::endl;
    std::cout << "Tasa de mortalidad: " << tasaMortalidad() << std::endl;
}








#endif //PAISCOVID_H
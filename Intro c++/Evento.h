#ifndef EVENTO_H
#define EVENTO_H
#include <string>
#include "Hora.h"


class Evento{
    public:
        Evento();
        Evento(Hora, int, std::string);
        Hora getInicio() const;
        int getDuracion() const;
        std::string getAsunto() const;
        void setInicio(Hora);
        void setDuracion(int);
        void setAsunto(std::string);


    private:
        Hora inicio;
        int duracion;
        std::string asunto;
};

Evento::Evento(){
    Hora aux(8,0);
    inicio = aux;
    duracion = 30;
    asunto = "Evento";

}

Evento::Evento(Hora _h, int _duracion, std::string _asunto){
    inicio = _h;
    duracion = _duracion;
    asunto = _asunto;

}

Hora Evento::getInicio() const{
    return inicio;
}

int Evento::getDuracion() const{
    return duracion;
}

std::string Evento::getAsunto() const{
    return asunto;
}

void Evento::setInicio(Hora _h){
    inicio = _h;
}

void Evento::setDuracion(int _d){
    duracion = _d;
}

void Evento::setAsunto(std::string _a){
    asunto = _a;
}


#endif //EVENTO_H
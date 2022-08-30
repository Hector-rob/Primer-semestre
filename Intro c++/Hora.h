#ifndef HORA_H
#define HORA_H
#include <iostream>
#include <iomanip>

class Hora{
    public:
        Hora();
        Hora(int, int);
        int getHh() const;
        int getMm() const;
        void setHh(int);
        void setMm(int);
        void imprime();

        private:
        int hh;
        int mm;
};


Hora::Hora(){
    hh = 12;
    mm = 0;
}

Hora::Hora(int _h, int _mm){
    hh = _h;
    mm = _mm;
}

int Hora::getHh()const{
    return hh;
}

int Hora::getMm()const{
    return mm;
}

void Hora::setHh(int _h){
    hh = _h;
}

void Hora::setMm(int _m){
    mm = _m;
}

void Hora::imprime(){
    std::cout << hh << ":" << std::setw(2) << std::setfill('0') << mm;

}


























#endif //HORA_H
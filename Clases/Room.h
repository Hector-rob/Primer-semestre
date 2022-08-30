// Completa la clase habitación
#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>


class Room {
    public:
        //Constructor por default inicia a un número de habitación -1 y available a disponible.
        Room();
        //constructor que genera una habitación, solo recibe el numero
        // lo demás lo inicia en strings vacios y en 0 y available en true
        Room(int);
        //Declara los getters de todos los atributos
        int getNum()const;
        std::string getName() const;
        int getKids() const;
        int getAdults() const;
        double getCharges() const;
        double getCredit() const;
        bool getAvailable() const;
        //Setter de numRoom
        void setNum(int);
        void setName(std::string);
        //void setKids (int);
        //void setAdults(int);
        //void setCharges(double);
        //void setCredit(double);
        //void setAvailabe(bool);
        //Método checkIn que recibe los datos del nombre del responsable, numKids, numAdult, credit y los actualiza
        // además pone el atributo available en false
        void checkIn(std::string, int, int, double);
        //Metodo checkOut regresa a sus valores default la habitación.
        //Antes de eso verifica que la habitación tiene estatus de no disponible (esta ocupada)
        void checkOut();
        //Método que devuelve la tarifa base por noche de acuerdo con el numero de niños y adultos alojados
        //350 por niño y 600 por adulto
        double roomRate();
        //Método que actualiza un cargo al crédito, debes revisar que el cargo se pueda hacer de acuerdo al monto en crédito 
        //que autorizó el cliente en el hotel y que no se haya rebasado con los cargos anteriores, 
        //regresa true si se pudo hacer el cargo y se actualiza el monto de la variable charge 
        //devuelve false en caso de que no se pueda hacer el cargo.
        bool chargeService(double);
        //Contabiliza el monto a pagar por el cliente a su salida, recibe el número de noches que se hospedó.
        //El monto total es el monto por hospedaje y los cargos que tiene registrados.
        double billingAcount(int);
        //Metodo que imprime la información de la habitación
        void print();
        
    private:
        int num;
        std::string name;
        int kids;
        int adults;
        double charges;
        double credit;
        bool available;
};

//Constructor default
Room::Room(){
    num=-1;
    available=true;
}

//Constructor con parámetros
Room::Room(int _num){
    num = _num;
    name = "";
    kids = 0;
    adults = 0;
    charges = 0;
    credit = 0;
    available = true;
}

int Room::getNum() const{
    return num;
}

std::string Room::getName() const{
    return name;
}

int Room::getKids() const{
    return kids;
}

int Room::getAdults() const{
    return adults;
}

double Room::getCredit() const{
    return credit;
}

double Room::getCharges() const{
    return charges;
}

bool Room::getAvailable() const{
    return available;
}

// Setter de habitación, si no es un número mayor que 0 pone un -1 como en el constructor default.
void Room::setNum(int _num){
    if(_num > 0){
        num =_num;
    }else{
        num=-1;
    }
}
void Room::setName(std::string _name){
    name = _name;
}

//Método para registrar datos a la habitación cuando ingresa un cliente
void Room::checkIn(std::string _name, int _kids, int _adults, double _credit){
    name = _name;
    kids = _kids;
    adults = _adults;
    credit = _credit;
    charges = 0;
    available = false;

}

//Metodo para regresar los datos a default después de una salida del cliente
void Room::checkOut(){
    if (available == false){
        name = "";
        kids = 0;
        adults = 0;
        credit = 0;
        charges = 0;
        available = true;
    }
}

   

//Método que calcula la tarifa base
double Room::roomRate(){
    return (kids * 350.0) + (adults * 600.0);
}
    
//Método que realiza un cargo a una habitación
bool Room::chargeService(double charge){
    if (charge > 0 && (charge + charges) < credit){
        charges = charges + charge;
        return true;
    }
    else {
        return false;
    }
    
    //Debe revisar que el cargo sea mayor a 0 y que los cargos actuales mas el que se quiere realizar
    //no exceda el crédito registrado por la habitación, regresa true si se pudo registrar el cargo
}

double Room::billingAcount(int nigths){
    return (roomRate() * nigths);
    //Regresa la cantidad a pagar por las noches a la tarifa de la habitación mas los cargos por servicios
}

//No modifiques este método
void Room::print(){
    std::cout << "ROOM-CLIENT INFO------------------------------------" << std::endl;
    std::cout << "Room: " << num << std::endl;
    std::cout << "Client: " << name << std:: endl;
    std::cout << "Kids: " << kids << " Adults: " << adults << std::endl;
    std::cout << "Cost per nigth: $" << roomRate() << std::endl;
    std:: cout <<"Max Credit: $" << credit << " --- Actual charges: $" << charges << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}

#endif //ROOM_H
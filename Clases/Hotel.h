#include "Room.h"
//No modifiques esta constante, indica el máximo número de habitaciones máxima a poner en los objetos hotel
//Se usa de esta manera porque estamos usando un arreglo que es una estructura estática
const int MAX=20;

class Hotel{
    public:
        // Constructor default inicia las habitaciones al maximo
        Hotel(); 
        // Constructor con parámetros, indice cuántas habitaciones hay en el hotel (debe ser menor al maximo) y las crea en el arreglo
        Hotel(std::string, int);
        //Método que hace un checkin de una habitación (si está disponible), recibe num de habitación, nombre, cantidad de niños 
        //y de adultos, asi como crédito
        void checkIn(int,std::string, int,int, double);
        //Método que hace un checkout de una determinada habitación, recibe el número de habitación
        void checkOut(int);
        //Método que despliega la cuenta de una habitación, recibe número de habitación y noches que se quedó el cliente.
        double billingAcount(int, int);
        //Carga una cantidad a una habitación, recibe el número de habitación y el monto a cargar.
        void chargeAmountRoom(int, double);
        //Método que nos dice cuántas habitaciones hay disponibles en el hotel
        int availableRooms();
        //Imprime el estatus de una habitación, incluye el nombre del Hotel al inicio
        void printInfoRoom(int);
        //Imprime los datos generales del hotel
        void print();

    private:
        std::string name;
        Room rooms[MAX]; // Arreglo de habitaciones, como es estructura estática lo iniciamos con el máximo.
        int numRooms; //Número de habitaciones del hotel, las que realmente tiene el hotel
};

// Constructor default, pone un número válido a las habitaciones del arreglo de 1 a MAX
Hotel::Hotel() {
    name = "Desconocido";
    numRooms=MAX;
    for(int i=0; i<numRooms; i++){
        rooms[i].setNum(i+1);
    }
}
// Implementa el constructor con parámetros, pone el número adecuado a las habitaciones del arreglo hasta _numRooms
// Actualiza el atributo de numRooms y de nombre del hotel
Hotel::Hotel(std::string _name, int _numRooms) {
    if (_numRooms < MAX){
        name = _name;
        numRooms = _numRooms;
        for (int i = 0; i < _numRooms; i++){
            rooms[i].setNum(i+1);
        }

    }
}

// Implementa el checkIn para una determinada habitación, observa cómo está operando
void Hotel::checkIn(int num,std::string name, int kids, int adults, double credit){
     if (num > 0 && num < numRooms){//Revisa que el numero de habitación es válido
         if (rooms[num-1].getAvailable()){//Revisa que la habitación está disponible
             rooms[num-1].checkIn(name, kids, adults, credit);
             std::cout << "Check-in OK Room number: " << num << std::endl;
         }else{
             std::cout << "Room is not available" << std::endl;
         }
     }else{
         std::cout << "Verify room number" << std::endl;
     }
}

void Hotel::checkOut(int num){
    if (num > 0 && num <numRooms){
        //Revisa que el número de habitación es válido
        if (rooms[num-1].getAvailable() == false){
            rooms[num-1].checkOut();//Revisa que actualmente la habitación está ocupada
            //llama al checkout de la habitación
            std::cout << "Check-Out OK Room number: " << num << std::endl;
        }else{
            std::cout << "Check-out wrong - Room is available" << std::endl;
        }
    }else{
        std::cout << "Verify room number" << std::endl;
    }
}
 
void Hotel::chargeAmountRoom(int num, double amount){
    if (rooms[num-1].getNum() > 0 && rooms[num-1].getNum() < numRooms){//REvisa que el número de habitación es válido
        if (rooms[num-1].getCredit() > (amount + rooms[num-1].getCharges())){//Si chargeService de la habitación se pudo realizar?? Recuerda que ese metodo regresa true o false
            std::cout << "CHARGE OK" << std::endl;
            rooms[num-1].chargeService(amount);
        }else{
            std::cout << std::endl << "CHARGE ERROR" << std::endl;
        }
    }else{
        std::cout <<  "Room unknown" << std::endl;
    }
}
            
//Devuelve la cantidad a pagar por esa habitación
double Hotel::billingAcount(int num, int nigths){
     //No se te olvide revisar si el número de la habitación es válido y está ocupada
   //si no es valido o no está ocupada debe regresar 0
    if (num > 0 and num < numRooms){
        if (rooms[num-1].getAvailable() == false){
            return rooms[num-1].billingAcount(nigths);
        }
        else {
        return 0;
    }
    } else {
        return 0;
    }
}
//Método que regresa el número de habitaciones disponibles que tiene actualmente el hotel
int Hotel::availableRooms(){
    int cont = 0;
    for (int i = 0; i < numRooms; i++) {
        if (rooms[i].getAvailable() == true){
            cont++;
        }
    }
    return cont;
}

//No modifiques este método, imprime el nombre del hotel y los datos de una habitación si el número de habitación es válido
void Hotel::printInfoRoom(int num){
    std::cout << "...................................................." << std::endl;
    std::cout <<"::::::: " << name << " WELCOMES YOU!! ::::::::::::::" << std:: endl;
    if (num >0 && num <numRooms){
        rooms[num-1].print();
    }else{
        std::cout << "Room unknown" << std::endl;
    }
}
            
            
//No modifiques este método, imprime los datos generales del hotel
void Hotel::print(){
    std::cout << "-------------------HOTEL INFO---------------------" << std::endl;
    std::cout << name << std::endl;
    std::cout << "Rooms: " << numRooms << std::endl;
    std::cout << "Available rooms: " << availableRooms()<< std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
}
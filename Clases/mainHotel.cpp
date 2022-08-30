//Completa el main de este ejercicio.


#include "Hotel.h"
using namespace std;

int main() {
    //Crea un hotel nuevo
    Hotel nuevo("Paradise Hotel", 10);
    //Imprime los datos generales del hotel
    nuevo.print();
    
    //Hace un checkin para la habitación 3
    nuevo.checkIn(3,"Paquita Resendez", 1, 2, 5000);
    //Imprime los datos de la habitación 3
    nuevo.printInfoRoom(3);
    
    //Genera un cargo de 1530.50 para la habitación 3
    nuevo.chargeAmountRoom(3, 1530.50);
   
    
    //Imprime de nuevo la información de la habitación 3
    nuevo.printInfoRoom(3);
    
    
    //Imprime de nuevo la información general del hotel, debes ver 9 habitaciones disponibles
    nuevo.print();
    
    
    //Genera la cuenta para la habitación 3 con 2 noches de estancia
    double total3= nuevo.billingAcount(3, 2);
    //Despliega la cuenta
    cout << "Total room 3: $" << total3 <<endl;
    //Genera el checkout de la habitación 3
    nuevo.checkOut(3);
   
    //Imprime de nuevo la información de la habitación 3, deberá estar desocupada
    nuevo.printInfoRoom(3);
    
    return 0;
}
#include "Baraja.h"
using namespace std;

int main(){
    // Crea un objeto baraja
    Baraja b;
    cout << "Baraja ordenada:" << endl;
    cout << "-------------------------" << endl;
    // Muestra todas las cartas de la Baraja ordenada
    b.muestraBaraja();
    cout << "-------------------------" << endl;
    cout << "Un naipe de la baraja ordenada:" << endl;
   // Muestra el Naipe 10 de la baraja ordenada
   b.eligeNaipe(10);
    cout << "-------------------------" << endl;
    return 0;
}
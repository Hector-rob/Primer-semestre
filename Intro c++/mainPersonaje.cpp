#include "Personaje.h"
using namespace std;

//incluye la clase que requieres en el main

int main() {
    //Crea un Punto en las coordenadas 10, 10 de la pantalla
    Punto punto(10, 10);
    // Crea un Personaje en la variable pikachu con esa posición, el nombre del Personaje es "Pikachu"
    Personaje persona("Pikachu", punto);

    persona.imprime();

   
    //Muestra el personaje llamando a imprime
    
    //Mueve a Pikachu directamente a las coordenadas 40,50

    persona.cambiaPosicion(40,50);

    
    //Muestra a pikachu nuevamente
    persona.imprime();
    
    //Realiza un pequeño menú que se repita donde con h/H indiquen que se mueva en horizontal pikachu y con v/V en vertical
    //y con s/S salir del menú
    // Que tambien diga el usuario cuánto va a avanzar, despues de moverlo imprime de nuevo el pikachu.
    char movimiento;//para recibir la instrucción
    int avance; //para recibir cuanto va a avanzar
    do{ //para repetir el menú
        cin >> movimiento;
        switch(movimiento){
            case 'h':
            case 'H':
                //REcibe el avance que quieres para el personaje
                cin >> avance;
                //mueve el personaje en horizontal
                persona.avanzaHor(avance);
                persona.imprime();
                //imprime el personaje
                break;
            case 'v':
            case 'V':
                //Completa lo que hace falta
                cin >> avance;
                persona.avanzaVer(avance);
                persona.imprime();
                break;
            case 's':
            case 'S':
                cout << "Termina avance" << endl;
                break;
            default:
                cout << "Opcion invalida";
        }
    }while(movimiento!='S' && movimiento!='s');
    //imprime p1 con el método adecuado, verás que no ha cambiado, ¿por qué? Y el punto del personaje si estuvo cambiando...
    punto.imprimePunto();
    return 0;
}

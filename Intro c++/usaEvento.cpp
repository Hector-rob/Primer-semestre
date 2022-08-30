#include <iostream>
using namespace std;

#include "Hora.h"
#include "Evento.h"

int main() {
    char opcion;
    
    cin >> opcion;
    
    switch (opcion) {
        case 'a': { // constructor default y métodos de acceso
            Hora h;
            Evento evt;
            cout << evt.getDuracion() <<" " << evt.getAsunto() << endl;
            h = evt.getInicio();
            h.imprime();
        
            // Crea un objeto de tipo Evento y uno de tipo Hora usando los constructores default
            
            
            
            // muestra duración, espacio, asunto, endl
            
            
            // muestra hora:minutos, endl
            
            
            break;
        }
        case 'b':  { // constructor con parámetros y métodos de acceso
        Hora h2(10, 45);
        Evento evt2 (h2, 15, "junta");
        cout << evt2.getDuracion() << " " << evt2.getAsunto() << endl;
        evt2.getInicio().imprime();
        cout << endl;


        
            
            // crea un objeto de tipo Hora con la hora 10:45 usando el constructor con parámetros
            
            
            // crea un objeto de tipo Evento con la hora de inicio 10:45, duración 15 min y asunto = "junta"        
            
            
            // muestra duración, espacio, asunto, endl
            
            
            // muestra hora:minutos, endl
            
            
            break;
        }
        case 'c': { // métodos de modificación y métodos de acceso
        Evento evt3;
        Hora h (5, 28);
        evt3.setInicio(h);
        evt3.setDuracion(12);
        evt3.setAsunto("comida");
        cout << evt3.getDuracion() << " " <<evt3.getAsunto() << endl;
        evt3.getInicio().imprime();

         // Crea un objeto de la clase Evento con el constructor default
            
            
            // Crea un objeto de la clase Hora con los valores 5:28
            
            
            // coloca en el objeto de la clase Evento la hora de inicio 5:28, duración = 12 y asunto = Comida
            
            
           
            // muestra duración, espacio, asunto, endl
            
            
            // muestra hora:minutos, endl


        






        }
        case 'd': {
            Evento listaEventos[10];
            int cantEventos;
            int hh, mm, dur;
            string asunto;
            Hora hrIni;
               //Cuantos eventos hay?
            cin >> cantEventos;
            for (int i = 0; i < cantEventos; i++){
            //Hora de inicio? 
            cin >> hh >> mm;
            //Duracion?
            cin >> dur;
            //Asunto?
            cin >> asunto;
            hrIni.setHh(hh);
            hrIni.setMm(mm);
            listaEventos[i].setInicio(hrIni);
            listaEventos[i].setDuracion(dur);
            listaEventos[i].setAsunto(asunto);
            }

            //Muestra lista de eventos en cada renglon
            // Asunto "a las" hora "y dura" duracion "Minutos"

            for (int i = 0; i < cantEventos; i++){
                cout << listaEventos[i].getAsunto();
                cout << " a las ";
                listaEventos[i].getInicio().imprime();
                cout << " y dura " << listaEventos[i].getDuracion() << " minutos" << endl;







            }

    
            


            
            
           
            
            break;
        }
    }
    return 0;
}


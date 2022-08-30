#include <iostream>
#include <fstream>
using namespace std; //Recuerda antes de los include de tus clases
#include "Depto.h"
#include "Vendedor.h"

// función que busca un id de un departamento en el arreglo de departamentos
// si lo encuentra que regrese un entero que corresponde a la posición donde está ese dato en el arreglo
// si no lo encuentra, regresa -1
int buscaDepartamento(Depto listaDept[], int cantDept, int idDeptoABuscar) {
    for (int i = 0; i < cantDept; i++){
        if (listaDept[i].getIdDep() == idDeptoABuscar){
            return i;
        }

    }
    return -1;
}

// carga datos del archivo Deptos.txt en listaDeptos y cantDeptos
void cargaDatosDepartamentos(Depto listaDeptos[], int &cantDeptos) {
    int deptId;
    string nombre;
    ifstream archivo;
    cantDeptos = 0;
    archivo.open("Deptos.txt");
    while (archivo >> deptId >> nombre){
        listaDeptos[cantDeptos].setIdDep(deptId);
        listaDeptos[cantDeptos].setNombre(nombre);
        cantDeptos++;
        
    }
    archivo.close();

}


// muestra la lista de departamentos
void muestraDepartamentos(Depto listaDept[], int cantDep) {
    cout << "Departamentos de la tienda" << endl;
    for (int i = 0; i < cantDep; i++){
        listaDept[i].imprime();

    }
}

// función que regresa la listaVend y la cantVend con datos
// recibe el arreglo vacío y la variable cantVend sin inicializar y les pone valor en esta función
void cargaDatosVendedores(Vendedor listaVend[], int &cantVend, Depto listaDep[], int cantDep) {
    
    int idDep;
    string nom;
    double vent;
    int num;
    
    cout << "Cuantos vendedores? ";
    cin >> cantVend;
    //Completaremos esta función 
   for (int i = 0; i < cantVend; i++){
       cout << "Ingresa el nombre del vendedor:" << endl;
       cin >> nom;
       cout << "Ingresa las ventas:" << endl;
       cin >> vent;
       do {
           cout << "Ingresa el id del depto: " << endl;
           cin >> idDep;
           num = buscaDepartamento(listaDep, cantDep, idDep);
       } while(num == -1);
       listaVend[i].setNombre(nom);
       listaVend[i].setVentas(vent);
       listaVend[i].setDepartamento(listaDep[num]);


   }
}

// muestra la lista de vendedores
void muestraVendedores(Vendedor listaVen[], int cantVen) {
    for (int i = 0; i < cantVen; i++){
        listaVen[i].imprime();

    }
}

// muestra los nombres de los vendedores de un departamento
void vendedoresPorDepartamento(Vendedor listaVen[], int cantVend, Depto listaDep[], int cantDept, int idDeptoAConsultar) {
    string nombreD;
    int num = buscaDepartamento(listaDep, cantDept, idDeptoAConsultar);
    cout <<"Vendedores del departamento" << listaDep[num].getNombre() << endl;
    for (int i = 0; i < cantVend; i++){
        Depto aux = listaVen[i].getDepartamento();
        if (aux.getIdDep() == idDeptoAConsultar){
            cout << listaVen[i].getNombre() << endl;
        }
    }
}

// registra las ventas de un vendedor de la lista de vendedores existentes
// suma las ventas nuevas a las que ya estaban registradas
bool registrarVentas(Vendedor listaVend[], int cantVend) {
    string nombre;
    double nuevas, anteriores;
    cout << "Nombre del vendedor :" <<endl;
    cin >> nombre;
    for (int i = 0; i < cantVend; i++){
        if (nombre == listaVend[i].getNombre()){
            cout << "Ventas nuevas: " << endl;
            cin >> nuevas;
            anteriores = listaVend[i].getVentas();
            listaVend[i].setVentas(anteriores + nuevas);
            return true;
            

        }
        cout << "Ese vendedor no existe" << endl;
        return false;

    }
}





int main() {
    char opcion;
    int numDepto;
    
    Vendedor listaVendedores[10];
    int cantVendedores;  // cantidad de empleados en la lista de empleados
    Depto listaDeptos[10];
    int cantDeptos;  // cantidad de departamentos en la lista de deptos
    
    //Cargamos datos de los departamentos del archivo
    cargaDatosDepartamentos(listaDeptos, cantDeptos);
    //CArgamos datos de los vendedores, los ingresa el usuario por teclado
    cargaDatosVendedores(listaVendedores, cantVendedores, listaDeptos, cantDeptos);
    
    do {
        cout << endl;
        cout << "Opciones disponibles " << endl;
        cout << " 1) Ver la lista de Departamentos " << endl;
        cout << " 2) Ver la lista de Vendedores " << endl;
        cout << " 3) Consultar vendedores de un departamento " << endl;
        cout << " 4) Registrar ventas "<< endl;
        cout << " 5) Terminar " << endl;
        cin >> opcion;
        switch (opcion) {
            case '1':
                muestraDepartamentos(listaDeptos, cantDeptos);
                break;
            case '2':
                muestraVendedores(listaVendedores, cantVendedores);
                break;
            case '3': 
                cout << "Teclea el id departamento que quieres consultar " << endl;
                cin >> numDepto;
                vendedoresPorDepartamento(listaVendedores, cantVendedores, listaDeptos, cantDeptos, numDepto);
                break;
            case '4':
                registrarVentas(listaVendedores, cantVendedores);
                break;
            case '5':
                cout << "Elegiste salir del programa..."<< endl;
                break;
            default:
                cout << "Opcion invalida"<<endl;
        }
    } while (opcion != '5');
    return 0;
}

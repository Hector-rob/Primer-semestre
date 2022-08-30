#include "PaisCovid.h"
using namespace std;
void llenaArreglo(PaisCovid arr[], int cuantos){
    string nombre;
    int enf;
    for (int i=0; i<cuantos; i++){
        cout<<"Nombre del pais: ";
        cin>>nombre;
        arr[i].setNombre(nombre);
        cout<< "Cantidad de enfermos actuales: ";
        cin >> enf;
        arr[i].registraEnfermos(enf);


    }
}

//void imprimePaises(PaisCovi d arr[], int n){
    //for (int i =0; i<n; i++){
   // }

//}

//void registraMuertes (PaisCovid arr[], int n){


//}

double promedioTasaMortalidad(PaisCovid arr[], int n){
    double suma = 0, promedio;

    return promedio;
}


int main()
{
    int num;
    cout <<"Ingresa cuantos países analizaremos: ";
    cin>>num;
    PaisCovid paises[num];
    llenaArreglo(paises,num);



    }




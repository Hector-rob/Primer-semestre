#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;


// numeroImpar
void numeroImpar(int num) {
    if (num%2 ==0){
        cout << "Ingrese un numero impar: \n";
        cin >>num;
    }
    
    cout <<num <<" es impar :)\n";
}

//mediaAritmetica
int mediaAritmetica(int tam, double suma) {
    int prom;
    for(int i=0; i<tam;i++){
        double num;
        cout<<"Ingresa un numero: \n";
        cin>>num;
        suma = suma + num;
    }
    prom = suma/tam;
    return prom;
}

//conversion
void conversion(){
    int veces;
     cout<<"Ingresa cuantos valores quieres convertir: \n";
            cin>>veces;
            int arr[veces];
            int conversion[veces];
            cout<<"Ingresa los valores en Celsius: \n";
            for (int i=0; i<veces;i++){
                cin>>arr[i]; 
            }
            for (int i=0; i<veces;i++){
                conversion[i] = (9/5) * arr[i] + 32;
            }
            cout <<setw(12)<<"FARENHEIT"<<setw(12)<<"CELSIUS\n";
            for (int i=0; i<veces;i++){
                cout<<setw(12)<<conversion[i] <<setw(12)<<arr[i] <<endl;
            }
            cout <<endl;           
}

//mediasGeometricaArmonica
void mediaGeometrica(){
    int num;
    int mult;
    int contador;
    double sqrt;
    mult = 1;
    contador = 0;
    do{
        cout<<"Ingrese numeros, cuando desee hacer el calculo, ingrese 0" <<endl;
        cin>>num;
        mult = mult*num;
       contador = contador + 1;
    } while(num != 0);
    sqrt = pow(contador,(1/mult));
    cout <<"La media geometrica es " <<sqrt;
}
void mediaArmonica(){
    int num;
    int suma;
    int contador;
    double div;
    suma = 0;
    contador = 0;
    do{
    cout<<"Ingrese numeros, cuando desee hacer el calculo, ingrese 0" <<endl;
    cin>>num;
    num = 1/num;
    suma = suma+num;
    contador = contador + 1;
    } while(num != 0);
    div= contador/suma;
    cout <<"La media aritmetica es " <<div;





}


int main() {
    char opc;
    do{
        cout <<"Ingrese la opcion deseada: \n";
        cin >> opc;
        switch(opc){
            case '1':
            int num;
            cout<<"Seleccionaste el programa \'numeroImpar\'\n";
            cout<< "Ingrese un numero impar: \n";
            cin>>num;
            numeroImpar(num);
            break;

            case '2':
            int tam;
            double suma;
            int prom;
            suma = 0;
            cout<<"Seleccionaste el programa \'mediaAritmetica\'\n";
            cout<<"Cuantos numeros quiere ingresar: \n";
            cin>>tam;
            prom = mediaAritmetica(tam, suma);
            cout<<"La media aritmetica es "<<prom <<endl <<endl;
            break;

            case '3':
            int veces, grados;
            cout<<"Seleccionaste el programa \'conversionCelsiusFarenheit\'\n";
            conversion();
            break;

            case '4':
            cout<<"Seleccionaste el programa \'mediasGeometricaArmonica\'\n";
            mediaGeometrica();
        




            break;

            case '5':
            cout<< "Saliste\n";
            break;

            default:
            cout<<"\nEliga una opcion valida";

        }


    }while(opc != 5);
cout <<"\nSaliste";


}
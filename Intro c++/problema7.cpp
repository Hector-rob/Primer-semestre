#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    cout <<"\nDigite el numero 1: \n";
    cin >> num1;
    cout <<"\nDigite el numero 2: \n";
    cin >> num2;
    cout <<"Tu numero 1 es: " <<num1 <<" y tu numero 2 es: "<<num2 <<endl;
    cout <<"\nIntercambio de valores\n"<<endl;
    cout <<"Ahora tu numero 1 es: "<<num2 <<" y tu numero 2 es :" <<num1 <<endl;
    cout<<endl;

    if (num1 > num2){
        cout <<num1 <<" es mayor que " <<num2 <<endl;
    }

    else{
        cout <<num2 <<" es mayor que " <<num1 <<endl;
    }
    





}
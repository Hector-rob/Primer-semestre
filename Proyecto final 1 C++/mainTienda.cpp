//Programa principal. Incluye e implementa la clase Compra. Aquí se implementan funciones para el
//funcionamiento de una tienda en línea
//Autores: Hector Robles Villarreal A01634105 y Óscar Jahír Valdés Caballero A01638923
//El programa fue todo hecho en equipo
//Fecha de creación: 29 de noviembre de 2020 / Última modificación: 1 de diciembre de 2020

#include "Compra.h"
#include <fstream>
using namespace std;

// recibe datos de los productos del archivo "Productos.txt" y los guarda en un arreglo 
//no regresa nada
void cargarDatosProductos(Producto listaProductos[], int &cantProductos){
    int idProducto;
    string nombreProducto;
    int precio;
    cantProductos = 0;
    ifstream archivo;
    archivo.open("Productos.txt");
    while (archivo >> idProducto >> nombreProducto >> precio){
        listaProductos[cantProductos].setId(idProducto);
        listaProductos[cantProductos].setNombre(nombreProducto);
        listaProductos[cantProductos].setPrecio(precio);
        cantProductos++;
    }
    archivo.close();
}

//recibe datos de los clientes del archivo "Clientes.txt" y direcciones del archivo "Direcciones.txt"
//guarda estos datos en un arreglo, no regresa nada
void cargarDatosClientes(Cliente listClientes[], int &cantClientes){
    ifstream archivoNombre, archivoDireccion;
    int idCliente, idDireccion;
    string nombreCliente, pais, estado, ciudad, codigoPostal, calleNum;
    cantClientes = 0;
    archivoNombre.open("Clientes.txt");
    Direccion dirAux;
    archivoDireccion.open("Direcciones.txt");
    while (archivoNombre >> idCliente >> nombreCliente){
        listClientes[cantClientes].setNombre(nombreCliente);
        listClientes[cantClientes].setIdCliente(idCliente);
        archivoDireccion >> pais >> estado >> ciudad >> codigoPostal >> calleNum;
        dirAux.setPais(pais);
        dirAux.setEstado(estado);
        dirAux.setCiudad(ciudad);
        dirAux.setCodigoPostal(codigoPostal);
        dirAux.setCalleNum(calleNum);
        listClientes[cantClientes].setDireccion(dirAux);
        cantClientes++;
    }
    archivoDireccion.close();
    archivoNombre.close();
}

//pide el nombre al cliente y verifica que esta registrado, le pregunta el producto de su elección y guarda 
//su nombre y su producto en un arreglo. En caso de no estar registrado, se lo hace saber.
//Imprime la compra. No regresa nada
void realizarCompra(Compra listaPedidos[], int &cantPedidos, Cliente listaClientes[], Producto listaProductos[], 
int cantProductos, int cantClientes){
    string nombreCliente;
    int indiceProducto;
    int indiceCliente = -1;
    cout << endl;
    cout << "Ingresa tu nombre: " << endl;
    cin >> nombreCliente;
    for (int i = 0; i < cantClientes; i++){
        if (listaClientes[i].getNombre() == nombreCliente){
            indiceCliente = i;
        }    
    }
    if (indiceCliente != -1){
        listaPedidos[cantPedidos].setCliente(listaClientes[indiceCliente]);
        cout <<"Selecciona el articulo que deseas comprar (Ingresa el numero)" << endl <<endl;
        cout <<"Los productos en existencia son: " << endl <<endl;
        for (int i = 0; i < cantProductos; i++){
            cout << (i+1) << ") ";
            listaProductos[i].printProducto();
        }
        cout << "¿Que producto deseas?" << endl;
        cin >> indiceProducto;
        if (indiceProducto <= 0 || indiceProducto > 7){
            cout << "Ese producto no existe" << endl;
        }
        else{
            indiceProducto = indiceProducto-1;
        listaPedidos[cantPedidos].setProducto(listaProductos[indiceProducto]);
        listaPedidos[cantPedidos].setIdCompra(cantPedidos+1);
        listaPedidos[cantPedidos].printCompra();
        cantPedidos++;
        }
    }
    else{
        cout << endl;
        cout << "Debes registrarte antes de realizar una compra." << endl;
    }
}

//imprime todos los productos en existencia. No regresa nada
void consultarProductos(Producto listaProductos[], int cantProductos){
    for (int i = 0; i < cantProductos; i++){
        listaProductos[i].printProducto();
        cout << endl;
    }
}

//verifica que el cliente existe y despliega su nombre y lo que ha comprado. En caso de no existir, le hace saber que 
//no está registrado. No regresa nada
void consultarPedidos(Compra listaPedidos[], int cantPedidos, Cliente listaClientes[], int cantClientes){
    string nombreCliente;
    cout << "Ingresa tu nombre: ";
    cin >> nombreCliente;
    int numCompras = 0;

    int indiceCliente = -1;
    for (int i = 0; i < cantClientes; i++){
        if (listaClientes[i].getNombre() == nombreCliente){
            indiceCliente = i;
        }
    }
    if (indiceCliente != -1){
        for (int i = 0; i < cantPedidos; i++){
            if (nombreCliente == listaPedidos[i].getCliente().getNombre()){
                listaPedidos[i].printCompra();
                cout << endl;
                numCompras++;
            }
        }
        if (numCompras == 0){
            cout << endl;
            cout << "No has realizado ninguna compra" << endl;
        }
    }
    else{
        cout << endl;
        cout << "Este usuario no esta registrado.";
        cout << endl;
    }
}

//checa que el cliente exista, si no existe, le pide su nombre y lo guarda en el arreglo que tiene los clientes
// le pide su direccion y la guarda en el arreglo. Si el cliente si existe, se lo hace saber, no regresa nada
void registroCliente(Cliente listaClientes[], int &cantClientes){
    string nombreCliente;
    int indiceCliente = -1;
    string pais, estado, ciudad, codigoPostal, calleNum;
    Direccion aux;
    
    cout << "Ingresa tu nombre: " << endl;
    cout << "En vez de poner espacio favor de poner guion bajo" << endl;
    cin >> nombreCliente;
    for (int i = 0; i < cantClientes; i++){
        if (listaClientes[i].getNombre() == nombreCliente){
            indiceCliente = i;
        }
    }
    if (indiceCliente == -1){
        cout << endl;
        cout << "Ingresa los datos de tu direccion de envio" << endl <<endl;
        cout <<"Los datos no pueden contener espacios pero si guion bajo" << endl;
        cout << endl;
        cout << "Ingresa el pais en el que vives: " << endl;
        cin >> pais;
        aux.setPais(pais);
        cout << "Ingresa el estado en el que vives:" << endl;
        cin >> estado;
        aux.setEstado(estado);
        cout << "Ingresa la ciudad en la que vives:" << endl;
        cin >> ciudad;
        aux.setCiudad(ciudad);
        cout << "Ingresa tu codigo postal: " << endl;
        cin >> codigoPostal;
        aux.setCodigoPostal(codigoPostal);
        cout << "Ingresa calle y numero donde vives: " << endl;
        cin >> calleNum;
        aux.setCalleNum(calleNum);
        listaClientes[cantClientes].setNombre(nombreCliente);
        listaClientes[cantClientes].setDireccion(aux);
        cantClientes++;
        listaClientes[cantClientes].setIdCliente(cantClientes);
        cout << "Te has registrado con exito.";
        cout << endl;
    }
    else{
        cout << endl;
        cout << "Ya estas registrado" << endl;
    }
}
  
int main(){
    char opcion;
    int cantClientes;
    Cliente listaClientes[10];
    Producto listaProductos[8];
    Compra listaPedidos[20];
    int cantProductos;
    int cantPedidos;

    cargarDatosProductos(listaProductos, cantProductos);
    cargarDatosClientes(listaClientes, cantClientes);
    cout << endl;
    cout << "-----Bienvenido a nuestra tienda-----" << endl;
    do {
        cout << endl;
        cout << "Seleccione una opción:" << endl;
        cout << "1) Realizar una compra" << endl;
        cout << "2) Consultar productos" << endl;
        cout << "3) Consultar mis compras " << endl;
        cout << "4) Registrarme "  << endl;
        cout << "5) Salir del programa" << endl;
        cin >> opcion;
        switch (opcion) {
            case '1':
                cout << endl;
                cout << "-----Comprar-----" << endl;
                realizarCompra(listaPedidos, cantPedidos, listaClientes, listaProductos, cantProductos, cantClientes);
                break;
            case '2':
                cout << "-----Productos-----" << endl; 
                consultarProductos(listaProductos, cantProductos);
                break;
            case '3': 
                cout <<"-----Consulta de Pedidos-----" << endl;
                consultarPedidos(listaPedidos, cantPedidos, listaClientes, cantClientes);
                break;
            case '4':
                cout <<"-----Registro-----" <<endl;
                cout << endl;
                registroCliente(listaClientes, cantClientes);
                break;
            case '5':
                cout << "Saliste" << endl;
                cout << "¡Vuelve pronto!"<< endl;
                break;
            default:
                cout << "Esta opcion no es valida, intentalo de nuevo." << endl;     
        }
    } while (opcion != '5');
    return 0;
}

   











#include <iostream>
#include "Cocina.h"
#include "Cuarto.h"
#include "Cuarto de Lavado.h"
#include "Entrada.h"
#include <string>
using namespace std;
int opcion;
int main() {
    Cocina kitchen;
    Cuarto bedroom;
    CuartoLavado laundry;
    Entrada entry;
    do {
    cout<<"MENÚ:"<<endl;
    cout<<"1. Cocina"<<endl;
    cout<<"2. Cuartos"<<endl;
    cout<<"3. Cuarto de lavado"<<endl;
    cout<<"4. Entrada"<<endl;
    cout<<"5. Agregar otra habitación inteligente"<<endl;
    cout<<"6 Salir"<<endl;
    cout<<"Seleccione la opción deseada: ";
    cin>>opcion;
    if (opcion==1){
        kitchen.imprimeDatos();
        int ococ;
        do {
        cout<<"MENÚ:"<<endl;
        cout<<"1. Lavavajillas"<<endl;
        cout<<"2. Robot de cocina"<<endl;
        cout<<"3. Aire acondicionado"<<endl;
        cout<<"4. Entrada"<<endl;
        cout<<"5. Agregar otra habitación inteligente"<<endl;
        cout<<"6 Salir"<<endl;
        cout<<"Seleccione el dispositivo que desea cambiar de estado al opuesto del actual: ";
        cin>>ococ;
        if (opcion==1){
            kitchen.imprimeDatos();
        }
        }while (ococ=!6);
    }
        
    else if (opcion==2){
        bedroom.imprimeDatos();
    }
    else if (opcion==3){
        laundry.imprimeDatos();
    } 
    else if (opcion==4){
        entry.imprimeDatos();
    } 
    else if (opcion==5){
        cout<<"Agregando otra habitación";
    } 
    else if (opcion==6){
        cout<<"Gracias por utilizar la app :)";
    }
    else{
        cout<<"Número equivocado, intentelo de nuevo"<<endl;
    }
    }while(opcion!=6);
    return 0;
}

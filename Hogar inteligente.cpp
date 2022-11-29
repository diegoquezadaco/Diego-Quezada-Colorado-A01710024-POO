#include <iostream>
#include "Casa.h"
#include "Habitacion.h"
#include "ParteCasa.h"
#include "Cocina.h"
#include "Cuarto.h"
#include "Cuarto de Lavado.h"
#include "Entrada.h"
#include <string>
using namespace std;
int opcion;
int main() {
    Casa home;
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
        cout<<"MENÚ de los dispositivos para cambiar su estado:"<<endl;
        _sleep(500);
        cout<<"1. Lavavajillas"<<endl;
        cout<<"2. Robot de cocina"<<endl;
        cout<<"3. Aire acondicionado"<<endl;
        cout<<"4. Entrada"<<endl;
        cout<<"5. Agregar otra habitación inteligente"<<endl;
        cout<<"6 Salir"<<endl;
        cout<<"Seleccione el dispositivo que desea cambiar de estado al opuesto del actual: ";
        cin>>ococ;
        if (opcion==1){
            kitchen.activarLavavajillas();
        }
        if (opcion==2){
            kitchen.cocinaRobotCoc();
        }
        if (opcion==3){
            kitchen.activarLavavajillas();
        }
        if (opcion==4){
            kitchen.activarLavavajillas();
        }
        if (opcion==5){
            kitchen.activarLavavajillas();
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
    } 
    else if (opcion==6){
        cout<<"Gracias por utilizar la app :)";
        break;
    }
    else{
        cout<<"Número equivocado, intentelo de nuevo"<<endl;
    }
    }while(opcion!=6);
    return 0;
}

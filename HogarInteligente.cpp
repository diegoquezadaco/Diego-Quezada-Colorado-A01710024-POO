#include <iostream>
#include "Habitacion.h"
#include "ParteCasa.h"
#include "Cocina.h"
#include "Cuarto.h"
#include "CuartoLavado.h"
#include "Entrada.h"
#include <string>
using namespace std;
#include <unistd.h>
int opcion;
int main() {
    CuartoLavado laundry;
    Entrada entry;
    Cocina kitchen;
    Cuarto bedroom;
    Cuarto room;
    cout<<"Bienvenido a su hogar inteligente"<<endl;
    sleep(5/3);
    cout<<"Seleccione la parte de la casa que desea controlar"<<endl;
    sleep(1/30);
    do {
    cout<<"-----MENÚ----"<<endl<<endl;
    sleep(5/3);
    cout<<"1. Cocina"<<endl;
    sleep(5/3);
    cout<<"2. Cuartos"<<endl;
    sleep(5/3);
    cout<<"3. Cuarto de lavado"<<endl;
    sleep(5/3);
    cout<<"4. Entrada"<<endl;
    sleep(5/3);
    cout<<"5 Salir"<<endl;
    sleep(5/3);
    cout<<"Seleccione la opción deseada: "<<endl;
    sleep(5/3);
    cout<<"----------------------------------------"<<endl;
    cin>>opcion;
    cout<<endl;
    if (opcion==1){
        kitchen.imprimeDatos();
        int ococ;
        do {
        cout<<"--MENÚ de los dispositivos para cambiar su estado:--"<<endl<<endl;
        sleep(8/3);
        cout<<"1. Lavavajillas"<<endl;
        sleep(8/3);
        cout<<"2. Robot de cocina"<<endl;
        sleep(8/3);
        cout<<"3. Estufa"<<endl;
        sleep(8/3);
        cout<<"4. Cafetera"<<endl;
        sleep(8/3);
        cout<<"5. Horno"<<endl;
        sleep(8/3);
        cout<<"6. Aire acondicionado"<<endl;
        sleep(8/3);
        cout<<"7. Ventanas"<<endl;
        sleep(8/3);
        cout<<"8. Persianas"<<endl;
        sleep(8/3);
        cout<<"9. Bocina inteligente"<<endl;
        sleep(8/3);
        cout<<"10. Luces"<<endl;
        sleep(8/3);
        cout<<"11. Piso"<<endl;
        sleep(8/3);
        cout<<"12. Regresar al menú principal"<<endl;
        sleep(8/3);
        cout<<"Seleccione la opción deseada: "<<endl;
        sleep(8/3);
        cout<<"----------------------------------------"<<endl;
        cin>>ococ;
        cout<<endl;
        if (ococ==1){
            kitchen.activarLavavajillas();
        }
        else if (ococ==2){
            kitchen.cocinaRobotCoc();
        }
        else if (ococ==3){
            if (kitchen.getEstufa()=="Apagada"){
                kitchen.encenderEstufa();
            }
            else {
                kitchen.apagarEstufa();
            }
        }
        else if (ococ==4){
            kitchen.encenderCafetera();
        }
        else if (ococ==5){
            kitchen.activarLavavajillas();
        }
        else if (ococ==6){
            kitchen.encenderHorno();
        } 
        else if (ococ==7){
            if (kitchen.getAireAcon()=="Apagado"){
                kitchen.encenderAC();
            }
            else {
                kitchen.apagarAC();
            }
        }
        else if (ococ==8){
            if (kitchen.getVentana()=="Cerradas"){
                kitchen.abrirVentana();
            }
            else {
                kitchen.cerrarVentana();
            }
        }
        else if (ococ==9){
            if (kitchen.getPersianas()=="Cerradas"){
                kitchen.abrirPersiana();
            }
            else {
                kitchen.cerrarPersiana();
            }
        }
        else if (ococ==10){
            if (kitchen.getBocinaInt()=="Apagada"){
                kitchen.encenderBocina();
            }
            else {
                kitchen.apagarBocina();
            }
        }
        else if (ococ==11){
            if (kitchen.getLuces()=="Apagadas"){
                kitchen.encenderLuces();
            }
            else {
                kitchen.apagarLuces();
            }
        }
        else if (ococ==12){
            kitchen.limpiaPiso();
            }
        }while (ococ=!13);
    }
        
    else if (opcion==2){
        bedroom.imprimeDatos();
        room.imprimeDatos();
        int oc;
        do {
        cout<<"¿Qué cuarto desea modificar?"<<endl;
        sleep(7/3);
        cout<<"1. Cuarto 1"<<endl;
        sleep(7/3);
        cout<<"2. Cuarto 2"<<endl;
        sleep(7/3);
        cout<<"3. Regresar al menú principal"<<endl;
        sleep(7/3);
        cout<<"Seleccione la opción deseada: "<<endl;   
        cin>>oc;
        if (oc==1){
            int oc1;
            do {
            cout<<"--MENÚ de los dispositivos inteligentes del Cuarto 1 para cambiar su estado:--"<<endl<<endl;
            sleep(7/3);
            cout<<"1. Aire acondicionado"<<endl;
            sleep(7/3);
            cout<<"2. Ventanas"<<endl;
            sleep(7/3);
            cout<<"3. Persianas"<<endl;
            sleep(7/3);
            cout<<"4. Bocina inteligente"<<endl;
            sleep(7/3);
            cout<<"5. Luces"<<endl;
            sleep(7/3);
            cout<<"6. Piso"<<endl;
            sleep(7/3);
            cout<<"7. Cama"<<endl;
            sleep(7/3);
            cout<<"8. Televisión"<<endl;
            sleep(7/3);
            if (bedroom.getLuces()=="Encendidas"){
                cout<<"9. Color Luces"<<endl;
                sleep(7/3);
            }       
            cout<<"0. Regresar al menú principal"<<endl;
            sleep(7/3);
            cout<<"Seleccione la opción deseada: "<<endl;
            sleep(7/3);
            cout<<"----------------------------------------"<<endl<<endl;
            cin>>oc1;
            if (oc1==1){
                if (bedroom.getAireAcon()=="Apagado"){
                    bedroom.encenderAC();
                }
                else {
                    bedroom.apagarAC();
                }
            }
            else if (oc1==2){
                if (bedroom.getVentana()=="Cerradas"){
                    bedroom.abrirVentana();
                }
                else {
                    bedroom.cerrarVentana();
                }
            }
            else if (oc1==3){
                if (bedroom.getPersianas()=="Cerradas"){
                    bedroom.abrirPersiana();
                }
                else {
                    bedroom.cerrarPersiana();
                }
            }
            else if (oc1==4){
                if (bedroom.getBocinaInt()=="Apagada"){
                    bedroom.encenderBocina();
                }
                else {
                    bedroom.apagarBocina();
                }
            }
            else if (oc1==5){
                if (bedroom.getLuces()=="Apagadas"){
                    bedroom.encenderLuces();
                }
                else {
                    bedroom.apagarLuces();
                }
            }
            else if (oc1==6){
                bedroom.limpiaPiso();
            }
            else if (oc1==7){
                bedroom.tenderCama();
            }
            else if (oc1==8){
                if(bedroom.getTelev()=="Apagada"){
                    bedroom.encenderTV();
                }
                else {
                    bedroom.apagarTV();
                }
            }
            else if (oc1==9){
                string color;
                cout<<"Ingrese el color que desea que sean sus luces: "<<endl;
                cin>>color;
                bedroom.setColorLu(color);
                cout<<"El color de sus luces se ha cambiado exitosamente a: "<<bedroom.getColorLu()<<endl;
                sleep(7/3);
            }
            else if (oc1==0){
                cout<<"Regresando al menú principal..."<<endl;
                sleep(7/3);
            }
            else {
                cout<<"Opción no válida, intente de nuevo."<<endl;
                sleep(7/3);
                break;
            }
        }while (oc1=!0);
        }
        else if (oc==2){
            int oc2;
            do {
            cout<<"--MENÚ de los dispositivos inteligentes del cuarto 2 para cambiar su estado:--"<<endl<<endl;
            sleep(7/3);
            cout<<"1. Aire acondicionado"<<endl;
            sleep(7/3);
            cout<<"2. Ventanas"<<endl;
            sleep(7/3);
            cout<<"3. Persianas"<<endl;
            sleep(7/3);
            cout<<"4. Bocina inteligente"<<endl;
            sleep(7/3);
            cout<<"5. Luces"<<endl;
            sleep(7/3);
            cout<<"6. Piso"<<endl;
            sleep(7/3);
            cout<<"7. Cama"<<endl;
            sleep(7/3);
            cout<<"8. Televisión"<<endl;
            sleep(7/3);
            if (room.getLuces()=="Encendidas"){
                cout<<"9. Color Luces"<<endl;
                sleep(7/3);
            }       
            cout<<"0. Regresar al menú principal"<<endl;
            sleep(7/3);
            cout<<"Seleccione la opción deseada: "<<endl;
            sleep(7/3);
            cout<<"----------------------------------------"<<endl<<endl;
            cin>>oc2;
            if (oc2==1){
                if (room.getAireAcon()=="Apagado"){
                    room.encenderAC();
                }
                else {
                    room.apagarAC();
                }
            }
            else if (oc2==2){
                if (room.getVentana()=="Cerradas"){
                    room.abrirVentana();
                }
                else {
                    room.cerrarVentana();
                }
            }
            else if (oc2==3){
                if (room.getPersianas()=="Cerradas"){
                    room.abrirPersiana();
                }
                else {
                    room.cerrarPersiana();
                }
            }
            else if (oc2==4){
                if (room.getBocinaInt()=="Apagada"){
                    room.encenderBocina();
                }
                else {
                    room.apagarBocina();
                }
            }
            else if (oc2==5){
                if (room.getLuces()=="Apagadas"){
                    room.encenderLuces();
                }
                else {
                    room.apagarLuces();
                }
            }
            else if (oc2==6){
                room.limpiaPiso();
            }
            else if (oc2==7){
                room.tenderCama();
            }
            else if (oc2==8){
                if(room.getTelev()=="Apagada"){
                    room.encenderTV();
                }
                else {
                    room.apagarTV();
                }
            }
            else if (oc2==9){
                string color;
                cout<<"Ingrese el color que desea que sean sus luces: "<<endl;
                cin>>color;
                room.setColorLu(color);
                cout<<"El color de sus luces se ha cambiado exitosamente a: "<<room.getColorLu()<<endl;
                sleep(7/3);
            }
            else if (oc2==0){
                cout<<"Regresando al menú principal..."<<endl;
                sleep(7/3);
            }
            else {
                cout<<"Opción no válida, intente de nuevo."<<endl;
                sleep(7/3);
                break;
            }
            }while (oc2=!0);
        }
        else if (oc==3){
            cout<<"Regresando al menú principal..."<<endl;
            sleep(1/30);
            break;
        }
        }while (oc!=3);
        }
 
    else if (opcion==3){
        laundry.imprimeDatos();
        int oclo;
        do {
        cout<<"---Menú de los dispositivos inteligentes del Cuarto de Lavado para cambiar su estado:---"<<endl<<endl;
        sleep(8/3);
        cout<<"1. Lavasecadora"<<endl;
        sleep(8/3);
        cout<<"2. Luces"<<endl;
        sleep(8/3);
        cout<<"3. Piso"<<endl;
        sleep(8/3);
        cout<<"4. Regresar al menú principal"<<endl;
        sleep(8/3);
        cout<<"Seleccione la opción deseada: "<<endl;
        sleep(8/3);
        cout<<"----------------------------------------"<<endl;
        cin>>oclo;
        cout<<endl;
        if (oclo==1){
            laundry.usarLavadoraSecadora();
        }
        else if (oclo==2){
            if (laundry.getLuces()=="Apagadas"){
                laundry.encenderLuces();
            }
            else {
                laundry.apagarLuces();
            }
        }
        else if (oclo==3){
            laundry.limpiaPiso();
        }
        }while (oclo=!4);
        
    } 
    else if (opcion==4){
        entry.imprimeDatos();
        int ocen;
        do {
        cout<<"Menú de los dispositivos inteligentes de la entrada para cambiar su estado:"<<endl<<endl;
        sleep(8/3);
        cout<<"1. Puerta"<<endl;
        sleep(8/3);
        cout<<"2. Luces"<<endl;
        sleep(8/3);
        cout<<"3. Piso"<<endl;
        sleep(8/3);
        cout<<"4. Seguridad de la puerta"<<endl;
        sleep(8/3);
        cout<<"5. Carga del vehículo"<<endl;
        sleep(8/3);
        cout<<"6. Portón"<<endl;
        sleep(8/3);
        cout<<"7. Regresar al menú principal"<<endl;
        sleep(8/3);
        cout<<"Seleccione la opción deseada: "<<endl;
        sleep(8/3);
        cout<<"----------------------------------------"<<endl;
        cin>>ocen;
        cout<<endl;
        if (ocen==1){
            if (entry.getPuerta()=="Abierta"){
                entry.cerrarPuerta();
            }
            else {
                entry.abrirPuerta();
            }
        }
        else if (ocen==2){
            if (entry.getLuces()=="Apagadas"){
                entry.encenderLuces();
            }
            else {
                entry.apagarLuces();
            }
        }
        else if (ocen==3){
            entry.limpiaPiso();
        }
        else if (ocen==4){
            if (entry.getSeguPuerta()=="Desbloqueada"){
                entry.bloquearPuerta();
            }
            else {
                entry.desbloquearPuerta();
            }
        }
        else if (ocen==5){
            entry.cargarCarro();
        }
        else if (ocen==6){
            if (entry.getPorton()=="Abierto"){
                entry.cerrarPorton();
            }
            else {
                entry.abrirPorton();
            }
        }
        }while (ocen=!7);

    } 
    else if (opcion==5){
        cout<<"Gracias por utilizar la app :)";
        break;
    }
    else{
        cout<<"Número equivocado, intentelo de nuevo"<<endl;
    }
    }while(opcion!=5);
    return 0;
}

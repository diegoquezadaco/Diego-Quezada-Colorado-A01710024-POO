#include <iostream>
#include "Habitacion.h"
#include "ParteCasa.h"
#include "Cocina.h"
#include "Cuarto.h"
#include "CuartoLavado.h"
#include "Entrada.h"
#include <string>
using namespace std;
#include<windows.h>
int opcion;
int main() {
    CuartoLavado laundry;
    Entrada entry;
    Cocina kitchen;
    Cuarto bedroom;
    Cuarto room;
    cout<<"Bienvenido a su hogar inteligente"<<endl;
    Sleep(500);
    cout<<"Seleccione la parte de la casa que desea controlar"<<endl;
    Sleep(1000);
    do {
    cout<<"-----MENÚ----"<<endl<<endl;
    Sleep(500);
    cout<<"1. Cocina"<<endl;
    Sleep(500);
    cout<<"2. Cuartos"<<endl;
    Sleep(500);
    cout<<"3. Cuarto de lavado"<<endl;
    Sleep(500);
    cout<<"4. Entrada"<<endl;
    Sleep(500);
    cout<<"5 Salir"<<endl;
    Sleep(500);
    cout<<"Seleccione la opción deseada: "<<endl;
    Sleep(500);
    cout<<"----------------------------------------"<<endl;
    cin>>opcion;
    cout<<endl;
    if (opcion==1){
        kitchen.imprimeDatos();
        int ococ;
        do {
        cout<<"--MENÚ de los dispositivos para cambiar su estado:--"<<endl<<endl;
        Sleep(800);
        cout<<"1. Lavavajillas"<<endl;
        Sleep(800);
        cout<<"2. Robot de cocina"<<endl;
        Sleep(800);
        cout<<"3. Estufa"<<endl;
        Sleep(800);
        cout<<"4. Cafetera"<<endl;
        Sleep(800);
        cout<<"5. Horno"<<endl;
        Sleep(800);
        cout<<"6. Aire acondicionado"<<endl;
        Sleep(800);
        cout<<"7. Ventanas"<<endl;
        Sleep(800);
        cout<<"8. Persianas"<<endl;
        Sleep(800);
        cout<<"9. Bocina inteligente"<<endl;
        Sleep(800);
        cout<<"10. Luces"<<endl;
        Sleep(800);
        cout<<"11. Piso"<<endl;
        Sleep(800);
        cout<<"12. Regresar al menú principal"<<endl;
        Sleep(800);
        cout<<"Seleccione la opción deseada: "<<endl;
        Sleep(800);
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
        Sleep(700);
        cout<<"1. Cuarto 1"<<endl;
        Sleep(700);
        cout<<"2. Cuarto 2"<<endl;
        Sleep(700);
        cout<<"3. Regresar al menú principal"<<endl;
        Sleep(700);
        cout<<"Seleccione la opción deseada: "<<endl;   
        cin>>oc;
        if (oc==1){
            int oc1;
            do {
            cout<<"--MENÚ de los dispositivos inteligentes del Cuarto 1 para cambiar su estado:--"<<endl<<endl;
            Sleep(700);
            cout<<"1. Aire acondicionado"<<endl;
            Sleep(700);
            cout<<"2. Ventanas"<<endl;
            Sleep(700);
            cout<<"3. Persianas"<<endl;
            Sleep(700);
            cout<<"4. Bocina inteligente"<<endl;
            Sleep(700);
            cout<<"5. Luces"<<endl;
            Sleep(700);
            cout<<"6. Piso"<<endl;
            Sleep(700);
            cout<<"7. Cama"<<endl;
            Sleep(700);
            cout<<"8. Televisión"<<endl;
            Sleep(700);
            if (bedroom.getLuces()=="Encendidas"){
                cout<<"9. Color Luces"<<endl;
                Sleep(700);
            }       
            cout<<"0. Regresar al menú principal"<<endl;
            Sleep(700);
            cout<<"Seleccione la opción deseada: "<<endl;
            Sleep(700);
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
                Sleep(700);
            }
            else if (oc1==0){
                cout<<"Regresando al menú principal..."<<endl;
                Sleep(700);
            }
            else {
                cout<<"Opción no válida, intente de nuevo."<<endl;
                Sleep(700);
                break;
            }
        }while (oc1=!0);
        else if (oc==2){
            int oc2;
            do {
            cout<<"--MENÚ de los dispositivos inteligentes del cuarto 2 para cambiar su estado:--"<<endl<<endl;
            Sleep(700);
            cout<<"1. Aire acondicionado"<<endl;
            Sleep(700);
            cout<<"2. Ventanas"<<endl;
            Sleep(700);
            cout<<"3. Persianas"<<endl;
            Sleep(700);
            cout<<"4. Bocina inteligente"<<endl;
            Sleep(700);
            cout<<"5. Luces"<<endl;
            Sleep(700);
            cout<<"6. Piso"<<endl;
            Sleep(700);
            cout<<"7. Cama"<<endl;
            Sleep(700);
            cout<<"8. Televisión"<<endl;
            Sleep(700);
            if (room.getLuces()=="Encendidas"){
                cout<<"9. Color Luces"<<endl;
                Sleep(700);
            }       
            cout<<"0. Regresar al menú principal"<<endl;
            Sleep(700);
            cout<<"Seleccione la opción deseada: "<<endl;
            Sleep(700);
            cout<<"----------------------------------------"<<endl<<endl;
            cin>>oc2;
            if (oc==1){
                if (room.getAireAcon()=="Apagado"){
                    room.encenderAC();
                }
                else {
                    room.apagarAC();
                }
            }
            else if (oc==2){
                if (room.getVentana()=="Cerradas"){
                    room.abrirVentana();
                }
                else {
                    room.cerrarVentana();
                }
            }
            else if (oc==3){
                if (room.getPersianas()=="Cerradas"){
                    room.abrirPersiana();
                }
                else {
                    room.cerrarPersiana();
                }
            }
            else if (oc==4){
                if (room.getBocinaInt()=="Apagada"){
                    room.encenderBocina();
                }
                else {
                    room.apagarBocina();
                }
            }
            else if (oc==5){
                if (room.getLuces()=="Apagadas"){
                    room.encenderLuces();
                }
                else {
                    room.apagarLuces();
                }
            }
            else if (oc==6){
                room.limpiaPiso();
            }
            else if (oc==7){
                room.tenderCama();
            }
            else if (oc==8){
                if(room.getTelev()=="Apagada"){
                    room.encenderTV();
                }
                else {
                    room.apagarTV();
                }
            }
            else if (oc==9){
                string color;
                cout<<"Ingrese el color que desea que sean sus luces: "<<endl;
                cin>>color;
                room.setColorLu(color);
                cout<<"El color de sus luces se ha cambiado exitosamente a: "<<room.getColorLu()<<endl;
                Sleep(700);
            }
            else if (oc==0){
                cout<<"Regresando al menú principal..."<<endl;
                Sleep(700);
            }
            else {
                cout<<"Opción no válida, intente de nuevo."<<endl;
                Sleep(700);
                break;
            }
            }while (oc=!0);
        }
        else if (oc==3){
            cout<<"Regresando al menú principal..."<<endl;
            Sleep(1000);
            break;
        }
        }while (oc!=3);
        }
    }
 
    else if (opcion==3){
        laundry.imprimeDatos();
        int oclo;
        do {
        cout<<"---Menú de los dispositivos inteligentes del Cuarto de Lavado para cambiar su estado:---"<<endl<<endl;
        Sleep(800);
        cout<<"1. Lavasecadora"<<endl;
        Sleep(800);
        cout<<"2. Luces"<<endl;
        Sleep(800);
        cout<<"3. Piso"<<endl;
        Sleep(800);
        cout<<"4. Regresar al menú principal"<<endl;
        Sleep(800);
        cout<<"Seleccione la opción deseada: "<<endl;
        Sleep(800);
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
        Sleep(800);
        cout<<"1. Puerta"<<endl;
        Sleep(800);
        cout<<"2. Luces"<<endl;
        Sleep(800);
        cout<<"3. Piso"<<endl;
        Sleep(800);
        cout<<"4. Seguridad de la puerta"<<endl;
        Sleep(800);
        cout<<"5. Carga del vehículo"<<endl;
        Sleep(800);
        cout<<"6. Portón"<<endl;
        Sleep(800);
        cout<<"7. Regresar al menú principal"<<endl;
        Sleep(800);
        cout<<"Seleccione la opción deseada: "<<endl;
        Sleep(800);
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

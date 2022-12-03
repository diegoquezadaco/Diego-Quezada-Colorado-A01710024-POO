#ifndef HABITACION_H
#define HABITACION_H
#include <iostream>
#include <string>
using namespace std;
#include<windows.h>

class Habitacion {
    protected:
    string aire_acon;
    string ventanas;
    string persianas;
    string bocina_int;

    public:
        //Getters
        string getAireAcon() {
            return aire_acon;
        }
        string getVentana() {
            return ventanas;
        }
        string getPersianas() {
            return persianas;
        }
        string getBocinaInt() {
            return bocina_int;
        }

        //setters
        void setAireAcon(string ac) {
            aire_acon=ac;
        }
        void setVentana(string ven) {
            ventanas=ven;
        }
        void setPersianas(string per) {
            persianas=per;
        }
        void setBocinaInt(string boci) {
            bocina_int=boci;
        }
        //métodos de clase madre
        void encenderAC() {
            aire_acon="Encendido";
            cout<<"El aire acondicionado se encendió correctamente "<<endl;
        }
        void apagarAC() {
            aire_acon="Apagado";
            cout<<"El aire acondicionado se apagó correctamente "<<endl;
        }
        void abrirVentana() {
            ventanas="Abiertas";
            cout<<"Las ventanas se abrieron correctamente "<<endl;
        }
        void cerrarVentana() {
            ventanas="Cerradas";
            cout<<"Las ventanas se cerraron correctamente "<<endl;
        }
        void abrirPersiana() {
            persianas="Abiertas";
            cout<<"Las persianas se abrieron correctamente "<<endl;
        }
        void cerrarPersiana() {
            persianas="Cerradas";
            cout<<"Las persianas se cerraron correctamente "<<endl;
        }
        void encenderBocina() {
            bocina_int="Encendida";
            cout<<"La bocina se encendió correctamente "<<endl;
        }
        void apagarBocina() {
            bocina_int="Apagada";
            cout<<"La bocina se apagó correctamente "<<endl;
        }
        //Constructor por omisión
        Habitacion(){
            aire_acon="Apagado";
            ventanas="Cerradas";
            persianas="Cerradas";
            bocina_int="Apagada";
        }

}; 
#endif
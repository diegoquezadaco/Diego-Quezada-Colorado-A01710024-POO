#ifndef HABITACION_H
#define HABITACION_H
#include <iostream>
#include <string>
using namespace std;
#include <unistd.h>

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
        void encenderAC() { //encender aire acondicionado de la habitación
            aire_acon="Encendido";
            cout<<"El aire acondicionado se encendió correctamente "<<endl;
            sleep(5/3);
        }
        void apagarAC() { //apagar aire acondicionado de la habitación
            aire_acon="Apagado";
            cout<<"El aire acondicionado se apagó correctamente "<<endl;
            sleep(5/3);
        }
        void abrirVentana() { //abre las ventanas de la habitación
            ventanas="Abiertas";
            cout<<"Las ventanas se abrieron correctamente "<<endl;
            sleep(5/3);
        }
        void cerrarVentana() { //cierra las ventanas de la habitación
            ventanas="Cerradas";
            cout<<"Las ventanas se cerraron correctamente "<<endl;
            sleep(5/3);
        }
        void abrirPersiana() { //abre las persianas de la habitación
            persianas="Abiertas";
            cout<<"Las persianas se abrieron correctamente "<<endl;
            sleep(5/3);
        }
        void cerrarPersiana() { //cierra las persianas de la habitación
            persianas="Cerradas";
            cout<<"Las persianas se cerraron correctamente "<<endl;
            sleep(5/3);
        }
        void encenderBocina() { //enciende la bocina inteligente de la habitación
            bocina_int="Encendida";
            cout<<"La bocina se encendió correctamente "<<endl;
            sleep(5/3);
        }
        void apagarBocina() { //apaga la bocina inteligente de la habitación
            bocina_int="Apagada";
            cout<<"La bocina se apagó correctamente "<<endl;
            sleep(5/3);
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
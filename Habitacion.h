#ifndef HABITACION_H
#define HABITACION_H
#include <iostream>
#include <string>
using namespace std;

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
            aire_acon="encendido";
        }
        void apagarAC() {
            aire_acon="apagado";
        }
        void abrirVentana() {
            ventanas="abiertas";
        }
        void cerrarVentana() {
            ventanas="cerradas";
        }
        void abrirPersiana() {
            persianas="cerradas";
        }
        void cerrarPersiana() {
            persianas="cerradas";
        }
        void encenderBocina() {
            bocina_int="encendida";
        }
        void apagarBocina() {
            bocina_int="apagada";
        }
        //Constructor por omisión
        Habitacion(){
            aire_acon="apagado";
            ventanas="cerradas";
            persianas="cerradas";
            bocina_int="apagada";
        }

}; 
#endif
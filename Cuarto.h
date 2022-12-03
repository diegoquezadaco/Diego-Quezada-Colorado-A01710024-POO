#ifndef CUARTO_H
#define CUARTO_H
#include <iostream>
#include <string>
using namespace std;
#include"Habitacion.h"
#include "ParteCasa.h"
#include<windows.h>

class Cuarto : public Habitacion, public ParteCasa{
    private:
    string cama;
    string television;
    string color_luces; 

    public:
        //Getter
        string getCama() {
            return cama;
        }
        string getTelev() {
            return television;
        }
        string getColorLu() {
            return color_luces;
        }

        //setters
        void setCama(string cam) {
            cama=cam;
        }
        void setTelev(string tv) {
            television=tv;
        }
        void setColorLu(string colu) {
            color_luces=colu;
        }
        //métodos clase
        void tenderCama() {
            cout<<"Tendiendo cama "<<endl;
            Sleep(900);
            cama="Tendida";
            cout<<"Cama tendida con éxito"<<endl;
            Sleep(500);
        }
        void encenderTV() {
            television="Encendida";
            cout<<"televisión encendida con éxito"<<endl;
            Sleep(500);
            cout<<endl;
        }
        void apagarTV() {
            television="Apagada";
            cout<<"televisión apagada con éxito"<<endl;
            Sleep(500);
            cout<<endl;
        }
        //metodos virtuales
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes del cuarto:"<<endl<<endl;
            Sleep(700);
            cout<<"Cama: "<<cama<<endl;
            Sleep(700);
            cout<<"Aire acondicionado: "<<aire_acon<<endl;
            Sleep(700);
            cout<<"Televisión: "<<television<<endl;
            Sleep(700);
            cout<<"Ventanas: "<<ventanas<<endl;
            Sleep(700);
            cout<<"Persianas: "<<persianas<<endl;
            Sleep(700);
            cout<<"Bocina Inteligente: "<<bocina_int<<endl;
            Sleep(700);
            cout<<"Luces: "<<luces<<endl;
            Sleep(700);
            cout<<"Color de las Luces: "<<color_luces<<endl;
            Sleep(700);
            cout<<"Piso del cuarto: "<<piso<<endl;
            Sleep(700);
            cout<<endl;
        }
        //Constructor
        Cuarto () : Habitacion(), ParteCasa(){
            cama="Destendida";
            television="Apagada";
            color_luces="Blanco";
        }

}; 
#endif
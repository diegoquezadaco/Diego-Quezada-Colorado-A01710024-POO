#ifndef CUARTO_H
#define CUARTO_H
#include <iostream>
#include <string>
using namespace std;
#include"Habitacion.h"
#include "ParteCasa.h"

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
            _sleep(2000);
            cama="tendida";
            cout<<"Cama tendida con éxito"<<endl;
            _sleep(1000);            
        }
        void encenderTV() {
            television="encendida";
            cout<<"televisión encendida con éxito"<<endl;
            _sleep(1000);
        }
        void apagarTV() {
            television="apagada";
            cout<<"televisión apagada con éxito"<<endl;
            _sleep(1000);
        }
        //metodos virtuales
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes del cuarto:"<<nombre<<endl;
            _sleep(1000);
            cout<<"Cama: "<<cama<<endl;
            _sleep(1500);
            cout<<"Aire acondicionado: "<<aire_acon<<endl;
            _sleep(1500);
            cout<<"Televisión: "<<television<<endl;
            _sleep(1500);
            cout<<"Ventanas: "<<ventanas<<endl;
            _sleep(1500);
            cout<<"Persianas: "<<persianas<<endl;
            _sleep(1500);
            cout<<"Bocina Inteligente: "<<bocina_int<<endl;
            _sleep(1500);
            cout<<"Luces: "<<luces<<endl;
            _sleep(1500);
            cout<<"Color de las Luces: "<<color_luces<<endl;
            _sleep(1500);
            cout<<"Piso del cuarto: "<<piso<<endl;
            _sleep(1500);
        }
        //Constructor
        Cuarto () : Habitacion(), ParteCasa(){
            cama="destendida";
            television="apagada";
            color_luces="blanco";
        }

}; 
#endif
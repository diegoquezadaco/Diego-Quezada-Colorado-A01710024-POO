#ifndef CUARTO_H
#define CUARTO_H
#include <iostream>
#include <string>
using namespace std;
#include"Habitacion.h"
#include "ParteCasa.h"
#include <unistd.h>

class Cuarto : public Habitacion, public ParteCasa{ //clase cuarto que hereda de habitación y parte de casa
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
        void tenderCama() { //tender la cama del cuarto
            cout<<"Tendiendo cama "<<endl;
            sleep(5/3);
            cama="Tendida";
            cout<<"Cama tendida con éxito"<<endl;
            sleep(5/3);
        }
        void encenderTV() {  //encender la televisión del cuarto
            television="Encendida";
            cout<<"televisión encendida con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void apagarTV() { //método para apagar la televisión del cuarto
            television="Apagada";
            cout<<"televisión apagada con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        //metodos virtuales
        void imprimeDatos(){ //método para imprimir datos de la clase
            cout<<"Estado de los dispositivos inteligentes del cuarto:"<<endl<<endl;
            sleep(5/3);
            cout<<"Cama: "<<cama<<endl;
            sleep(5/3);
            cout<<"Aire acondicionado: "<<aire_acon<<endl;
            sleep(5/3);
            cout<<"Televisión: "<<television<<endl;
            sleep(5/3);
            cout<<"Ventanas: "<<ventanas<<endl;
            sleep(5/3);
            cout<<"Persianas: "<<persianas<<endl;
            sleep(5/3);
            cout<<"Bocina Inteligente: "<<bocina_int<<endl;
            sleep(5/3);
            cout<<"Luces: "<<luces<<endl;
            sleep(5/3);
            cout<<"Color de las Luces: "<<color_luces<<endl;
            sleep(5/3);
            cout<<"Piso del cuarto: "<<piso<<endl;
            sleep(5/3);
            cout<<endl;
        }
        //Constructor por omisión:
        Cuarto () : Habitacion(), ParteCasa(){ //Indicamos que el constructor por omisión de las clase madre se ejecutan en el constructor por omisión de la clase hija
            cama="Destendida";
            television="Apagada";
            color_luces="Blanco";
        }

}; 
#endif
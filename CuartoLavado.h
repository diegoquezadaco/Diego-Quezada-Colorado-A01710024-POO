#ifndef CUARTOLAVADO_H
#define CUARTOLAVADO_H
#include <iostream>
#include <string>
using namespace std;
#include "ParteCasa.h"
#include "LavadoraSecadora.h"
#include <unistd.h>

class CuartoLavado : public ParteCasa{ //clase hija de ParteCasa
    private:
    LavadoraSecadora lavaseca; //Indicamos composición con la clase LavadoraSecadora

    public:
        //Getters
        LavadoraSecadora getLavaseca() {
            return lavaseca;
        }
        //setter
        void setLavaseca(LavadoraSecadora ls) {
            lavaseca=ls;
        }
        //métodos clase
        void usarLavadoraSecadora(){
            lavaseca.usarLavadora();
        }        

        void imprimeDatos(){ //método para imprimir los datos de la clase
            cout<<"Estado de los dispositivos inteligentes del cuarto de lavado: "<<endl;
            sleep(5/3);
            cout<<"Ropa de la lavadora: "<<lavaseca.getRopaLava()<<endl;
            sleep(5/3);
            cout<<"Ropa de la secadora: "<<lavaseca.getRopaSeca()<<endl;
            sleep(5/3);
            cout<<"Luces: "<<luces<<endl;
            sleep(5/3);
            cout<<"Piso del cuarto de lavado: "<<piso<<endl;
            sleep(5/3);
            cout<<endl;

        }
        //Constructor por omisión
        CuartoLavado() : ParteCasa() { //Indicamos que el constructor por omisión de la clase madre se ejecuta en el constructor por omisión de la clase hija
            lavaseca.setRopaLava("Sucia");
            lavaseca.setRopaSeca("Mojada");
        }

}; 
#endif
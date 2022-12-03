#ifndef CUARTOLAVADO_H
#define CUARTOLAVADO_H
#include <iostream>
#include <string>
using namespace std;
#include "ParteCasa.h"
#include "LavadoraSecadora.h"
#include <unistd.h>

class CuartoLavado : public ParteCasa{
    private:
    LavadoraSecadora lavaseca;    

    public:
        //métodos clase
        void usarLavadoraSecadora(){
            lavaseca.usarLavadora();
        }        

        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes del cuarto de lavado: "<<endl;
            sleep(7/3);
            cout<<"Ropa de la lavadora: "<<lavaseca.getRopaLava()<<endl;
            sleep(7/3);
            cout<<"Ropa de la secadora: "<<lavaseca.getRopaSeca()<<endl;
            sleep(7/3);
            cout<<"Luces: "<<luces<<endl;
            sleep(7/3);
            cout<<"Piso del cuarto de lavado: "<<piso<<endl;
            sleep(7/3);
            cout<<endl;

        }
        //Constructor por omisión
        CuartoLavado() : ParteCasa() {
            lavaseca.setRopaLava("Sucia");
            lavaseca.setRopaSeca("Mojada");
        }

}; 
#endif
#ifndef CUARTOLAVADO_H
#define CUARTOLAVADO_H
#include <iostream>
#include <string>
using namespace std;
#include "ParteCasa.h"
#include "LavadoraSecadora.h"
#include<windows.h>

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
            Sleep(700);
            cout<<"Ropa de la lavadora: "<<lavaseca.getRopaLava()<<endl;
            Sleep(700);
            cout<<"Ropa de la secadora: "<<lavaseca.getRopaSeca()<<endl;
            Sleep(700);
            cout<<"Luces: "<<luces<<endl;
            Sleep(700);
            cout<<"Piso del cuarto de lavado: "<<piso<<endl;
            Sleep(700);
            cout<<endl;

        }
        //Constructor por omisión
        CuartoLavado() : ParteCasa() {
            lavaseca.setRopaLava("Sucia");
            lavaseca.setRopaSeca("Mojada");
        }

}; 
#endif
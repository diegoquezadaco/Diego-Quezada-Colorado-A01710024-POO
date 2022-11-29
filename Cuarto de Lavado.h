#ifndef CUARTOLAVADO_H
#define CUARTOLAVADO_H
#include <iostream>
#include <string>
using namespace std;
#include "ParteCasa.h"
#include "LavadoraSecadora.h"

class CuartoLavado : public ParteCasa{
    private:
    LavadoraSecadora lavaseca;    

    public:
        //métodos clase
        void usarLavadoraSecadora(){
            lavaseca.usarLavadora();
        }        

        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes del cuarto de lavado: "<<nombre<<endl;
            cout<<"Ropa de la lavadora: "<<lavaseca.getRopaLava()<<endl;
            cout<<"Ropa de la secadora: "<<lavaseca.getRopaSeca()<<endl;
            cout<<"Luces: "<<luces<<endl;
            cout<<"Piso del cuarto de lavado: "<<piso<<endl;
        }
        //Constructor por omisión
        CuartoLavado() : ParteCasa() {
            lavaseca.setRopaLava("sucia");
            lavaseca.setRopaSeca("mojada");
        }

}; 
#endif
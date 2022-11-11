#include <iostream>
#include <string>
using namespace std;

class Entrada {
    private:
    string puerta="abierta";
    string segu_puerta="desbloqueada";
    string carro="descargado";
    string porton="cerrado";
    string luces="apagadas";
    string piso_coch="sucio";
    

    public:
        //Getter
        string getPuerta() {
            return puerta;
        }
        string getSeguPuerta() {
            return segu_puerta;
        }
        string getCarro() {
            return carro;
        }
        string getPorton() {
            return porton;
        }
        string getLuces() {
            return luces;
        }
        string getPisoCoch() {
            return piso_coch;
        }
        //setter
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes de la entrada:"<<endl;
            cout<<"Puerta: "<<puerta<<endl;
            cout<<"Seguridad de la puerta: "<<segu_puerta<<endl;
            cout<<"Batería del vehículo: "<<carro<<endl;
            cout<<"Portón: "<<porton<<endl;
            cout<<"Luces: "<<luces<<endl;
            cout<<"Piso de la entrada: "<<piso_coch<<endl;
        }

}; 
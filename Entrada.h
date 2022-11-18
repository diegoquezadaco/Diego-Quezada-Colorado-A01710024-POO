#include <iostream>
#include <string>
using namespace std;

class Entrada {
    private:
    string puerta;
    string segu_puerta;
    string carro;
    string porton;
    string luces_ent;
    string piso_coch;
    

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
        string getLucesEnt() {
            return luces_ent;
        }
        string getPisoCoch() {
            return piso_coch;
        }
        //setter
        void setPuerta(string prt) {
            puerta=prt;
        }
        void setSeguPuerta(string segprt) {
            segu_puerta=segprt;
        }
        void setCarro(string car) {
            carro=car;
        }
        void setPorton(string por) {
            porton=por;
        }
        void setLucesEnt(string lu) {
            luces_ent=lu;
        }
        void setPisoCoch(string pie) {
            piso_coch=pie;
        }
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes de la entrada:"<<endl;
            cout<<"Puerta: "<<puerta<<endl;
            cout<<"Seguridad de la puerta: "<<segu_puerta<<endl;
            cout<<"Batería del vehículo: "<<carro<<endl;
            cout<<"Portón: "<<porton<<endl;
            cout<<"Luces: "<<luces_ent<<endl;
            cout<<"Piso de la entrada: "<<piso_coch<<endl;
        }
        //Constructor
        Entrada() {
            puerta="abierta";
            segu_puerta="desbloqueada";
            carro="descargado";
            porton="abierto";
            luces_ent="apagadas";
            piso_coch="sucio";
        }

}; 
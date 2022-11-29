#ifndef ENTRADA_H
#define ENTRADA_H
#include <iostream>
#include <string>
using namespace std;
#include "ParteCasa.h"

class Entrada : public ParteCasa {
    private:
    string puerta;
    string segu_puerta;
    string carro;
    string porton;

    public:
        //Getters
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

        //métodos clase
        void cargarCarro(){
            cout<<"Cargando carro "<<endl;
            _sleep(7000);
            cout<<"Carro cargado al 100% "<<endl;
            carro="Cargado";
            cout<<"Carro cargado con éxito "<<endl;
            _sleep(1000);
        }
        void cerrarPorton(){
            cout<<"Cerrando portón "<<endl;
            _sleep(1000);
            porton="Cerrado";
            cout<<"Portón cerrado con éxito"<<endl;
            _sleep(1000);
        }
        void abrirPorton(){
            cout<<"Cerrando portón "<<endl;
            _sleep(1000);
            porton="Cerrado";
            cout<<"Portón cerrado con éxito"<<endl;
            _sleep(1000);
        }
        void cerrarPuerta(){
            cout<<"Cerrando puerta "<<endl;
            _sleep(1000);
            puerta="Cerrada";
            cout<<"Puerta cerrado con éxito"<<endl;
            _sleep(1000);
        }
        void abrirPuerta(){
            cout<<"Abriendo puerta "<<endl;
            _sleep(1000);
            puerta="Abierta";
            cout<<"Puerta abierta con éxito"<<endl;
            _sleep(1000);
        }
        void bloquearPuerta(){
            segu_puerta="Bloqueada";
            cout<<"Puerta bloqueada con éxito"<<endl;
            _sleep(1000);
        }
        void desbloquearPuerta(){
            segu_puerta="Desloqueada";
            cout<<"Puerta desbloqueada con éxito"<<endl;
            _sleep(1000);
        }
        //métodos virtuales
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes de la entrada:"<<nombre<<endl;
            cout<<"Puerta: "<<puerta<<endl;
            cout<<"Seguridad de la puerta: "<<segu_puerta<<endl;
            cout<<"Batería del vehículo: "<<carro<<endl;
            cout<<"Portón: "<<porton<<endl;
            cout<<"Luces: "<<luces<<endl;
            cout<<"Piso de la entrada: "<<piso<<endl;
        }
        //Constructor por omisión
        Entrada() : ParteCasa() {
            puerta="abierta";
            segu_puerta="desbloqueada";
            carro="descargado";
            porton="abierto";
        }

}; 
#endif
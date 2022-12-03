#ifndef ENTRADA_H
#define ENTRADA_H
#include <iostream>
#include <string>
using namespace std;
#include "ParteCasa.h"
#include <unistd.h>

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
            sleep(20);
            cout<<"Carro cargado al 100% "<<endl;
            sleep(7/3);
            carro="Cargado";
            cout<<"Carro cargado con éxito "<<endl;
            sleep(7/3);
            cout<<endl;
        }
        void cerrarPorton(){
            cout<<"Cerrando portón "<<endl;
            sleep(10);
            porton="Cerrado";
            cout<<"Portón cerrado con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void abrirPorton(){
            cout<<"Abriendo portón "<<endl;
            sleep(10);
            porton="Abierto";
            sleep(5/3);
            cout<<"Portón abierto con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void cerrarPuerta(){
            cout<<"Cerrando puerta "<<endl;
            sleep(5);
            puerta="Cerrada";
            cout<<"Puerta cerrada con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void abrirPuerta(){
            cout<<"Abriendo puerta "<<endl;
            sleep(5);
            puerta="Abierta";
            cout<<"Puerta abierta con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void bloquearPuerta(){
            segu_puerta="Bloqueada";
            cout<<"Puerta bloqueada con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void desbloquearPuerta(){
            segu_puerta="Desloqueada";
            cout<<"Puerta desbloqueada con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        //métodos virtuales
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes de la entrada:"<<endl<<endl;
            sleep(7/3);
            cout<<"Puerta: "<<puerta<<endl;
            sleep(7/3);
            cout<<"Seguridad de la puerta: "<<segu_puerta<<endl;
            sleep(7/3);
            cout<<"Batería del vehículo: "<<carro<<endl;
            sleep(7/3);
            cout<<"Portón: "<<porton<<endl;
            sleep(7/3);
            cout<<"Luces: "<<luces<<endl;
            sleep(7/3);
            cout<<"Piso de la entrada: "<<piso<<endl;
            sleep(7/3);
            cout<<endl;
        }
        //Constructor por omisión
        Entrada() : ParteCasa() {
            puerta="Abierta";
            segu_puerta="Desbloqueada";
            carro="Descargado";
            porton="Abierto";
        }

}; 
#endif
#ifndef ENTRADA_H
#define ENTRADA_H
#include <iostream>
#include <string>
using namespace std;
#include "ParteCasa.h"
#include<windows.h>

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
            Sleep(6000);
            cout<<"Carro cargado al 100% "<<endl;
            Sleep(500);
            carro="Cargado";
            cout<<"Carro cargado con éxito "<<endl;
            Sleep(500);
            cout<<endl;
        }
        void cerrarPorton(){
            cout<<"Cerrando portón "<<endl;
            Sleep(1500);
            porton="Cerrado";
            cout<<"Portón cerrado con éxito"<<endl;
            Sleep(500);
            cout<<endl;
        }
        void abrirPorton(){
            cout<<"Abriendo portón "<<endl;
            Sleep(1500);
            porton="Abierto";
            Sleep(500);
            cout<<"Portón abierto con éxito"<<endl;
            Sleep(500);
            cout<<endl;
        }
        void cerrarPuerta(){
            cout<<"Cerrando puerta "<<endl;
            Sleep(400);
            puerta="Cerrada";
            cout<<"Puerta cerrada con éxito"<<endl;
            Sleep(500);
            cout<<endl;
        }
        void abrirPuerta(){
            cout<<"Abriendo puerta "<<endl;
            Sleep(400);
            puerta="Abierta";
            cout<<"Puerta abierta con éxito"<<endl;
            Sleep(500);
            cout<<endl;
        }
        void bloquearPuerta(){
            segu_puerta="Bloqueada";
            cout<<"Puerta bloqueada con éxito"<<endl;
            Sleep(500);
            cout<<endl;
        }
        void desbloquearPuerta(){
            segu_puerta="Desloqueada";
            cout<<"Puerta desbloqueada con éxito"<<endl;
            Sleep(500);
            cout<<endl;
        }
        //métodos virtuales
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes de la entrada:"<<endl<<endl;
            Sleep(700);
            cout<<"Puerta: "<<puerta<<endl;
            Sleep(700);
            cout<<"Seguridad de la puerta: "<<segu_puerta<<endl;
            Sleep(700);
            cout<<"Batería del vehículo: "<<carro<<endl;
            Sleep(700);
            cout<<"Portón: "<<porton<<endl;
            Sleep(700);
            cout<<"Luces: "<<luces<<endl;
            Sleep(700);
            cout<<"Piso de la entrada: "<<piso<<endl;
            Sleep(700);
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
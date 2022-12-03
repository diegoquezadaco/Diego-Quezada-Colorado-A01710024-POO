#ifndef ENTRADA_H
#define ENTRADA_H
#include <iostream>
#include <string>
using namespace std;
#include "ParteCasa.h"
#include <unistd.h>

class Entrada : public ParteCasa { //clase hija de ParteCasa
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
        void cargarCarro(){ //carga la batería del carro
            cout<<"Cargando carro "<<endl;
            sleep(10/3);
            cout<<"Carro cargado al 100% "<<endl;
            sleep(5/3);
            carro="Cargado";
            cout<<"Carro cargado con éxito "<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void cerrarPorton(){ //cierra el portón de la casa
            cout<<"Cerrando portón "<<endl;
            sleep(10/3);
            porton="Cerrado";
            cout<<"Portón cerrado con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void abrirPorton(){ //abre el portón de la casa
            cout<<"Abriendo portón "<<endl;
            sleep(10/3);
            porton="Abierto";
            sleep(5/3);
            cout<<"Portón abierto con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void cerrarPuerta(){ //cierra la puerta de la casa
            cout<<"Cerrando puerta "<<endl;
            sleep(5/2);
            puerta="Cerrada";
            cout<<"Puerta cerrada con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void abrirPuerta(){ //abre la puerta de la casa
            cout<<"Abriendo puerta "<<endl;
            sleep(5/2);
            puerta="Abierta";
            cout<<"Puerta abierta con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void bloquearPuerta(){ //bloquea la puerta de la casa
            segu_puerta="Bloqueada";
            cout<<"Puerta bloqueada con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void desbloquearPuerta(){ //desbloquea la puerta de la casa
            segu_puerta="Desloqueada";
            cout<<"Puerta desbloqueada con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        //métodos virtuales
        void imprimeDatos(){ //imprime los datos de la clase
            cout<<"Estado de los dispositivos inteligentes de la entrada:"<<endl<<endl;
            sleep(5/3);
            cout<<"Puerta: "<<puerta<<endl;
            sleep(5/3);
            cout<<"Seguridad de la puerta: "<<segu_puerta<<endl;
            sleep(5/3);
            cout<<"Batería del vehículo: "<<carro<<endl;
            sleep(5/3);
            cout<<"Portón: "<<porton<<endl;
            sleep(5/3);
            cout<<"Luces: "<<luces<<endl;
            sleep(5/3);
            cout<<"Piso de la entrada: "<<piso<<endl;
            sleep(5/3);
            cout<<endl;
        }
        //Constructor por omisión
        Entrada() : ParteCasa() {  //se llama al constructor por omisión de la clase padre
            puerta="Abierta";
            segu_puerta="Desbloqueada";
            carro="Descargado";
            porton="Abierto";
        }

}; 
#endif
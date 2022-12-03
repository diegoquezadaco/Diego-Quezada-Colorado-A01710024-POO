#ifndef COCINA_H
#define COCINA_H
#include <iostream>
#include <string>
using namespace std;
#include"Habitacion.h"
#include "ParteCasa.h"
#include <unistd.h>

class Cocina: public Habitacion, public ParteCasa {
    private:
    string lavavajillas;
    string robot_cocina;
    string estufa;
    string cafetera;
    string horno;

    public:
        //Getters
        string getLavavajillas() {
            return lavavajillas;
        }
        string getRobotCocina() {
            return robot_cocina;
        }
        string getEstufa() {
            return estufa;
        }
        string getCafetera() {
            return cafetera;
        }
        string getHorno() {
            return horno;
        }

        //setters
        void setLavavajillas(string lav) {
            lavavajillas=lav;
        }
        void setRobotCocina(string rc) {
            robot_cocina=rc;
        }
        void setEstufa(string es) {
            estufa=es;
        }
        void setCafetera(string caf) {
            cafetera=caf;
        }
        void setHorno(string hor) {
            horno=hor;
        }
        //métodos clase
        void activarLavavajillas(){
            cout<<"Encendiendo lavavajillas "<<endl;
            sleep(5/3);            
            cout<<"Lavando tratos "<<endl;
            sleep(40/3);
            lavavajillas="Trastos limpios";
            cout<<"Trastos lavados con éxito"<<endl;
            sleep(5/3);
            cout<<endl;             
        }
        void cocinaRobotCoc(){
            cout<<"Encendiendo Robot de cocina "<<endl;
            sleep(5/3);            
            cout<<"Cocinando comida "<<endl;
            sleep(40/3);
            robot_cocina="Comida lista";
            cout<<"Comida preparada con éxito"<<endl;
            sleep(5/3);
            cout<<endl;             
        }
        void encenderEstufa(){
            cout<<"Encendiendo estufa "<<endl;
            sleep(5/3);
            estufa="Encendida";
            cout<<"Estufa encendida con éxito"<<endl;
            sleep(5/3);
            cout<<endl;            
        }
        void apagarEstufa(){
            estufa="Apagada";
            cout<<"Estufa apagada con éxito"<<endl;
            sleep(5/3);
            cout<<endl;            
        }
        void encenderCafetera(){
            cout<<"Encendiendo Cafetera "<<endl;
            sleep(5/3);            
            cout<<"Preparando café "<<endl;
            sleep(20/3);
            cafetera="Café listo";
            cout<<"Café preparado con éxito"<<endl;
            sleep(5/3);
            cout<<endl;             
        }
        void encenderHorno(){
            cout<<"Encendiendo estufa "<<endl;
            sleep(5/3);
            horno="Encendido";
            cout<<"Horno encendida con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void apagarHorno(){
            cout<<"Apagando horno"<<endl;
            sleep(5/3);            
            horno="Apagado";
            cout<<"Horno apagado con éxito"<<endl;
            sleep(5/3);
            cout<<endl;
        }

        //métodos virtuales
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes de la cocina:"<<endl<<endl;;
            sleep(7/3);
            cout<<"Lavavajillas: "<<lavavajillas<<endl;
            sleep(7/3);
            cout<<"Robot de cocina: "<<robot_cocina<<endl;
            sleep(7/3);            
            cout<<"Estufa: "<<estufa<<endl;
            sleep(7/3);            
            cout<<"Cafetera: "<<cafetera<<endl;
            sleep(7/3);            
            cout<<"Horno: "<<horno<<endl;
            sleep(7/3);            
            cout<<"Aire acondicionado: "<<aire_acon<<endl;
            sleep(7/3);            
            cout<<"Ventanas: "<<ventanas<<endl;
            sleep(7/3);
            cout<<"Persianas: "<<persianas<<endl;
            sleep(7/3);
            cout<<"Bocina Inteligente: "<<bocina_int<<endl;
            sleep(7/3);
            cout<<"Luces: "<<luces<<endl;
            sleep(7/3);
            cout<<"Piso de la cocina: "<<piso<<endl;
            sleep(7/3);
            cout<<endl;
        }
        //Constructor por omisión:
        Cocina() : Habitacion(), ParteCasa(){
            lavavajillas="Trastos sucios";
            robot_cocina="No hay comida cocinada";
            estufa="Apagada";
            cafetera="Apagada";
            horno="Apagado";
            
        }

}; 
#endif
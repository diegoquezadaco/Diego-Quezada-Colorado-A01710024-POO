#ifndef COCINA_H
#define COCINA_H
#include <iostream>
#include <string>
using namespace std;
#include"Habitacion.h"
#include "ParteCasa.h"

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
            _sleep(500);
            cout<<"Lavando tratos "<<endl;
            _sleep(5000);
            lavavajillas="Trastos limpios";
            cout<<"Trastos lavados con éxito"<<endl;
            _sleep(1000); 
        }
        void cocinaRobotCoc(){
            cout<<"Encendiendo Robot de cocina "<<endl;
            _sleep(500);
            cout<<"Cocinando comida "<<endl;
            _sleep(5500);
            robot_cocina="Comida lista";
            cout<<"Comida preparada con éxito"<<endl;
            _sleep(1000); 
        }
        void encenderEstufa(){
            cout<<"Encendiendo estufa "<<endl;
            _sleep(1000);
            estufa="Encendida";
            cout<<"Estufa encendida con éxito"<<endl;
            _sleep(1000);
        }
        void apagarEstufa(){
            estufa="Apagada";
            cout<<"Estufa apagada con éxito"<<endl;
            _sleep(1000);
        }
        void encenderCafetera(){
            cout<<"Encendiendo Cafetera "<<endl;
            _sleep(500);
            cout<<"Preparando café "<<endl;
            _sleep(2500);
            cafetera="Café listo";
            cout<<"Café preparado con éxito"<<endl;
            _sleep(1000); 
        }
        void encenderHorno(){
            cout<<"Encendiendo estufa "<<endl;
            _sleep(1000);
            horno="Encendido";
            cout<<"Horno encendida con éxito"<<endl;
            _sleep(1000);
        }
        void apagarHorno(){
            cout<<"Apagando horno"<<endl;
            _sleep(800);
            horno="Apagado";
            cout<<"Horno apagado con éxito"<<endl;
            _sleep(1000);
        }

        //métodos virtuales
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes de la cocina:"<<nombre<<endl;
            _sleep(1000);
            cout<<"Lavavajillas: "<<lavavajillas<<endl;
            _sleep(1500);
            cout<<"Robot de cocina: "<<robot_cocina<<endl;
            _sleep(1500);
            cout<<"Estufa: "<<estufa<<endl;
            _sleep(1500);
            cout<<"Cafetera: "<<cafetera<<endl;
            _sleep(1500);
            cout<<"Horno: "<<horno<<endl;
            _sleep(1500);
            cout<<"Aire acondicionado: "<<aire_acon<<endl;
            _sleep(1500);
            cout<<"Ventanas: "<<ventanas<<endl;
            _sleep(1500);
            cout<<"Persianas: "<<persianas<<endl;
            _sleep(1500);
            cout<<"Bocina Inteligente: "<<bocina_int<<endl;
            _sleep(1500);
            cout<<"Luces: "<<luces<<endl;
            _sleep(1500);
            cout<<"Piso de la cocina: "<<piso<<endl;
            _sleep(1500);
        }
        //Constructor por omisión:
        Cocina() : Habitacion(), ParteCasa(){
            lavavajillas="trastos sucios";
            robot_cocina="no hay comida cocinada";
            estufa="apagada";
            cafetera="apagada";
            horno="apagado";
            
        }

}; 
#endif
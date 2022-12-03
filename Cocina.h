#ifndef COCINA_H
#define COCINA_H
#include <iostream>
#include <string>
using namespace std;
#include"Habitacion.h"
#include "ParteCasa.h"
#include<windows.h>

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
            Sleep(500);            
            cout<<"Lavando tratos "<<endl;
            Sleep(4000);
            lavavajillas="Trastos limpios";
            cout<<"Trastos lavados con éxito"<<endl;
            Sleep(500);
            cout<<endl;             
        }
        void cocinaRobotCoc(){
            cout<<"Encendiendo Robot de cocina "<<endl;
            Sleep(500);            
            cout<<"Cocinando comida "<<endl;
            Sleep(4000);
            robot_cocina="Comida lista";
            cout<<"Comida preparada con éxito"<<endl;
            Sleep(500);
            cout<<endl;             
        }
        void encenderEstufa(){
            cout<<"Encendiendo estufa "<<endl;
            Sleep(500);
            estufa="Encendida";
            cout<<"Estufa encendida con éxito"<<endl;
            Sleep(500);
            cout<<endl;            
        }
        void apagarEstufa(){
            estufa="Apagada";
            cout<<"Estufa apagada con éxito"<<endl;
            Sleep(500);
            cout<<endl;            
        }
        void encenderCafetera(){
            cout<<"Encendiendo Cafetera "<<endl;
            Sleep(500);            
            cout<<"Preparando café "<<endl;
            Sleep(2000);
            cafetera="Café listo";
            cout<<"Café preparado con éxito"<<endl;
            Sleep(500);
            cout<<endl;             
        }
        void encenderHorno(){
            cout<<"Encendiendo estufa "<<endl;
            Sleep(500);
            horno="Encendido";
            cout<<"Horno encendida con éxito"<<endl;
            Sleep(500);
            cout<<endl;
        }
        void apagarHorno(){
            cout<<"Apagando horno"<<endl;
            Sleep(500);            
            horno="Apagado";
            cout<<"Horno apagado con éxito"<<endl;
            Sleep(500);
            cout<<endl;
        }

        //métodos virtuales
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes de la cocina:"<<endl<<endl;;
            Sleep(700);
            cout<<"Lavavajillas: "<<lavavajillas<<endl;
            Sleep(700);
            cout<<"Robot de cocina: "<<robot_cocina<<endl;
            Sleep(700);            
            cout<<"Estufa: "<<estufa<<endl;
            Sleep(700);            
            cout<<"Cafetera: "<<cafetera<<endl;
            Sleep(700);            
            cout<<"Horno: "<<horno<<endl;
            Sleep(700);            
            cout<<"Aire acondicionado: "<<aire_acon<<endl;
            Sleep(700);            
            cout<<"Ventanas: "<<ventanas<<endl;
            Sleep(700);
            cout<<"Persianas: "<<persianas<<endl;
            Sleep(700);
            cout<<"Bocina Inteligente: "<<bocina_int<<endl;
            Sleep(700);
            cout<<"Luces: "<<luces<<endl;
            Sleep(700);
            cout<<"Piso de la cocina: "<<piso<<endl;
            Sleep(700);
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
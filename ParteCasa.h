#ifndef PARTECASA_H
#define PARTECASA_H
#include <iostream>
#include <string>
using namespace std;
#include<windows.h>

class ParteCasa {
    protected:
    string luces;
    string piso;

    public:
        //Getters
        string getLuces() {
            return luces;
        }
        string getPiso() {
            return piso;
        }
        //setters
        void setLuces(string lu) {
            luces=lu;
        }
        void setPiso(string pi) {
            piso=pi;
        }
        
        //métodos de clase madre
        void encenderLuces() {
            luces="Encendidas";
            cout<<"Las luces se prendieron correctamente "<<endl;
            Sleep(700);
            cout<<endl;
        }
        void apagarLuces() {
            luces="Apagadas";
            cout<<"Las luces se apagaron correctamente "<<endl;
            Sleep(700);
            cout<<endl;
        }
        void limpiaPiso() {
            cout<<"Limpiando el piso "<<endl;
            Sleep(1500);
            piso="Limpio";
            cout<<"El piso se limpió correctamente "<<endl;
            Sleep(700);
            cout<<endl;
        }
    
        //Método virtual
        virtual void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes: "<<endl;
        }
        //Constructor
        ParteCasa(){
            luces="Apagadas";
            piso="Sucio";
        }

}; 

#endif
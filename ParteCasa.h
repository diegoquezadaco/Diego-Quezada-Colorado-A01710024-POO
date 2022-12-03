#ifndef PARTECASA_H
#define PARTECASA_H
#include <iostream>
#include <string>
using namespace std;
#include<unistd.h>

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
        void encenderLuces() { //método para encender luces de la parte de la casa
            luces="Encendidas";
            cout<<"Las luces se prendieron correctamente "<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void apagarLuces() { //método para apagar luces de la parte de la casa
            luces="Apagadas";
            cout<<"Las luces se apagaron correctamente "<<endl;
            sleep(5/3);
            cout<<endl;
        }
        void limpiaPiso() { //método para limpiar el piso de la parte de la casa
            cout<<"Limpiando el piso "<<endl;
            sleep(15/3);
            piso="Limpio";
            cout<<"El piso se limpió correctamente "<<endl;
            sleep(5/3);
            cout<<endl;
        }
    
        //Método virtual
        virtual void imprimeDatos(){ //método virtual, que cada clase hija debe definir para imprimir los datos de la parte de la casa
            cout<<"Estado de los dispositivos inteligentes: "<<endl;
        }
        //Constructor por omisión
        ParteCasa(){
            luces="Apagadas";
            piso="Sucio";
        }

}; 

#endif
#ifndef PARTECASA_H
#define PARTECASA_H
#include <iostream>
#include <string>
using namespace std;

class ParteCasa {
    protected:
    string nombre;
    string luces;
    string piso;
    

    public:
        //Getters
        string getNombre() {
            return nombre;
        }
        string getLuces() {
            return luces;
        }
        string getPiso() {
            return piso;
        }
        //setters
        void setNombre(string no) {
            nombre=no;
        }
        void setLuces(string lu) {
            luces=lu;
        }
        void setPiso(string pi) {
            piso=pi;
        }
        
        //métodos de clase madre
        void encenderLuces() {
            luces="encendidas";
            cout<<"Las luces se prendieron correctamente "<<endl;
            _sleep(2000);
        }
        void apagarLuces() {
            luces="apagadas";
            cout<<"Las luces se apagaron correctamente "<<endl;
            _sleep(2000);
        }
        void limpiaPiso() {
            cout<<"Limpiando el piso "<<endl;
            _sleep(2000);
            piso="limpio";
            cout<<"El piso se limpió correctamente "<<endl;
            _sleep(1000);
        }
    
        //Método virtual
        virtual void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes: "<<endl;
            _sleep(5000);
        }
        //Constructor por omisión
        ParteCasa(){
            nombre="";
            luces="apagadas";
            piso="sucio";
        }

}; 
#endif
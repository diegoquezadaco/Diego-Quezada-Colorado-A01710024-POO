#include <iostream>
#include <string>
using namespace std;

class Cocina {
    private:
    string lavavajillas="trastos sucios";
    string robot_cocina="no hay comida cocinada";
    string aire_acon="apagado";
    string estufa="apagada";
    string ventanas="cerradas";
    string persianas="cerradas";
    string bocina_int="apagada";
    string luces="apagadas";
    string cafetera="apagada";
    string horno="apagado";
    string piso_coc="sucio";

    public:
        //Getter
        string getLavavajillas() {
            return lavavajillas;
        }
        string getRobotCocina() {
            return robot_cocina;
        }
        string getAireAcon() {
            return aire_acon;
        }
        string getEstufa() {
            return estufa;
        }
        string getVentana() {
            return ventanas;
        }
        string getPersianas() {
            return persianas;
        }
        string getBocinaInt() {
            return bocina_int;
        }
        string getLuces() {
            return luces;
        }
        string getCafetera() {
            return cafetera;
        }
        string getHorno() {
            return horno;
        }
        string getPisoCoc() {
            return piso_coc;
        }

        //setter
        void setLavavajillas(string lav) {
            lavavajillas=lav;
        }
        void setRobotCocina(string rc) {
            robot_cocina=rc;
        }
        void setAireAcon(string ac) {
            aire_acon=ac;
        }
        void setEstufa(string es) {
            estufa=es;
        }
        void setVentana(string ven) {
            ventanas=ven;
        }
        void setPersianas(string per) {
            persianas=per;
        }
        void setBocinaInt(string boci) {
            bocina_int=boci;
        }
        void setLuces(string lu) {
            luces=lu;
        }
        void setCafetera(string caf) {
            cafetera=caf;
        }
        void setHorno(string hor) {
            horno=hor;
        }
        void setPisoCoc(string picoc) {
            piso_coc=picoc;
        }
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes de la cocina:"<<endl;
            cout<<"Lavavajillas: "<<lavavajillas<<endl;
            cout<<"Robot de cocina: "<<robot_cocina<<endl;
            cout<<"Aire acondicionado: "<<aire_acon<<endl;
            cout<<"Estufa: "<<estufa<<endl;
            cout<<"Ventanas: "<<ventanas<<endl;
            cout<<"Persianas: "<<persianas<<endl;
            cout<<"Bocina Inteligente: "<<bocina_int<<endl;
            cout<<"Luces: "<<luces<<endl;
            cout<<"Cafetera: "<<cafetera<<endl;
            cout<<"Horno: "<<lavavajillas<<endl;
            cout<<"Piso Cocina: "<<piso_coc<<endl;
        }

}; 
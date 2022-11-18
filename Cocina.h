#include <iostream>
#include <string>
using namespace std;

class Cocina {
    private:
    string lavavajillas;
    string robot_cocina;
    string aire_acon;
    string estufa;
    string ventanas;
    string persianas;
    string bocina_int;
    string luces_coc;
    string cafetera;
    string horno;
    string piso_coc;

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
        string getLucesCoc() {
            return luces_coc;
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
        void setLucesCoc(string lu) {
            luces_coc=lu;
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
            _sleep(2000);
            cout<<"Lavavajillas: "<<lavavajillas<<endl;
            cout<<"Robot de cocina: "<<robot_cocina<<endl;
            cout<<"Aire acondicionado: "<<aire_acon<<endl;
            cout<<"Estufa: "<<estufa<<endl;
            cout<<"Ventanas: "<<ventanas<<endl;
            cout<<"Persianas: "<<persianas<<endl;
            cout<<"Bocina Inteligente: "<<bocina_int<<endl;
            cout<<"Luces: "<<luces_coc<<endl;
            cout<<"Cafetera: "<<cafetera<<endl;
            cout<<"Horno: "<<lavavajillas<<endl;
            cout<<"Piso Cocina: "<<piso_coc<<endl;
        }
        //Constructor por omisión:
        Cocina(){
            lavavajillas="trastos sucios";
            robot_cocina="no hay comida cocinada";
            aire_acon="apagado";
            estufa="apagada";
            ventanas="cerradas";
            persianas="cerradas";
            bocina_int="apagada";
            luces_coc="apagadas";
            cafetera="apagada";
            horno="apagado";
            piso_coc="sucio";
        }

}; 
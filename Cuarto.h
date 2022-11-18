#include <iostream>
#include <string>
using namespace std;

class Cuarto {
    private:
    string cama;
    string aire_acon;
    string television;
    string ventanas;
    string persianas;
    string bocina_int;
    string luces_cua;
    string color_luces;
    string piso_cua;
    

    public:
        //Getter
        string getCama() {
            return cama;
        }
        string getAireAcon() {
            return aire_acon;
        }
        string getTelev() {
            return television;
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
        string getLucesCua() {
            return luces_cua;
        }
        string getColorLu() {
            return color_luces;
        }
        string getPisoCua() {
            return piso_cua;
        }

        //setter
        void setCama(string cam) {
            cama=cam;
        }
        void setAireAcon(string ac) {
            aire_acon=ac;
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
        void setLucesCua(string lu) {
            luces_cua=lu;
        }
        void setPisoCua(string picua) {
            piso_cua=picua;
        }
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes del cuarto:"<<endl;
            cout<<"Cama: "<<cama<<endl;
            cout<<"Aire acondicionado: "<<aire_acon<<endl;
            cout<<"Televisión: "<<television<<endl;
            cout<<"Ventanas: "<<ventanas<<endl;
            cout<<"Persianas: "<<persianas<<endl;
            cout<<"Bocina Inteligente: "<<bocina_int<<endl;
            cout<<"Luces: "<<luces_cua<<endl;
            cout<<"Color de las Luces: "<<color_luces<<endl;
            cout<<"Piso de la habitación: "<<piso_cua<<endl;
        }
        //Constructor
        Cuarto () {
            cama="destendida";
            aire_acon="apagado";
            television="apagada";
            ventanas="cerradas";
            persianas="cerradas";
            bocina_int="apagada";
            luces_cua="apagadas";
            color_luces="blanco";
            piso_cua="sucio";
        }

}; 
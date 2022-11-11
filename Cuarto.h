#include <iostream>
#include <string>
using namespace std;

class Cuarto {
    private:
    string cama="destendida";
    string aire_acon="apagado";
    string television="apagada";
    string ventanas="cerradas";
    string persianas="cerradas";
    string bocina_int="apagada";
    string luces="apagadas";
    string color_luces="blanco";
    string piso_cua="sucio";
    

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
        string getLuces() {
            return luces;
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
        void setLuces(string lu) {
            luces=lu;
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
            cout<<"Luces: "<<luces<<endl;
            cout<<"Color de las Luces: "<<color_luces<<endl;
            cout<<"Piso de la habitación: "<<piso_cua<<endl;
        }

}; 
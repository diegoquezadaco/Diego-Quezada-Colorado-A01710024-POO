#include <iostream>
#include <string>
using namespace std;

class CuartoLavado {
    private:
    string car_lavadora;
    string lavadora;
    string ropa_lavadora;
    string car_secadora;
    string secadora;
    string ropa_secadora;    
    string luces_cl;
    string piso_cl;
    

    public:
        //Getter
        string getCarLava() {
            return car_lavadora;
        }
        string getLava() {
            return lavadora;
        }
        string getRopaLava() {
            return ropa_lavadora;
        }
        string getCarSeca() {
            return car_secadora;
        }
        string getSeca() {
            return secadora;
        }
        string getRopaSeca() {
            return ropa_secadora;
        }
        string getLucesCl() {
            return luces_cl;
        }
        string getPisoCdL() {
            return piso_cl;
        }
        //setter
        void setCarLava(string carlav) {
            car_lavadora=carlav;
        }
        void setLava(string lava) {
            lavadora=lava;
        }
        void setRopaLava(string ropla) {
            ropa_lavadora=ropla;
        }
        void setCarSeca(string carsec) {
            car_secadora=carsec;
        }
        void setSeca(string seca) {
            secadora=seca;
        }
        void setRopaSeca(string ropse) {
            ropa_secadora=ropse;
        }
        void setLucesCl(string lu) {
            luces_cl=lu;
        }
        void setPisoCdL(string picdl) {
            piso_cl=picdl;
        }
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes del cuarto de lavado:"<<endl;
            cout<<"Carga Lavadora: "<<car_lavadora<<endl;
            cout<<"Lavadora: "<<lavadora<<endl;
            cout<<"Ropa de la lavadora: "<<ropa_lavadora<<endl;
            cout<<"Carga Secadora: "<<car_secadora<<endl;
            cout<<"Secadora: "<<secadora<<endl;
            cout<<"Ropa de la secadora: "<<ropa_secadora<<endl;
            cout<<"Luces: "<<luces_cl<<endl;
            cout<<"Piso del cuarto de lavado: "<<piso_cl<<endl;
        }
        //Constructor
        CuartoLavado() {
            car_lavadora="descargada";
            lavadora="apagada";
            ropa_lavadora="sucia";
            car_secadora="descargada";
            secadora="apagada";
            ropa_secadora="mojada";
            luces_cl="apagadas";
            piso_cl="sucio";
        }

}; 
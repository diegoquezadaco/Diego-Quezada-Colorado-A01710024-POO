#include <iostream>
#include <string>
using namespace std;

class CuartoLavado {
    private:
    string car_lavadora="descargada";
    string lavadora="apagada";
    string ropa_lavadora="sucia";
    string car_secadora="descargada";
    string secadora="apagada";
    string ropa_secadora="mojada";    
    string bocina_int="apagada";
    string luces="apagadas";
    string piso_cl="sucio";
    

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
        string getBocinaInt() {
            return bocina_int;
        }
        string getLuces() {
            return luces;
        }
        string getPisoCdL() {
            return piso_cl;
        }
        //setter
        void imprimeDatos(){
            cout<<"Estado de los dispositivos inteligentes del cuarto de lavado:"<<endl;
            cout<<"Carga Lavadora: "<<car_lavadora<<endl;
            cout<<"Lavadora: "<<lavadora<<endl;
            cout<<"Ropa de la lavadora: "<<ropa_lavadora<<endl;
            cout<<"Carga Secadora: "<<car_secadora<<endl;
            cout<<"Secadora: "<<secadora<<endl;
            cout<<"Ropa de la secadora: "<<ropa_secadora<<endl;
            cout<<"Bocina Inteligente: "<<bocina_int<<endl;
            cout<<"Luces: "<<luces<<endl;
            cout<<"Piso del cuarto de lavado: "<<piso_cl<<endl;
        }

}; 
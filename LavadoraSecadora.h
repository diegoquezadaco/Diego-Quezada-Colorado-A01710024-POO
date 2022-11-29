#ifndef LAVADORASECADORA_H
#define LAVADORASECADORA_H
using namespace std;
#include <iostream>
#include <string>



class LavadoraSecadora {
    private:
    float kg_carga=0;
    string ropa_lavadora;
    string ropa_secadora;
    string usar_secadora;

    public:
    //Getter
        float getKgCarga(){
            return kg_carga;
        }
        string getRopaLava() {
            return ropa_lavadora;
        }
        string getRopaSeca() {
            return ropa_secadora;
        }
        //setter
        void setCarga(float carg) {
            kg_carga=carg;
        }
        void setRopaLava(string ropla) {
            ropa_lavadora=ropla;
        }
        void setRopaSeca(string ropse) {
            ropa_secadora=ropse;
        }

        //métodos clase
        void usarLavadora(){
            cout<<"Encendiendo lavadora "<<endl;
            _sleep(1000);
            cout<<"Introduzca la cantidad de ropa a lavar en kg, recuerde que no puede ser superior a 15 kg :"<<endl;
            cin>>kg_carga;
            if ((kg_carga<=0)||(kg_carga>15)){
                cout<<"Peso no válido, intentelo de nuevo por favor "<<endl;
                _sleep(2000);
            }
            else {
                cout<<"Comenzando ciclo de lavado "<<endl;
                _sleep(500);
                cout<<"Remojando"<<endl;
                _sleep(1000);
                cout<<"Lavando"<<endl;
                _sleep(3000);
                cout<<"Exprimiendo"<<endl;
                _sleep(2000);
                cout<<"Ciclo de lavado terminado"<<endl;
                _sleep(200);
                ropa_lavadora="Limpia";
                cout<<"Ropa lavada exitosamente"<<endl;
                _sleep(1000);
                cout<<"¿Desea meter esta ropa a la secadora? (si/no) "<<endl;
                cin>>usar_secadora;
                if (usar_secadora=="si") {
                    cout<<"Encendiendo secadora"<<endl;
                    _sleep(500);
                    cout<<"Secando"<<endl;
                    _sleep(4000);
                    ropa_secadora="Seca";
                    cout<<"Ropa secada exitosamente"<<endl;
                    _sleep(300);
                }
                else{
                    cout<<"Esta bien, su ropa se queda mojada"<<endl;
                }
            }
            }

};
#endif
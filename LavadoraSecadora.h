#ifndef LAVADORASECADORA_H
#define LAVADORASECADORA_H
using namespace std;
#include <iostream>
#include <string>
#include<windows.h>


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
            Sleep(500);
            cout<<"Introduzca la cantidad de ropa a lavar en kg, recuerde que no puede ser superior a 15 kg :"<<endl;
            cin>>kg_carga;
            cout<<endl;
            if ((kg_carga<=0)||(kg_carga>15)){
                cout<<"Peso no válido, intentelo de nuevo por favor "<<endl;
                cout<<endl;
            }
            else {
                cout<<"Comenzando ciclo de lavado "<<endl;
                Sleep(500);
                cout<<"Remojando"<<endl;
                Sleep(2500);
                cout<<"Lavando"<<endl;
                Sleep(3000);
                cout<<"Exprimiendo"<<endl;
                Sleep(2000);
                cout<<"Ciclo de lavado terminado"<<endl;
                Sleep(500);
                ropa_lavadora="Limpia";
                cout<<"Ropa lavada exitosamente"<<endl;
                Sleep(550);
                cout<<endl;
                cout<<"¿Desea meter esta ropa a la secadora? (si/no) "<<endl;
                cin>>usar_secadora;
                if (usar_secadora=="si") {
                    cout<<"Encendiendo secadora"<<endl;
                    Sleep(500);
                    cout<<"Secando"<<endl;
                    Sleep(2000);
                    ropa_secadora="Seca";
                    cout<<"Ropa secada exitosamente"<<endl;
                    Sleep(550);
                    cout<<endl;
                    }
                else{
                    cout<<"Esta bien, su ropa se queda mojada"<<endl;
                    Sleep(450);
                    cout<<endl;
    
                }
            }
            }

};
#endif
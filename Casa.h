#ifndef CASA_H
#define CASA_H
#include <iostream>
#include <string>
using namespace std;
#include "ParteCasa.h"
#include "Habitacion.h"
#include "ParteCasa.h"
#include "Cocina.h"
#include "Cuarto.h"
#include "Cuarto de Lavado.h"
#include "Entrada.h"
#include <vector>

class Casa{
    private:
    vector<ParteCasa*> partes_casa;

    public:
    void agregarParteCasa(ParteCasa* part) {
        partes_casa.push_back(part);
    }
    vector<ParteCasa*> getPartesCasa() {
            return partes_casa;
    }
    Casa(){
    }

};

#endif
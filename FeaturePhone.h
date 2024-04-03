//
// Created by frank on 31/03/2024.
//
#ifndef PROYECTO_FINAL_FEATUREPHONE_H
#define PROYECTO_FINAL_FEATUREPHONE_H
#include "Telefono.h"

class FeaturePhone:public Telefono{
public:
    FeaturePhone(const string &marca, const string &modelo, double precio, int cantidadDisponible);

    void MostrarDetalles();
};


#endif //PROYECTO_FINAL_FEATUREPHONE_H

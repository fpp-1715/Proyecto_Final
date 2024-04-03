//
// Created by frank on 31/03/2024.
//

#ifndef PROYECTO_FINAL_SMARTPHONE_H
#define PROYECTO_FINAL_SMARTPHONE_H
#include "Telefono.h"

class SmartPhone: public Telefono{
public:
    SmartPhone(const string &marca, const string &modelo, double precio, int cantidadDisponible);

    void MostrarDetalles();
};


#endif //PROYECTO_FINAL_SMARTPHONE_H

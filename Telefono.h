//
// Created by frank on 31/03/2024.
//

#ifndef PROYECTO_FINAL_TELEFONO_H
#define PROYECTO_FINAL_TELEFONO_H
#include <string>
#include <iostream>
using namespace std;

class Telefono {
public:
    string marca;
    string modelo;
    double precio;
    int cantidad_disponible;
    Telefono(const string &marca, const string &modelo, double precio, int cantidadDisponible);

    const string &getModelo() const;

    virtual void MostrarDetalles()=0;
};


#endif //PROYECTO_FINAL_TELEFONO_H

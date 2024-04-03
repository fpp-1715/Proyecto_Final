//
// Created by frank on 31/03/2024.
//

#include "FeaturePhone.h"

FeaturePhone::FeaturePhone(const string &marca, const string &modelo, double precio, int cantidadDisponible) :
Telefono(marca, modelo, precio, cantidadDisponible) {}

void FeaturePhone::MostrarDetalles() {
    cout<<"Feature Phone - ";
    Telefono::MostrarDetalles();
}

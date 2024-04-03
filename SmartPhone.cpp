//
// Created by frank on 31/03/2024.
//

#include "SmartPhone.h"

SmartPhone::SmartPhone(const string &marca, const string &modelo, double precio, int cantidadDisponible) : Telefono(
marca, modelo, precio, cantidadDisponible) {}

void SmartPhone::MostrarDetalles() {
    cout << "Smartphone - ";
    Telefono::MostrarDetalles();
}



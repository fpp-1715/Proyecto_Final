//
// Created by frank on 31/03/2024.
//

#include "Telefono.h"

Telefono::Telefono(const string &marca, const string &modelo, double precio, int cantidadDisponible) : marca(marca),
modelo(modelo),precio(precio),cantidad_disponible(cantidadDisponible) {}

void Telefono::MostrarDetalles() {
    cout << "Marca: " << marca << ", Modelo: " << modelo << ", Precio: $" << precio << ", Cantidad disponible: " << cantidad_disponible << '\n';
}

const string &Telefono::getModelo() const {
    return modelo;
}

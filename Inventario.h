//
// Created by frank on 31/03/2024.
//

#ifndef PROYECTO_FINAL_INVENTARIO_H
#define PROYECTO_FINAL_INVENTARIO_H
#include <vector>
#include "Telefono.h"
#include "SmartPhone.h"

class Inventario {
private:
    vector<Telefono*> listaInventario;
    vector<int> listaTlefonosVendidos;
public:
    Inventario();

    const vector<Telefono *> &getListaInventario() const;

    const vector<int> &getListaTlefonosVendidos() const;

    void agregarTelefono(Telefono* telefono);
    bool comprarTelefono(string modelo, int cantidad);
    void mostrarInventario();
    void operator+=(const Telefono& telefono);
    int calcularTotalVentas();
};


#endif //PROYECTO_FINAL_INVENTARIO_H

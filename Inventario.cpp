//
// Created by frank on 31/03/2024.
//

#include "Inventario.h"

Inventario::Inventario() {}

void Inventario::agregarTelefono(Telefono* telefono) {
    listaInventario.push_back(telefono);
}

bool Inventario::comprarTelefono(string modelo, int cantidad) {
    for (auto telefono : listaInventario) {
        if (telefono->modelo == modelo && telefono->cantidad_disponible >= cantidad) {
            telefono->cantidad_disponible -= cantidad;
            listaTlefonosVendidos.push_back(cantidad);
            return true;
        }
    }
    return false;
}

void Inventario::mostrarInventario() {
    cout<<"Inventario"<<'\n';
    if (listaInventario.empty())cout<<"No tenemos telefonos"<<'\n';
    int cont = 1;
    for (auto telefono: listaInventario) {
        cout<<cont++<<"-";
        telefono->MostrarDetalles();
    }
}

const vector<Telefono *> &Inventario::getListaInventario() const {
    return listaInventario;
}
const vector<int> &Inventario::getListaTlefonosVendidos() const {
    return listaTlefonosVendidos;
}

void Inventario::operator+=(const Telefono &telefono) {
    agregarTelefono((Telefono *) &telefono);
}

int Inventario::calcularTotalVentas() {
    int aux = 0;
    for (int t: listaTlefonosVendidos) {
        aux += t;
    }
    return aux;
}



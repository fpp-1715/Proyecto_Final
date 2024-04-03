#include <iostream>
#include "SmartPhone.h"
#include "FeaturePhone.h"
#include "Inventario.h"

using namespace std;

int main() {
    Inventario inventario;

    cout << "Bienvenido a FPP-PHONE" << '\n';


    while (true) {
        cout << "1 - Ingresar un nuevo telefono al inventario" << '\n';
        cout << "2 - Mostrar Telefonos" << '\n';
        cout << "3 - Comprar Telefonos" << '\n';
        cout << "4 - Calcular Total de Ventas" << '\n';
        cout << "5 - Salir" << '\n';
        cout << "Seleccione una opcion:";

        int option;
        cin >> option;

        switch (option) {
            case 1: {
                cout << "Introduce el modelo de telefono a agregar\n1-SmartPhone\n2-FeaturePhone\n";
                int tipoT;
                cin >> tipoT;
                cin.ignore();

                cout <<"Ingrese la marca:";
                string marca;
                cin>>marca;

                cout <<"Ingrese el modelo:";
                cin.ignore();
                string modelo;
                getline(cin,modelo);

                cout <<"Ingrese el precio:";
                double precio;
                cin >> precio;

                cout <<"Ingrese la cantidad que vas a introducir:";
                int cantidad;
                cin >> cantidad;

                if (tipoT == 1) {
                    SmartPhone* s1 = new SmartPhone(marca, modelo, precio, cantidad);
                    inventario += *s1;
                } else if (tipoT == 2) {
                    FeaturePhone* f1 = new FeaturePhone(marca, modelo, precio, cantidad);
                    inventario += *f1;
                } else {
                    cout <<"Tipo de teléfono no valido" << '\n';
                }
                break;
            }
            case 2:
                inventario.mostrarInventario();
                break;
            case 3: {
                inventario.mostrarInventario();
                cout << "Seleccione el telefono a comprar:";
                int idAComprar;
                cin >> idAComprar;

                cout << "Diga la cantidad a comprar:";
                int cantAComprar;
                cin >> cantAComprar;

                if (inventario.comprarTelefono(inventario.getListaInventario()[idAComprar-1]->getModelo(), cantAComprar)) {
                    cout << "Compra realizada con exito" << '\n';
                } else {
                    cout << "No se pudo realizar la compra" << '\n';
                }
                break;
            }
            case 4:
                cout<<"El total de ventas es: "<<inventario.calcularTotalVentas()<<'\n';
                break;
            case 5:
                return 0;
            default:
                cout << "Ingrese una opcion valida" << '\n';
                break;
        }
    }
}


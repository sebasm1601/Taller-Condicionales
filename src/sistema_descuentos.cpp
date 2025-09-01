#include <iostream>
#include <string>
using namespace std;

int main(){
    char tipoCliente;
    int cantidadProductos;
    double precioTotal=0;
    double descuento=0;

    cout << "Tipo de cliente (V para VIP, R para Regular): ";
    cin >> tipoCliente;

    if (tipoCliente != 'V' && tipoCliente != 'v' && 
        tipoCliente != 'R' && tipoCliente != 'r') {
        cout << "ERROR: Tipo de cliente inválido." << endl;
        return 1;
    }

    cout << "Cantidad de productos: ";
    cin >> cantidadProductos;

    if (cantidadProductos <= 0) {
        cout << "ERROR: Cantidad de productos debe ser mayor a 0." << endl;
        return 1;
    }
    
    // Intente buscar formas de crear el bucle sin buscar el for porque no lo hemos visto en clase pero esta fue la unica forma que econtre
    for (int i = 1; i <= cantidadProductos; i++) {
        double precio;
        cout << "Precio del producto " << i << ": $";
        cin >> precio;
        if (precio < 0) {
            cout << "ERROR: El precio no puede ser negativo." << endl;
            return 1;
        }
        precioTotal += precio;
    }
    
    if (tipoCliente == 'V' || tipoCliente == 'v') {

        descuento = precioTotal * 0.20;
        cout << "\nCliente VIP - Descuento del 20%" << endl;
    } else {
        if (cantidadProductos >= 4) {
            descuento = precioTotal * 0.10;
            cout << "\nCliente Regular - Descuento del 10% (4+ productos)" << endl;
        } else {
            cout << "\nCliente Regular - Sin descuento (menos de 4 productos)" << endl;
        }
    }
    
    double precioFinal = precioTotal - descuento;
    
    cout << "Subtotal: $" << precioTotal << endl;
    cout << "Descuento: -$" << descuento << endl;
    cout << "Total a pagar: $" << precioFinal << endl;

    return 0;
}
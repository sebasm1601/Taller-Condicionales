#include <iostream>
using namespace std;

int main() {
    int pinCorrecto = 1234;
    double saldo = 5000.00;
    int pinIngresado;
    bool acceso = false;

    for (int intentos = 1; intentos <= 3; intentos++) {
        cout << "Ingrese su PIN de 4 digitos: ";
        cin >> pinIngresado;

        if (pinIngresado == pinCorrecto) {
            acceso = true;
            cout << "PIN correcto. Bienvenido." << endl;
            break; 
        } else {
            if (intentos < 3) {
                cout << "PIN incorrecto. Le quedan " << (3 - intentos) << " intentos." << endl;
            }
        }
    }

    
    if (!acceso) {
        cout << "Tarjeta bloqueada por seguridad. Contacte a su banco." << endl;
        return 1;
    }

    int opcion;
    cout << "\n=== MENÚ PRINCIPAL ===" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Salir" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Su saldo actual es: $" << saldo << endl;
            break;

        case 2: {
            double montoRetiro;
            cout << "Ingrese el monto a retirar: $";
            cin >> montoRetiro;

            if (montoRetiro <= 0) {
                cout << "ERROR: El monto debe ser mayor a $0." << endl;
            } else if (montoRetiro > saldo) {
                cout << "ERROR: Saldo insuficiente." << endl;
                cout << "Saldo disponible: $" << saldo << endl;
            } else {
                saldo -= montoRetiro;
                cout << "Retiro exitoso de $" << montoRetiro << endl;
                cout << "Saldo restante: $" << saldo << endl;
            }
            break;
        }

        case 3:
            cout << "Gracias por usar nuestro cajero." << endl;
            break;

        default:
            cout << "Opción inválida." << endl;
    }

    return 0;
}

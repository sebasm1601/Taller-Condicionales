#include <iostream>
#include <string>
using namespace std;

int main(){
    int dia, mes, year;
    bool fechaValida = true;
    int diasDelMes;

    cout << "Ingrese su fecha de nacimiento:" << endl;
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "year: ";
    cin >> year;

    if(year<1900 || year>2025) {

        cout<<"ERROR! El año ingresado debe estar entre 1900 y 2025"<< endl;
        fechaValida = false;
    }

    if(mes<1 || mes>12) {

        cout<<"ERROR! El mes ingresado debe estar entre 1 y 12"<< endl;
        fechaValida = false;
    }

    if (fechaValida) {
        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                diasDelMes = 31;
                break;
            case 4: case 6: case 9: case 11:
                diasDelMes = 30;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    diasDelMes = 29; 
                } else {
                    diasDelMes = 28;
                }
                break;
            default:
                diasDelMes = 0; 
        }
        if (dia < 1 || dia > diasDelMes) {
            cout << "ERROR: Día inválido. ";
            if (mes == 2) {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    cout << "Febrero de " << year << " (año bisiesto) tiene 29 días." << endl;
                } else {
                    cout << "Febrero de " << year << " (año no bisiesto) tiene 28 días." << endl;
                }
            } else {
                cout << "El mes " << mes << " solo tiene " << diasDelMes << " días." << endl;
            }
            fechaValida = false;
        }
    }
    if (fechaValida) {
        cout << "Fecha válida: " << dia << "/" << mes << "/" << year << endl;
        
        if (mes == 9) {
            cout << "¡Felicitaciones! Tiene derecho al descuento por cumpleañero." << endl;
        } else {
            cout << "Fecha válida, pero no cumple años este mes." << endl;
        }
    }






    return 0;
}
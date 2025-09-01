#include <iostream>
#include <string>
using namespace std;

int main() {
    int dia, mes;

    cout << "Ingrese su dia de nacimiento: ";
    cin >> dia;
    cout << "Ingrese su mes de nacimiento: ";
    cin >> mes;

    if (mes < 1 || mes > 12) {
        cout << "ERROR: Mes no válido." << endl;
        return 1;
    }

    int diasDelMes;
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            diasDelMes = 31; break;
        case 4: case 6: case 9: case 11:
            diasDelMes = 30; break;
        case 2:
            diasDelMes = 29; 
            break;
    }

    if (dia < 1 || dia > diasDelMes) {
        cout << "ERROR: Día no válido. Este mes tiene solo " << diasDelMes << " días." << endl;
        return 1;
    }

    string signo;
    switch (mes) {
        case 1:  signo = (dia <= 19) ? "Capricornio" : "Acuario"; break;
        case 2:  signo = (dia <= 18) ? "Acuario" : "Piscis"; break;
        case 3:  signo = (dia <= 20) ? "Piscis" : "Aries"; break;
        case 4:  signo = (dia <= 19) ? "Aries" : "Tauro"; break;
        case 5:  signo = (dia <= 20) ? "Tauro" : "Géminis"; break;
        case 6:  signo = (dia <= 20) ? "Géminis" : "Cáncer"; break;
        case 7:  signo = (dia <= 22) ? "Cáncer" : "Leo"; break;
        case 8:  signo = (dia <= 22) ? "Leo" : "Virgo"; break;
        case 9:  signo = (dia <= 22) ? "Virgo" : "Libra"; break;
        case 10: signo = (dia <= 22) ? "Libra" : "Escorpio"; break;
        case 11: signo = (dia <= 21) ? "Escorpio" : "Sagitario"; break;
        case 12: signo = (dia <= 21) ? "Sagitario" : "Capricornio"; break;
    }

    cout << "\nSu signo zodiacal es: " << signo << endl;

    return 0;
}

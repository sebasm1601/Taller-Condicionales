#include <iostream>
using namespace std;

int main() {
    cout << "=== CONTROL DE HORARIOS DE EMPLEADOS ===" << endl;
    
    string nombreEmpleado;
    int horaEntrada, minEntrada, horaSalida, minSalida;
    bool horaEntradaValida = true, horaSalidaValida = true;
    
    cout << "Nombre del empleado: ";
    cin >> nombreEmpleado;
    
    cout << "\nHora de ENTRADA:" << endl;
    cout << "Hora (0-23): ";
    cin >> horaEntrada;
    cout << "Minutos (0-59): ";
    cin >> minEntrada;
    
    if (horaEntrada < 0 || horaEntrada > 23) {
        cout << "ERROR: Hora de entrada inválida. Debe estar entre 0 y 23." << endl;
        horaEntradaValida = false;
    }
    if (minEntrada < 0 || minEntrada > 59) {
        cout << "ERROR: Minutos de entrada inválidos. Deben estar entre 0 y 59." << endl;
        horaEntradaValida = false;
    }
    
    if (!horaEntradaValida) {
        return 1;
    }
    

    cout << "\nHora de SALIDA:" << endl;
    cout << "Hora (0-23): ";
    cin >> horaSalida;
    cout << "Minutos (0-59): ";
    cin >> minSalida;
    
    if (horaSalida < 0 || horaSalida > 23) {
        cout << "ERROR: Hora de salida inválida. Debe estar entre 0 y 23." << endl;
        horaSalidaValida = false;
    }
    if (minSalida < 0 || minSalida > 59) {
        cout << "ERROR: Minutos de salida inválidos. Deben estar entre 0 y 59." << endl;
        horaSalidaValida = false;
    }
    
    if (!horaSalidaValida) {
        return 1;
    }
    
    int totalMinutosEntrada = horaEntrada * 60 + minEntrada;
    int totalMinutosSalida = horaSalida * 60 + minSalida;
    

    if (totalMinutosSalida < totalMinutosEntrada) {
        totalMinutosSalida += 24 * 60; 
    }
    
    int minutosTrabajos = totalMinutosSalida - totalMinutosEntrada;
    double horasTrabajadas = minutosTrabajos / 60.0;
    
    cout << "\n=== RESUMEN ===" << endl;
    cout << "Empleado: " << nombreEmpleado << endl;
    cout << "Entrada: " << horaEntrada << ":" << minEntrada << endl;
    cout << "Salida: " << horaSalida << ":" << minSalida << endl;
    cout << "Horas trabajadas: " << horasTrabajadas << " horas" << endl;
    
   
    
    return 0;
}
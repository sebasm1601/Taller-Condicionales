#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<< "=== CALCULADORA CAJA REGISTRADORA ==="<<endl;

    int opcion;

    cout<< "Menu"<<endl;
    cout<< "1.Dividir la cuenta"<<endl;
    cout<< "2.Realizar una operacion matematica"<<endl;
    cout<< "Seleccione una opcion: "<<endl;
    cin>>opcion;

    if(opcion==1){
        double total;
        int personas;

        cout<<"Ingrese el total de la cuenta: ";
        cin>>total;
        cout<<"Ingrese la cantidad de personas: ";
        cin>>personas;
        if (personas<=0){
            cout<< "ERROR: No se puede dividir entre cero o menos personaspersonas"<<endl;
        } else{
            double costoporpersona = total/personas;
            cout<<"el costo por persona es: "<<costoporpersona<<endl;
        }
    } else if(opcion==2){
        double num1, num2, resultado;
        string operacion;

        cout<< "Ingrese el primer numero: ";
        cin>> num1;
        cout<< "Ingrese la operacion (+, -, *, /, sumar, restar, multiplicar, dividir):";
        cin>>operacion;
        cout<< "Ingrese el segundo numero: ";
        cin>> num2;

        if (operacion == "+" || operacion == "sumar") {
            resultado = num1 + num2;
            cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado << endl;
        } else if (operacion == "-" || operacion == "restar") {
            resultado = num1 - num2;
            cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado << endl;
        } else if (operacion == "*" || operacion == "multiplicar") {
            resultado = num1 * num2;
            cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado << endl;
        } else if (operacion == "/" || operacion == "dividir") {
            if (num2 == 0) {
                cout << "ERROR: Division por cero no permitida." << endl;
            } else {
                resultado = num1 / num2;
                cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado << endl;
            }
        } else {
            cout << "ERROR: Operacion no valida." << endl;
        }
    } else {
        cout << "ERROR: Opcion no valida." << endl;
    }


    return 0;
}
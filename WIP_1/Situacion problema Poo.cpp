#include <iostream>
#include "Situacion problema Poo - Empleado.h"

using namespace std;

int main() {
    int max_employees = 0;
    cout << "Cuantos empleados desea registrar \n";
    cin >> max_employees;
    Employee files [max_employees];

    // Añadir empleados iniciales a la lista.

    for (int i = 0; i < max_employees; ++i) {
        string nam;
        double baseEar;

        cout << "Nombre del empleado: ";
        cin >> nam;
        cout << "Salario base: ";
        cin >> baseEar;

        Employee sysuser(nam, baseEar);
        files[i] = sysuser;
    }

    bool sysExit;
    sysExit = true;
    string password;

    // Ingreso a sistema

    do {
    cout << "Ingresa la contraseña del sistema para ingresar." << endl;
    cin >> password;

    if (password == menu) {
    
        // dentro de sistema

        char option;
        do {
            cout << "a) Agregar nuevo b) Consultar c) Modificar d) Eliminar e) Salir"
            cin >> option;

            switch (option) {
                
                // Agregar empleado
                case 'a': {
                    
                    cout << "Nombre del empleado: ";
                    cin >> nam;
                    cout << "Salario base: ";
                    cin >> baseEar;
                    
                    Employee sysuser(nam, baseEar);
                    files[i] = sysuser;
                }

                // Consultar ficha de empleado

                case 'b': {
                    
                    

                }
            }
        }

    // casos de salida

    } else if (password == exit) {

        sysExit = false;

    } else {

        cout << "Contraseña Incorrecta. Intenta de nuevo."

    }
    } while (sysExit == false)




    // Lo inferior a este comentario es inecesario para el codigo, mayormente usado para referencia.

    char option;
    do {
        cout << "a) Agregar nuevo b) Consultar c) Modificar d) Eliminar e) Salir: ";
        cin >> opcion;

        switch (opcion) {
        case 'a': {
            int autoIndex;
            double cantidad;

            cout << "Ingrese el índice del auto: ";
            cin >> autoIndex;

            if (autoIndex >= 0 && autoIndex < max_autos) {
                cout << "Cantidad: ";
                cin >> cantidad;
                autos[autoIndex].acelerar(cantidad);
            } else {
                cout << "Índice de auto no válido." << endl;
            }
            break;
        }

        case 'b': {
            int autoIndex;
            double cantidad;

            cout << "Ingrese el índice del auto: ";
            cin >> autoIndex;

            if (autoIndex >= 0 && autoIndex < max_autos) {
                cout << "Cantidad: ";
                cin >> cantidad;

                bool respuesta = autos[autoIndex].desacelerar(cantidad);
                if (!respuesta) {
                    cout << "No hay velocidad suficiente." << endl;
                }
            } else {
                cout << "Índice de auto no válido." << endl;
            }

            break;
        }

        case 'c': {
            int autoIndex;

            cout << "Ingrese el índice de la cuenta: ";
            cin >> autoIndex;

            if (autoIndex >= 0 && autoIndex < max_autos) {
                autos[autoIndex].mostrarModelo();
            } else {
                cout << "Índice de cuenta no válido." << endl;
            }

            break;
        }

        }
    } while (opcion != 'd');

    return 0;
}

/*
1.- Verificar si la instancia en la que se agregan los empleados iniciales de la lista debe moverse dentro del ciclo while
principal.
2.- Verificar la sintaxis del caso de añadir del primer switch.
3.- Completar los casos del primer switch, Consultar, Modificar, Eliminar.
4.- Añadir un switch dentro del caso de Consultar dentro del primer switch, utilizando las funciones del .h de showName y
showEarnings.
5.- Añadir un switch dentro del caso de Modificar dentro del primer switch, utilizando las funciones del .h de giveRaise y
Deduct.
6.- (Opcional) Agregar un condicional en el switch de Modificar para solicitar una contraseña al usuario antes de autorizar
modificacion. Recuerda que "user" es una palabra reservada de C++.



Para salir de los switches puedes usar condicionales con breaks. El break idealmente mandaria al usuario al menu anterior.

Para seleccionar a que usuario consultar o modificar, se utiliza el index.

Seria optimo realizar una interfaz que se imprima junto con el primer switch (el de Añadir, Consultar, Modificar, Eliminar)

que contenga datos basicos, principalmente el nombre y opcionalmente el sueldo (earnings).
*/
#include <iostream>
#include <vector>
#include "Situacion_problema_Poo.h"

using namespace std;

int main() {
    vector<Employee> employees; 
    bool sysExit = true;
    string password;

    Employee sysuser("", 0);

    do {
        cout << "Ingresa la contraseña del sistema para ingresar (\"exit\" para salir): ";
        cin >> password;

        if (password == "menu") {
            char option;
            cout << "Módulo empleados:\n"
                 << "a) Agregar nuevo\n"
                 << "b) Consultar (individual)\n"
                 << "c) Consultar (plantilla completa)\n"
                 << "d) Modificar\n"
                 << "e) Eliminar\n"
                 << "f) Salarios (base, bonos y deducciones)\n"
                 << "g) Salir\n"
                 << "Seleccione una opción: ";
            cin >> option;

            switch (option) {
                case 'a': {
                    string name;
                    double baseEarnings;

                    cout << "Nombre del empleado: ";
                    cin >> name;
                    cout << "Salario base: ";
                    cin >> baseEarnings;

                    employees.push_back(Employee(name, baseEarnings));
                    cout << "Empleado agregado exitosamente." << endl;
                    break;
                }

                case 'b': {
                    int index;
                    cout << "Ingrese el índice del empleado a consultar: ";
                    cin >> index;

                    if (index >= 0 && index < employees.size()) {
                        employees[index].showDetails();
                    } else {
                        cout << "Índice de empleado no válido." << endl;
                    }
                    break;
                }

                case 'c': {
                    for (size_t i = 0; i < employees.size(); ++i) {
                        employees[i].showDetails();
                    }
                    break;
                }

                case 'd': {
                    int index;
                    cout << "Ingrese el índice del empleado a modificar: ";
                    cin >> index;

                    if (index >= 0 && index < employees.size()) {
                        string newName;
                        double newBaseEarnings;

                        cout << "Nuevo nombre del empleado: ";
                        cin >> newName;
                        cout << "Nuevo salario base: ";
                        cin >> newBaseEarnings;

                        employees[index].setName(newName);
                        employees[index].setBaseEarnings(newBaseEarnings);

                        cout << "Empleado modificado exitosamente." << endl;
                    } else {
                        cout << "Índice de empleado no válido." << endl;
                    }
                    break;
                }

                case 'e': {
                    int index;
                    cout << "Ingrese el índice del empleado a eliminar: ";
                    cin >> index;

                    if (index >= 0 && index < employees.size()) {
                        employees.erase(employees.begin() + index);
                        cout << "Empleado eliminado exitosamente." << endl;
                    } else {
                        cout << "Índice de empleado no válido." << endl;
                    }
                    break;
                }

                case 'f': {

                    int index;
                    cout << "Ingrese el índice del empleado: ";
                    cin >> index;

                    if (index >= 0 && index < employees.size()) {
                    
                        char option2;
                        cout << "Módulo salarios:\n"
                        << "1) Mostrar salario actual\n"
                        << "2) Agregar bono\n"
                        << "3) Deducir salario\n"
                        << "Seleccione una opción: ";
                        cin >> option2;

                        switch (option2) {
                        case '1': {
                            employees[index].showDetails();

                            break;
                        }

                        case '2': {
                            double raise;
                            cout << "Ingrese la cantidad del bono: ";
                            cin >> raise;

                            employees[index].giveRaise(raise);

                            break;
                        }

                        case '3': {
                            double deduction;
                            cout << "Ingrese la cantidad de salario deducido: ";
                            cin >> deduction;

                            employees[index].Deduct(deduction);

                            break;
                        }
                    }

                    } else {
                    cout << "Índice de empleado no válido." << endl;
                    }
                    
                    // Implementar lógica para mostrar salarios (base, bonos y deducciones)
                    break;
                }

                case 'g':
                    break;

                default:
                    cout << "Opción no válida." << endl;
                    break;
            }
        } else if (password == "exit") {
            sysExit = false;
        } else {
            cout << "Contraseña Incorrecta. Intenta de nuevo." << endl;
        }
    } while (sysExit);

    return 0;
}


// Ya solo hace falta agregar lo de los salarios y algo extra que queramos hacer :)
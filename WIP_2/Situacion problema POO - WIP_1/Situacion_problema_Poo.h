#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <vector>
using namespace std;

class Employee {
private:
    string name;
    double baseEarnings;

public:
    Employee(string nam = "", double baseEarnings = 0.0);

    string getName() const;
    double getBaseEarnings() const;

    void setName(string nam);
    void setBaseEarnings(double baseEarnings);

    void giveRaise(double amount);
    bool Deduct(double amount);
    void showDetails() const;
};

Employee::Employee(string nam, double baseEarnings) : name(nam), baseEarnings(baseEarnings) {}

string Employee::getName() const {
    return name;
}

double Employee::getBaseEarnings() const {
    return baseEarnings;
}

void Employee::setName(string nam) {
    name = nam;
}

void Employee::setBaseEarnings(double baseEarnings) {
    this->baseEarnings = baseEarnings;
}

void Employee::giveRaise(double amount) {
    baseEarnings += amount;
}

bool Employee::Deduct(double amount) {
    if (amount > baseEarnings) {
        return false;
    } else {
        baseEarnings -= amount;
        return true;
    }
}

void Employee::showDetails() const {
    cout << "Nombre del empleado: " << name << endl;
    cout << "Salario base: $" << baseEarnings << endl;
}

#endif 

/* 
En este archivo .h no es necesario hacer modificaciones o agregar ninguna funcion.
Puedes copiar desde las otras funciones si es necesario agregar una funcion, o puedes contactarme.
*/
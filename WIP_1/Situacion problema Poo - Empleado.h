#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double earnings;

public:
    Employee(string nam = "", double earnings = 0.0);

    string getName();
    double getEarnings();

    void setName(string nam);
    void setEarnings(double ear);

    void giveRaise(double amount);
    bool Deduct(double amount);
    void showName();
    void showEarnings();
};

Employee::Employee(string nam, double ear) : name(nam), earnings(ear) {}

string Employee::getName() {
    return name;
}

double Employee::getEarnings() {
    return earnings;
}

void Employee::setName(string nam) {
    name = nam;
}

void Employee::setEarnings(double ear) {
    earnings = ear;
}

void Employee::giveRaise(double amount) {
    earnings += amount;
}

bool Employee::Deduct(double amount) {
    if (amount > earnings) {
        return false;
    } else {
        earnings -= amount;
        return true;
    }
}

void Employee::showName() {
    cout << "El nombre del empleado es: " << name << endl;
}

/* 
En este archivo .h no es necesario hacer modificaciones o agregar ninguna funcion.
Puedes copiar desde las otras funciones si es necesario agregar una funcion, o puedes contactarme.
*/
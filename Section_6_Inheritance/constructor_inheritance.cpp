#include <iostream>
using namespace std;

class Machine {
private:
    int id;
public:
    Machine() {cout << "Machine no-argument constructor called!" << endl;}
    Machine(int id): id(id) {cout << "Machine parameterized constructor called!" << endl;}
    void info() { cout<< "ID: " << id << endl;}
};

class Vehicle: public Machine {
public:
    Vehicle() {cout << "Vehicle no-argument constructor called!" << endl;}
    Vehicle(int id): Machine(id) {cout << "Vehicle parameterized constructor called!" << endl;}
};

class Car: public Vehicle {
public:
    Car(int id): Vehicle(id) {cout << "Car parameterized constructor called!" << endl;}
    Car() {cout << "Car no-argument constructor called!" << endl;}
    //Car(): Machine(999) // Error "Machine is not a direct base of Car"
};

int main() {
    //Machine machine;

    //cout << "*****************" << endl;

    //Vehicle vehicle;
    //vehicle.info(); // garbage ID value

    //cout << "*****************" << endl;

    //Car car(100);
    //car.info();

    //Machine machine(123);
    //machine.info();

    Vehicle vehicle(321);
    vehicle.info();

    return 0;
}

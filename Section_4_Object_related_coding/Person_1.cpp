#include "Person_1.h"
#include <sstream>

Person::Person() {
    age = 0;
    name = "";
}

Person::Person(string name, int age) {  // How to differentiate class variable with calling/passing variable?
    this->name = name;  // this pointer in C++ stores the address of the class instance,
    this->age = age;    // which is called from the member function that enables functions to access the correct object data members.
    cout << "Memory location of object: " << this << endl;
}

string Person::toString() {
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << "; Age: ";
    ss << age;

    return ss.str();
}

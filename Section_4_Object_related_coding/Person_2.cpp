#include "Person_2.h"
#include <sstream>

string Person::toString() {
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << "; Age: ";
    ss << age;

    return ss.str();
}

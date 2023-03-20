#include <iostream>
using namespace std;

class Electronics {
public:
    string material_used = "semiconductor";
    string operating_voltage = "low";

    void printEx() {
        cout << "I am made up of " << material_used << " with operating on " << operating_voltage << " voltage " << endl;
    }
};

class Electrical {
public:
    string material_used = "conductor";
    string operating_voltage = "high";

    void printEl() {
        cout << "I am made up of " << material_used << " with operating on " << operating_voltage << " voltage " << endl;
    }
};

class computer: public Electronics, public Electrical { // A class can inherit from more than one classes, make sure each member functions are different in terminology, otherwise conflicting situation
public:
    bool easy_to_carry = false;

    void printC() {
        cout << "Hello I am computer, " << flush;
        Electronics::printEx();
        cout << " and " << flush;
        Electrical::printEl();
    }

};

class laptop: public Electronics {
public:
    bool easy_to_carry = true;

    void printL() {
        cout << "Hello I am laptop and " << flush;
        printEx();
    }
};

class smartphone: public Electronics {
public:
    bool easy_to_carry = true;
};

int main() {
    computer a;
    a.printC();

    laptop b;
    b.printL();

    return 0;
}

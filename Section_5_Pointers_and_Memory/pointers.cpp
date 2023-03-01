#include <iostream>

using namespace std;

void not_manipulate(int value) {
    value = 5;
}

void manipulate(int *pvalue) {
    *pvalue = 5;
}

int main() {
    int nvalue = 10;

    // * A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator.
    // & operator to store the memory address of the variable
    int *pnvalue = &nvalue;

    cout << "The value of an integer is " << nvalue << endl;
    cout << "The memory address of the integer value stored is " << pnvalue << endl;
    cout << "The value of the integer accessed via pointer is " << *pnvalue << endl;

    not_manipulate(nvalue);
    cout << "The value of an integer is " << nvalue << endl;

    manipulate(&nvalue);
    cout << "The value of an integer is " << nvalue << endl;

    return 0;
}

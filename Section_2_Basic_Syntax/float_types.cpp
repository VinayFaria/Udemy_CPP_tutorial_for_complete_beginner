#include <iostream>
// The header <iomanip> is part of the Input/output library of the C++ Standard Library.
// It defines the manipulator functions resetiosflags(), setiosflags(), setbase(), setfill(), setprecision(), and setw().
#include <iomanip>

using namespace std;

int main() {
    float fvalue = 1.2; // The float keyword is used to indicate numbers with a fractional component.

    cout << "Printing number as it is: " << fvalue << endl;
    // the letter ‘e’ (or sometimes ‘E’) to represent the “times 10 to the power of”
    // Scientific notation is a useful shorthand for writing lengthy numbers in a concise manner.
    cout << "Scientific notation: " << scientific << fvalue << endl;
    // We can specify the number of decimal points to print in cout by using the setprecision() function.
    cout << "Using maximum precision of float i.e. 7: " << setprecision(7) << fixed << fvalue << endl;
    cout << "Using precision greater than that of float i.e. 9: " << setprecision(9) << fixed << fvalue << endl;
    cout << "Number of bytes used to store a float data type: "<< sizeof(float) << endl;

    double dvalue = 1.234567898765432123456789;
    cout << "Using maximum precision of double i.e. 15: " << setprecision(15) << fixed << dvalue << endl;
    cout << "Using precision greater than that of double i.e. 17: " << setprecision(17) << fixed << dvalue << endl;
    cout << "Number of bytes used to store a double data type: " << sizeof(double) << endl;

    long double lvalue = 1.234567898765432123456789L;
    cout << "Using maximum precision of long double i.e. 19: " << setprecision(19) << fixed << lvalue << endl;
    cout << "Using precision greater than that of long double i.e. 22: " << setprecision(22) << fixed << lvalue << endl;
    cout << "Number of bytes used to store a long double data type: "<< sizeof(long double) << endl;

    return 0;
}

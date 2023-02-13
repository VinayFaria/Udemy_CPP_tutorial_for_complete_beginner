#include <iostream>
// #include <stdint.h>
#include <limits>

using namespace std;

int main() {
    cout << "Maximum int value: " << INT_MAX << endl;
    cout << "Minimum int value: " << INT_MIN << endl;
    cout << "bit width of int: " << sizeof(int) << endl;

    cout << "\n" << endl;

    cout << "Maximum unsigned int value: " << UINT_MAX << endl;
    cout << "Minimum unsigned int value: " << WINT_MIN << endl;
    cout << "bit width of unsigned int: " << sizeof(unsigned int) << endl;

    cout << "\n" << endl;

    cout << "Maximum short int value: " << SHRT_MAX << endl;
    cout << "Minimum short int value: " << SHRT_MIN << endl;
    cout << "bit width of short int: " << sizeof(short int) << endl;

    cout << "\n" << endl;

    cout << "Maximum long int value: " << LONG_MAX << endl;
    cout << "Minimum long int value: " << LONG_MIN << endl;
    cout << "bit width of long int: " << sizeof(long int) << endl;

    cout << "\n" << endl;

    cout << "Maximum long long int value: " << LLONG_MAX << endl;
    cout << "Minimum long long int value: " << LLONG_MIN << endl;
    cout << "bit width of long long int: " << sizeof(long long int) << endl;

    return 0;
}

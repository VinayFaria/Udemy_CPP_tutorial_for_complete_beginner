#include <iostream>
#include <limits>

using namespace std;

void details_of_int() {
    cout << "Maximum int value: " << INT_MAX << endl;
    cout << "Minimum int value: " << INT_MIN << endl;
    cout << "bit width of int: " << sizeof(int) << endl;
}

void details_of_unsigned_int() {
    cout << "Maximum unsigned int value: " << UINT_MAX << endl;
    cout << "Minimum unsigned int value: " << WINT_MIN << endl;
    cout << "bit width of unsigned int: " << sizeof(unsigned int) << endl;
}

void details_of_long_long_int() {
    cout << "Maximum long long int value: " << LLONG_MAX << endl;
    cout << "Minimum long long int value: " << LLONG_MIN << endl;
    cout << "bit width of long long int: " << sizeof(long long int) << endl;
}

int main() {

    details_of_int();
    details_of_long_long_int();
    details_of_unsigned_int();

    return 0;
}

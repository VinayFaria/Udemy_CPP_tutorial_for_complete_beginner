#include <iostream>
using namespace std;

int main() {
    char value = 127;

    cout << "The range of char is -128 to 127" << endl;

    cout << "In 3 bit 2's complement system numbers are represented as 000: 0; 001: 1; 010: 2; 011: 3; 100: -4; 101: -3; 110: -2; 111: -1" << endl;

    cout << "The upper limit (01111111) of char is " << (int)value << endl;

    value++;

    cout << "When it is increment by one then (10000000)" << (int)value << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    char cvalue = 42;
    cout << "The ASCII character of " << (int)cvalue << ": " << cvalue << endl; // typecasting: (type)variable or expression
    cout << "size of char (in bytes) occupied in memory: " << sizeof(char) << endl;

    cvalue = '9';
    cout << "Printing the character as it is: " << cvalue << endl;

    cvalue = '9';
    cout << "The Decimal value of ASCII character " << cvalue << ": " << (int)cvalue << endl;

    cvalue = 'v';
    cout << "Printing the character as it is: " << cvalue << endl;

    cvalue = 'v';
    cout << "The Decimal value of ASCII character " << cvalue << ": " << (int)cvalue << endl;

    cvalue = 'v';
    cout << "Typecasting char variable with char: " << (char)cvalue << endl;

    wchar_t wvalue = 'n'; // wchar_t is a wide character. It is used to represent characters which require more memory to represent them than a regular char
    cout << (char)wvalue << endl;
    cout << "size of wchar_t (in bytes) occupied in memory: " << sizeof(wchar_t) << endl;

    return 0;
}

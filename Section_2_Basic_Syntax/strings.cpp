#include <iostream>
using namespace std;

int main() {
    // Strings are objects that represent sequences of characters.
    // The string class is an instantiation of the basic string class template that uses char (i.e., bytes) as its character type.
    string text1 = "Hello ";
    string text2 = "User";

    string text3 = text1 + text2; // string concatenation

    cout << text1 << text2 << endl;
    cout << text1 + text2 << endl; // string concatenation
    cout << text3 <<endl;

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    // const: Explicit value needed to be provided to the constant variable at the time of declaration of the constant variable,
    // It cannot be assigned value anywhere in the program.
    const string password = "hello";
    string input;

    do {
        cout << "Enter the password: " << flush;
        cin >> input;

        if (input != password) {
            cout << "Access denied !!!" << endl;
        }
    } while(input != password);

    cout << "Password accepted :)" << endl;

    return 0;
}

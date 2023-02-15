// try to declare the variable close to using it at first instance
#include <iostream>
using namespace std;

int main() {
    string password = "A1B2C3"; // the single quote is used to identify the single character, and double quotes are used for string literals.
    cout << "Please type your password here: " << flush;

    string input;
    cin >> input;

    // = assignment operator, == checking operator or equals, != not equals
    if (input == password) {
        cout << "Unlocked :)" << endl;
    }

    if (input != password) {
        cout << "Wrong password, please try again !!!" << endl;
    }

    return 0;
}

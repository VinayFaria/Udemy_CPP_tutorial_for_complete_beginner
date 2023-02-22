#include <iostream>

using namespace std;

int main() {
    /* break: the break statement terminates the loop.
    for(int i = 0; i <5; i++) {

        if(i == 2) {
            cout << "Due to break statement, program is quitting" << endl;
            break;
        }
        cout << "This is iteration number " << i << endl;
    }
    */

    /* continue: the continue statement skips the rest of the loop statement and causes the next iteration of the loop to take place.
    for(int i = 0; i <5; i++) {

        if(i == 2) {
            cout << "Due to continue statement, program is not executing below statements for this iteration" << endl;
            continue;
        }
        cout << "This is iteration number " << i << endl;
    }
    */

    const string password = "hello";
    string input;

    do {
        cout << "Enter the password: " << flush;
        cin >> input;

        if (input == password) {
            break;
        }
        else {
            cout << "Access denied !!!" << endl;
        }
    } while(true);

    cout << "Password accepted :)" << endl;

    return 0;
}

// limitation: if input is less than 1, it says arithmetic operation but should give invalid option
// limitation: if input is character, it takes it as 0 and gives output as arithmetic operation but should give invalid option.
#include <iostream>

using namespace std;

int main() {
    int initial = 10;
    cout << "Initial value in a variable is: " << initial << endl;

    cout << "Available options" << endl;
    cout << "1. Add a number" << endl << "2. Subtract a number" << endl << "3. Multiply with a number" << endl << "4. Division with a number" << endl;
    cout << "Which option you want to choose: " << flush;

    int input;
    cin >> input;
    cout << input << endl;
    if (input < 5) {
        cout << "Its an arithmetic operation" << endl;
    }
    else {
        cout << "Its an invalid input" << endl;
    }

    return 0;
}

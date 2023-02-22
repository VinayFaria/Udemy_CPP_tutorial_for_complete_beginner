// faster than if-else

#include <iostream>

using namespace std;

int main() {
    cout << "Select a arithmetic operation from below menu: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division" << endl;
    cout << "Your input: " << flush;
    int input_value;
    cin >> input_value;

    switch(input_value) {
    case 1:
        cout << "You want to perform addition" << endl;
        break; // If you do not write break then following case will also be executed
    case 2:
        cout << "You want to perform Subtraction" << endl;
        break;
    case 3:
        cout << "You want to perform Multiplication" << endl;
        break;
    case 4:
        cout << "You want to perform Division" << endl;
        break;
    default:
        cout << "Unrecognized option" << endl;
    }

    return 0;
}

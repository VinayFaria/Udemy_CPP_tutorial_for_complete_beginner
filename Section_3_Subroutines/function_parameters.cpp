#include <iostream>

using namespace std;

void display_menu() {
    cout << "Select a arithmetic operation from below menu: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division" << endl;
}

int get_input() {
    cout << "Your input: " << flush;
    int input_value;
    cin >> input_value;
    return input_value;
}

int perform_operation(int operation_value, int initial, int second_value) {
    switch(operation_value) {
    case 1:
        cout << initial << "+" << second_value << "=" << (initial+second_value) << endl;
        break; // If you do not write break then following case will also be executed
    case 2:
        cout << initial << "-" << second_value << "=" << (initial-second_value) << endl;
        break;
    case 3:
        cout << initial << "*" << second_value << "=" << (initial*second_value) << endl;
        break;
    case 4:
        cout << initial << "/" << second_value << "=" << (initial/second_value) << endl;
        break;
    default:
        cout << "Unrecognized option" << endl;
    }
}

int main() {
    int initial = 10;
    cout << "The initial value of the variable is " << initial << endl;
    display_menu();
    int operation_value = get_input();
    cout << "Give the value of the second number" << endl;
    int second_value = get_input();
    perform_operation(operation_value, initial, second_value);

    return 0;
}

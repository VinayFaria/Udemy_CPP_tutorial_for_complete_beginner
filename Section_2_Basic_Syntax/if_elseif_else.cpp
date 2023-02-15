#include <iostream>

using namespace std;

int main() {
    int initial = 10;
    cout << "Initial value in a variable is: " << initial << endl;

    cout << "Available options" << endl;
    cout << "1. Add a number" << endl << "2. Subtract a number" << endl << "3. Multiply with a number" << endl << "4. Division with a number" << endl;
    cout << "Which option you want to choose: " << flush;

    int input_option;
    cin >> input_option;
    cout << input_option << endl;
    if (input_option == 1) {
        cout << "What number to add: " << flush;
        int input_number;
        cin >> input_number;
        initial = initial + input_number;
        cout << "Final value of the variable: " << initial << endl;
    }
    else if (input_option == 2){
        cout << "What number to subtract: " << flush;
        int input_number;
        cin >> input_number;
        initial = initial - input_number;
        cout << "Final value of the variable: " << initial << endl;
    }
    else if (input_option == 3){
        cout << "What number to multiply: " << flush;
        int input_number;
        cin >> input_number;
        initial = initial * input_number;
        cout << "Final value of the variable: " << initial << endl;
    }
    else if (input_option == 4){
        cout << "What number to divide: " << flush;
        int input_number;
        cin >> input_number;
        initial = initial / input_number;
        cout << "Final value of the variable i.e. quotient: " << initial << endl;
    }
    else {
        cout << "Its an invalid input" << endl;
    }

    return 0;
}

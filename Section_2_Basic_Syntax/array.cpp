#include <iostream>

using namespace std;

int main() {
    int values[3]; // specify only size
    cout << "Initialization with garbage values: " << values[0] << ", " << values[1] << ", " << values[2] << endl;
    //values[0], values[1], values[2] = 1, 2, 3; // such assignment to array is not possible in C++
    values[0] = 1;
    values[1] = 2;
    values[2] = 3;
    cout << "The values in the array of integers after assigning values are " << endl;
    for(int i = 0; i < 3; i++) {
        cout << values[i] << endl;
    }

    cout << "The values in the array of string are " << endl;
    string texts[] = {"Apple", "Banana", "Cherry"}; // specify only values
    for(int i = 0; i < 3; i++) {
        cout << texts[i] << endl;
    }

    cout << "Below is the multiplication table of twelve:" << endl;
    int table_of_twelve[10] = {}; // Specify size and NULL

    for(int i = 1; i < 11; i++) {
        table_of_twelve[i-1] = 12 * (i);
    }

    for(int i = 1; i < 11; i++) {
        cout << "12 X " << i << " = " << table_of_twelve[i-1] << endl;
    }

    return 0;
}

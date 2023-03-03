#include <iostream>

using namespace std;

int main() {
    string texts[] = {"Dholu", "Bholu", "Sonu", "Monu"};    // In declarations, [] means ‘‘array of’’ and * means ‘‘pointer to’’    // In an expression, prefix unary * means ‘‘contents of’’ and prefix unary & means ‘‘address of.’’

    string *ptexts = texts; // why & is not required in case of array: https://stackoverflow.com/questions/39900030/why-is-an-array-variable-equal-to-its-address
    //string *ptexts1 = &texts; // you're trying to pass a std::string to a function that expects a pointer to a character array

    cout << ptexts << ", " << *ptexts << ", "  << &ptexts << ", " << ptexts[0] << endl;

    cout << texts << ", " << &texts << ", " << texts[0] << endl;

    // Loop through an array using a pointer, with array element reference syntax
    for (int i=0; i<sizeof(texts)/sizeof(string); i++) {
        cout << ptexts[i] << " " << flush;
    }
    cout << endl;

    // Loop through an array by incrementing a pointer
    for (int i=0; i<sizeof(texts)/sizeof(string); i++, ptexts++) {
        cout << *ptexts << " " << flush;
    }
    cout << endl;

    // loop through an array, stopping by comparing two pointers
    string *ptextsstart = &texts[0]; // https://stackoverflow.com/questions/9802585/why-is-the-data-type-needed-in-pointer-declarations
    string *ptextsstop = &texts[3];
    while(true) {
        cout << *ptextsstart << " " << flush;

        if (ptextsstart == ptextsstop) {
            break;
        }
        ptextsstart++;
    }

    return 0;
}

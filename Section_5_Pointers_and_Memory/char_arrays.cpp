#include <iostream>

using namespace std;

int main() {
    char text[] = "hello";  // "hello" = {'h', 'e', 'l', 'l', 'o'}
    cout << text << endl;

    cout << endl;

    cout << sizeof(text) << "," << sizeof(char) << endl;

    cout << endl;

    // output all the chars with a for loop
    for (int i=0; i<sizeof(text)/sizeof(char); i++) {   // since sizeof(char) = 1; sizeof(text)/sizeof(char) = sizeof(text)
        cout << i << ": " << text[i] << endl;
    }

    cout << endl;

    // output all the chars with a while(true) loop
    int k = 0;

    while(true) {
        if (text[k] == 0 )
            break;

        cout << text[k] << endl;
        k++;
    }

    return 0;
}

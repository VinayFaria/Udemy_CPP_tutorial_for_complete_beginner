#include <iostream>

using namespace std;

int main() {
    char text[] = "hello"; // null will be inserted at the end of the string

    cout << "The string '" << text << "' will be reversed." << endl;
    int nchars = sizeof(text)-1;

    char *pStart = text;
    char *pEnd = text + nchars - 1; // text + nchars will point to null character at the end of string

    while(pStart < pEnd) {

        char temp_save = *pStart;
        *pStart = *pEnd;
        *pEnd = temp_save;

        pStart++;
        pEnd--;
    }

    cout << text << endl;

    return 0;
}

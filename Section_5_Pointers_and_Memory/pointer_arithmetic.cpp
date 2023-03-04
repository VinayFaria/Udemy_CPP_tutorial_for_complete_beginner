#include <iostream>

using namespace std;

int main() {
    const int NStrings = 5;

    string texts[NStrings] = {"one", "two", "three", "four", "five"};

    string *pTexts = texts;

    pTexts += 3;

    cout << *pTexts << endl;

    pTexts -= 1;

    cout << *pTexts << endl;

    cout << &texts[NStrings-1] << ", " << &texts[NStrings] << endl;

    string *pEnd = &texts[NStrings];
    pTexts = &texts[0];

    while (pTexts != pEnd) {
        cout << *pTexts << endl;
        pTexts++;
    }

    pTexts = &texts[0];

    long elements = (long)(pEnd - pTexts);

    cout << elements << endl;

    return 0;
}

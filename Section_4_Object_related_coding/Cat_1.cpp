#include <iostream>
#include "Cat_1.h"

using namespace std;

void Cat::speak() {
    if (happy == true) {
        cout << "Meow :)" << endl;
    } else {
        cout << "Ssss :(" << endl;
    }
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}

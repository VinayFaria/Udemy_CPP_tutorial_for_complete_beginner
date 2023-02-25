#include <iostream>
#include "Cat_2.h"

using namespace std;

Cat::Cat() {
    cout << "The cat is born !!!" << endl;
    happy = true;   // Was not initialized to any initial value but now initialized using constructor
}

Cat::~Cat() {
    cout << "The cat is died !!!" << endl;
}

void Cat::speak() {
    if (happy) {
        cout << "Meow" << endl;
    } else {
        cout << "Ssss" << endl;
    }
}

#include <iostream>
#include "Cat.h"

using namespace std;

// To define a member function outside the class definition we have to use the scope resolution :: operator along with class name and function name.
void Cat::speak() {
    cout << "Meow !!!" << endl;
}

void Cat::jump() {
    cout << "Jump without sound" << endl;
}

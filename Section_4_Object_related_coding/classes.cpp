#include <iostream>
#include "Cat.cpp"

using namespace std;

int main() {
    // An object is a recognizable entity having a state and behavior, and these objects hold variables of a class in accordance with the access modifiers. It is also known as an instance of a class.
    Cat cat1;

    // You can call a member function with the help object and use the dot operator.
    cat1.speak();
    cat1.jump();

    return 0;
}

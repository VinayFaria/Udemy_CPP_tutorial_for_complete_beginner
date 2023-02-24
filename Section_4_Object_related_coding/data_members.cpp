#include <iostream>
#include "Cat_1.cpp"
using namespace std;

int main() {
    Cat jim;
    jim.makeSad();
    jim.speak();

    Cat bob;
    bob.makeHappy();
    bob.speak();

    return 0;
}

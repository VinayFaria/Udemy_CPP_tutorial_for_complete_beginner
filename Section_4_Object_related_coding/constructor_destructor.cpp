#include <iostream>
#include "Cat_2.cpp"

using namespace std;

int main() {
    cout << "This is the first line." << endl;

    Cat pussycat;
    pussycat.speak();

    {
        Cat kitty;
        kitty.speak();
    }   // kitty destructor execute here

    cout << "This is the last line." << endl;
    return 0;
}   // pussycat destructor execute here

#include <iostream>

#include "Animals.cpp"
#include "Cat.cpp"

//using namespace std;
using namespace cats;   // or using namespace jwp;

int main() {
    // Based on above namespace specified, Cat will be used from it.
    Cat cat;
    cat.speak();

    // If we are specifying namespace before Cat usage then it will use that particular Cat only. We have to include cpp file where it contains.
    jwp::Cat cat2;
    cat2.speak();

    cats::Cat cat3;
    cat3.speak();

    cout << CATNAME << endl;

    cout << jwp::CATNAME << endl;
    cout << cats::CATNAME << endl;

    return 0;
}

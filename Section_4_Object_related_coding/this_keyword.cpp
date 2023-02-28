#include <iostream>
#include "Person_1.cpp"

using namespace std;

int main() {
    Person person1();

    Person person2("Dholu", 10);
    cout << person2.toString() << "; memory location: " << &person2 << endl;

    Person person3("Bholu", 11);
    cout << person3.toString() << "; memory location: " << &person3 << endl;

    return 0;
}

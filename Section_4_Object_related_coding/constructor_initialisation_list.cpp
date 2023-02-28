#include <iostream>
#include "Person_2.cpp"

using namespace std;

int main() {
    Person person1();

    Person person2("Dholu", 10);
    cout << person2.toString() << endl;

    Person person3("Bholu", 11);
    cout << person3.toString() << endl;

    return 0;
}

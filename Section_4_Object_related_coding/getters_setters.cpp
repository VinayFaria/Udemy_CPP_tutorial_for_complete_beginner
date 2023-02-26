#include <iostream>
#include "person.cpp"

using namespace std;

int main() {

    Person person;

    person.setName("Larry");

    cout << person.toString() << endl;

    cout << "Name of person with get method: " << person.getName() << endl;

    return 0;
}

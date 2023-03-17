// Objective: To create memory block named as Person and store alphabet's (a to z) as name for each person.

#include <iostream>
using namespace std;

class Person {
private:
    string name;
public:
    void setName(string name) {
        this->name = name;
    }
    void speak() {
        cout << "My name is " << name << endl;
    }
};

int main() {
    Person *pPerson = new Person[26];

    char c = 'a';
    int i = 0;
    while(true) {
        string name(1, c);
        pPerson[i].setName(name);
        pPerson[i].speak();
        if (c == 'z') {
            break;
        }
        c++;
        i++;
    }

    delete [] pPerson;

    return 0;
}

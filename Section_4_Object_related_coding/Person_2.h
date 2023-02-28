#ifndef PERSON_2_H_
#define PERSON_2_H_

#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person():name("undefined"), age(0) {}; // Initializer List is used in initializing the data members of a class.
    Person(string name, int age): name(name), age(age) {};

    string toString();
};

#endif // PERSON_2_H_

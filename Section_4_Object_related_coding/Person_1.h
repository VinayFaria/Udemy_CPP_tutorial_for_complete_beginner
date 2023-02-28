#ifndef PERSON_1_H_
#define PERSON_1_H_

#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person();
    Person(string name, int age);

    string toString();
};

#endif // PERSON_1_H_

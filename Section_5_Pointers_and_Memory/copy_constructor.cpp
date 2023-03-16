// Application: Initializes an object with an existing object of the same class

#include <iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    Animal() {cout << "New animal is born!" << endl;};
    // Animal(const Animal &other) {cout << "Animal born by copying!" << endl;}; // Blanked out our own copy constructor, but we can give default variable value also, example below
    Animal(const Animal &other): name(other.name) {cout << "Animal born by copying!" << endl;}; // A copy constructor is a member function that initializes an object using another object of the same class.
    void setName(string name){this->name = name;}; // setName is a member function, i.e. it of a class is a function that has its definition or its prototype within the class definition like any other variable.
    void speak() const {cout << "This is my name: " << name << endl;}
};

int main() {

    Animal animal1;

    animal1.setName("Charlie");

    Animal animal2 = animal1;   // Copy constructor is called here
    cout << "===============" << endl;
    animal2.speak();
    animal2.setName("Tommy");

    animal1.speak();
    animal2.speak();

    Animal animal3(animal1);    // Copy constructor is called here also
    cout << "===============" << endl;
    animal3.speak();
    animal3.setName("Cooper");
    animal3.speak();

    return 0;
}

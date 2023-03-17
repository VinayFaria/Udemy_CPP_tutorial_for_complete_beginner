#include <iostream>
using namespace std;

class Animal{
private:
    string name;
public:
    // Constructor
    Animal() {
        cout << "Animal is born!" << endl;
    }
    // Copy constructor
    Animal(const Animal &other):
            name(other.name) {
        cout << "Animal born using copying" << endl;
    }
    //Destructor
    ~Animal() {
        cout << "Animal died" << endl;
    }
    // member function
    void setName(string name) {
        this->name = name;
    }
    // member function
    void speak() {
        cout << "My name is " << name << endl;
    }
};

Animal *createAnimal() {
    Animal *pAnimal = new Animal();
    pAnimal->setName("Jake");
    return pAnimal;
}

int main() {
    Animal *pFrog = createAnimal();

    pFrog->speak();

    delete pFrog;

    return 0;
}

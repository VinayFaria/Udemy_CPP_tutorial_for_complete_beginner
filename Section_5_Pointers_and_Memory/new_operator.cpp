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

int main() {
    // The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available,
    // a new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.
    Animal *pDog = new Animal();    // This is custom data types, for which a constructor is required for initializing the value
    cout << pDog << endl;   // prints address of pDog
    pDog->setName("Charlie");   // arrow -> syntax refers to method
    pDog->speak();
    // it is the programmer’s responsibility to deallocate dynamically allocated memory, programmers are provided delete operator
    delete pDog;
    // pDog->speak(); // garbage output
    cout << pDog << endl;
    cout << sizeof(pDog) << endl;

    return 0;
}

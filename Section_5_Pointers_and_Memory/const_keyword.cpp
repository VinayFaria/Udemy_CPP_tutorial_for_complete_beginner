#include <iostream>
#include <iomanip>
using namespace std;

class Animal {
private:
    // name is instance variable
    string name;
public:
    // setName, speak is instance method
    void setName(string name) {this->name = name;};
    void speak() const {cout << "This is my name: " << name << endl;};
    // In the non-const method you can change the instance members, which you cannot do in the const version.
    //void speak() {name = "Tommy"; cout << "This is my name: " << name << endl; }; // Valid
    //void speak() const {name = "tommy"; cout << "This is my name: " << name << endl; }; // Invalid
};

int main() {
    const double pi = 3.141592654;
    // pi = 3.414; // cannot change
    cout << setprecision(10) << pi << endl;

    Animal animal;
    animal.setName("Charlie");
    animal.speak();

    int value = 1;
    int *pValue = &value;
    // const int *pValue = &value;  // pointer pointing to a constant int, int value cannot be changed
    // int * const pValue = &value; // const pointer address cannot be changed
    // const int * const pValue = &value;

    cout << *pValue << endl;

    int number = 2;
    pValue = &number;   // Error with this line if we declare: int const *pValue = &value;
    *pValue = 12;   // Error with this line if we declare: const int *pValue = &value;
    // Error with both the above lines: const int const *pValue = &value;

    cout << *pValue << endl;

    return 0;
}

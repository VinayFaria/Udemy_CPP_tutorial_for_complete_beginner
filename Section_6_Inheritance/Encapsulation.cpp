// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
// To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
// If you want others to read or modify the value of a private member, you can provide public get and set methods.

#include <iostream>
using namespace std;

class User {
private:
    string name;
private:
    string getName() {return name;}

public:
    User(string name): name(name) {}
    void info() {cout << "My name is: " << getName() << endl;}
};

int main() {
    User user1("Larry");
    user1.info();
    // user1.name = "Page"; // User::name is private within this context

    return 0;
}

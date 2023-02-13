#include <iostream>
using namespace std;

int main() {
    string name; // If you define type of "name" as "int" and give string then it will not take "age" input
    cout << "Enter your name: " << flush; // "<<" is called insertion operator
    cin >> name; // ">>" is called extraction operator

    int age;
    cout << "Enter your age: " << flush;
    cin >> age;

    cout << name << " is " << age << " years in age" << endl;

    return 0;
}

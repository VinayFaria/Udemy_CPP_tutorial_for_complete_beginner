#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string name = "Harry";
    int age = 28;

    stringstream ss;

    ss << "Name is " + name + "; Age is ";
    ss << age;

    string person = ss.str();

    cout << person << endl;

    return 0;
}

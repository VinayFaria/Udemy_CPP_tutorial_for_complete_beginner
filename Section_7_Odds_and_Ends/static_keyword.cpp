#include <iostream>
using namespace std;

// Usually in the .h header file
class Person {
public:
    // Initialization of const must be done right here
    static float constexpr pi = 3.141592;
    static int count1;
    static int count2;

private:
    string name = "no_name";
    int id;

public:
    Person() {
        id = ++count1;  // prefix increment
    }

    int get_ID() {
        return id;
    }

    string get_Name() {
        return name;
    }

    static void show_Info() {
        cout << count1 << endl;
    }

    int prefix() {
        int dummy = ++count2;
        return dummy;
    }

    int postfix() {
        int dummy = count2++;
        return dummy;
    }
};

// Usually to be initialized .cpp source file
int Person::count1 = 0;
int Person::count2 = 0;

int main() {
    int dummy;
    // Define and output a public static constant
    cout << Person::pi << endl;

    // Define and output a non-static field
    Person p1;
    cout << "Object 1 name: " << p1.get_Name() << endl;

    // Output a static field with static method
    Person::show_Info();

    // Try incrementing static field with postfix and prefix increment operators
    cout << "Before prefix increment: " << Person::count2 << endl;
    dummy = p1.prefix();
    cout << "After prefix increment: " << dummy << endl;
    dummy = p1.postfix();
    cout << "Applying postfix increment: " << dummy << endl;

    // Try assigning object ID based on static count incremented in constructor
    cout << "Object 1 ID: " << p1.get_ID() << endl;
    Person p2;
    cout << "Object 2 ID: " << p2.get_ID() << endl;

    return 0;
}

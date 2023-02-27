#include <iostream>
#include "Rooms.cpp"

using namespace std;

int main() {

    Rooms room1;
    Rooms room2(2);
    Rooms room3(3, "Sonu, Monu, Dholu");

    cout << room1.toString() << endl;
    cout << room2.toString() << endl;
    cout << room3.toString() << endl;

    return 0;
}

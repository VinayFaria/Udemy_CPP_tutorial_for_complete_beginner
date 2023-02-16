#include <iostream>

using namespace std;

/*
== equality test
!= not equals
< less than
> greater than
<= less than equal to
>= greater than equal to
*/

int main() {
    int value1 = 5;
    int value2 = 10;

    if (value1 > 5) {
        cout << "Condition 1 met" << endl;
    } else {
        cout << "Condition 1 not met" << endl;
    }

    if (value1 %2 == 0 && value2 %2 == 0) {
        cout << "Condition 2 met" << endl;
    } else {
        cout << "Condition 2 not met" << endl;
    }

    if (value1 %2 != 0 || value2 %2 == 0) {
        cout << "Condition 3 met" << endl;
    } else {
        cout << "Condition 3 not met" << endl;
    }

    if (value1 >= 0 && value2 >= 0 || value1 < 5 && value2 < 10) { // confusing
        cout << "Condition 4 met" << endl;
    } else {
        cout << "Condition 4 not met" << endl;
    }

    if ((value1 >= 0 && value2 >= 0) || (value1 < 10 && value2 < 10)) { // understandable
        cout << "Condition 5 met" << endl;
    } else {
        cout << "Condition 5 not met" << endl;
    }

    bool condition1 = (value1 >= 0 && value2 >= 0);
    cout << condition1 << endl;
    bool condition2 = (value1 < 10 && value2 < 10);
    cout << condition2 << endl;

    if (condition1 && condition2) { // understandable
        cout << "Condition 6 met" << endl;
    } else {
        cout << "Condition 6 not met" << endl;
    }

    return 0;
}

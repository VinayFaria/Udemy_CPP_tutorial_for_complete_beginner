#include <iostream>

using namespace std;

// + (Addition), - (Subtraction), * (Multiplication), / (Division), +=  (Add AND assignment), -= (Subtract AND assignment), /= (divide AND assignment), % (Modulus), %= (modulus AND assignment): precedence
// ++ (Increment), -- (Decrement)

void convert_to_hour_min_second(int seconds) {
    int hours = seconds/3600;
    int minutes = (seconds%3600)/60;
    int remaining_seconds = ((seconds%3600)%60);
    cout << hours << ", " << minutes << ", " << remaining_seconds << endl;
}

int main() {
    double value1 = 7/2;    // integer divide by integer will always discard integer

    int value2 = (int)7.3;

    int value3 = 8;
    value3 += 3;    // value3 = value3 + 3

    int value4 = 8;
    value4 /= 3;    // value3 = value3 / 3

    // Take large number of seconds and convert it into hours, minutes, seconds.
    cout << "Number of seconds: " << flush;
    int seconds;
    cin >> seconds;

    // cout << "In hours, minutes, seconds: " << convert_to_hour_min_second(seconds) << endl; // will throw error, no match for operator<< c++
    cout << "In hours, minutes, seconds: " << flush;
    convert_to_hour_min_second(seconds);


    // Write a for loop that iterates 10000 times, outputs a dot (on same line) every 100 iteration.
    for (int i=1; i <=10000; i++) {
        if ((i%100) == 0) {
            cout << i << ". " << flush;
        }
    }

    return 0;
}

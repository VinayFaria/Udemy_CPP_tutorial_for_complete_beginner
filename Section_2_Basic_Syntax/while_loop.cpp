#include <iostream>

using namespace std;

int main() {
    int i = 0;

    // while (true) will run loop infinitely
    while(i < 5) {
        cout << "This is iteration number " << i << endl;
        i++; // i = i + 1; i += 1, are different ways to increment by 1
    }

    cout << "Iteration over, closing program..." << endl;

    return 0;
}

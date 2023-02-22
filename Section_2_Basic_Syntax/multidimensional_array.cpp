#include <iostream>

using namespace std;

int main() {
    int multiples[10][10];

    for(int i = 1; i<11; i++) {
        for(int j = 1; j<11; j++) {
            multiples[i-1][j-1] = i*j;
        }
    }

    for(int i = 1; i<11; i++) {
        for(int j = 1; j<11; j++) {
            cout << multiples[i-1][j-1] << " " << flush;
        }
        cout << endl;
    }

    return 0;
}

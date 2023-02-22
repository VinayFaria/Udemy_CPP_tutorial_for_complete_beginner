#include <iostream>

using namespace std;

int main() {
    int values[] = {1,5,0,6,4};

    cout << sizeof(values) << endl;
    cout << sizeof(int) << endl;

    for(int i = 0; i < sizeof(values)/sizeof(int); i++) {
        cout << values[i] << " " << flush;
    }

    return 0;
}

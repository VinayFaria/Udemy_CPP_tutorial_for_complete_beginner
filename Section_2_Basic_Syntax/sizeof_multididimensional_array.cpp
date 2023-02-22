#include <iostream>

using namespace std;

int main() {
    string texts[][3] = {
        {"teacher", "student", "class"},
        {"Lotus", "Rose", "Lilly"}
    };

    for(int i = 0; i<sizeof(texts)/sizeof(texts[0]); i++) {
        for(int j = 0; j<sizeof(texts[0])/sizeof(string); j++) {
            cout << texts[i][j] << " " << flush;
        }
        cout << endl;
    }

    return 0;
}

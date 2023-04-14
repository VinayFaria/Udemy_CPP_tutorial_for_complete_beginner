#include <iostream>

using namespace std;

int main() {
    // color wanted: 0xFF123456

    unsigned char alpha = 0xFF;
    unsigned char red = 0x12;
    unsigned char green = 0x34;
    unsigned char blue = 0x56;

    unsigned int color = 0;

    color += alpha;
    color <<= 8;
    color += red;
    color <<= 8;
    color += green;
    color <<= 8;
    color += blue;

    cout << hex << color << endl;

    return 0;
}

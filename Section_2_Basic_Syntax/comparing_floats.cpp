// limitation: float has 7 decimal digits of precision up to which it stores correctly for one digit integer part, if we try to compare with
// exact 1.1 then it will not be equal
// for understanding floating point representation: https://www.youtube.com/watch?v=NTwX21R8UE8
// check with this tool to know why 1.1 is converted to 1.100000024: https://www.h-schmidt.net/FloatConverter/IEEE754.html

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    float value = 1.1;

    if (value == 1.1) {
        cout << "The number is equal :)" << endl;
    }
    else {
        cout << "The number is not equal :(" << endl;
    }

    cout << setprecision(10) << value << endl; // setprecision(10) means show 10 digits overall

    return 0;
}

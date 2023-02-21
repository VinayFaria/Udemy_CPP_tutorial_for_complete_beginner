#include <iostream>

using namespace std;

int main() {
    /*
    The below for loop is valid and it is used as an infinite loop
    for (;;) {
        cout << "hello" << endl;
    }
    */
    /*
    for (statement 1; statement 2; statement 3){
        // code block to be executed
    }
    Statement 1 is executed (one time) before the execution of the code block.
    Statement 2 defines the condition for executing the code block.
    Statement 3 is executed (every time) after the code block has been executed.
    */

    for(int i = 0; i <= 25; i=i+5) {
        cout << "This is iteration number " << i << endl;
    }

    // cout << i << endl; // This will throw error as 'i' was not declared in this scope

    return 0;
}

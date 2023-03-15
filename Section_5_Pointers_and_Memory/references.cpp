#include <iostream>

using namespace std;

void changeSomething(string &change_var){
    change_var = "final";
}

int main() {
    string text1 = "hello";
    string &text2 = text1; // Whenever we will call text2 it will get referenced to text1, because text2 has same address of text1.
    cout << &text1 << ", " << &text2  << ", " << text2<< endl;
    cout << text1 << flush;
    text2 = "world";
    cout << " -> " << text1 << endl;

    string text3 = "initial";
    changeSomething(text3);
    cout << text3 << endl;

    return 0;
}

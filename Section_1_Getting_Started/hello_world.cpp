// Practicing c++ from the course "C++ Tutorial for Complete Beginners", this is the first file "Hello World"
// Running from cmd: "g++ -o output_file_name  source.cpp" will create output_file_name.exe after that running this file we will get output
// Display contents of c++ file: type source.cpp

// # indicates that the following line is a preprocessor directive, e.g. #define or #include
// #include is a preprocessor directive that tells the preprocessor to include header files in the program.
// < > indicate the start and end of the file name to be included.
// iostream is a header file that contains functions for input/output operations (cin and cout).
// To sum it up: Dear preprocessor, please include all the contents of the header file iostream at the very beginning of this program before compiler starts the actual compilation of the code.
// https://stackoverflow.com/questions/22645097/what-does-include-iostream-do
#include <iostream>

// “using namespace std” means we use the namespace named std. “std” is an abbreviation for standard. So that means we use all the things with in “std” namespace.
// If we don’t want to use this line of code, we can use the things in this namespace like this. std::cout, std::endl.
using namespace std;

//  ‘int main’ means that our function needs to return some integer at the end of the execution.
int main(){
    cout << "Hello World" << endl; // cout << endl inserts a new line and flushes the stream(output buffer), whereas cout << “\n” just inserts a new line.
    return 0; // return 0 means the successful execution of a program.
}

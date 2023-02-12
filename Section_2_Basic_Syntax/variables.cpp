#include <iostream>
using namespace std;

int main() {
    int number_of_cats = 4; // The int keyword is used to indicate integers. Its size is usually 4 bytes. Meaning, it can store values from -2147483648 to 2147483647.
    int number_of_dogs = 6;
    int number_of_animals = number_of_cats + number_of_dogs;

    cout << "Number of dogs: " << number_of_dogs << endl;
    cout << "Number of cats: " << number_of_cats << endl;
    cout << "Total number of animals: " << number_of_animals << endl;

    cout << "one new dog acquired" << endl;
    number_of_dogs = number_of_dogs + 1;
    cout << "Number of dogs: " << number_of_dogs << endl;

    cout << "one cat ran away" << endl;
    number_of_cats = number_of_cats - 1;
    cout << "Number of cats: " << number_of_cats << endl;

    return 0;
}

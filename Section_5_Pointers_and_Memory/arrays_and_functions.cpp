#include <iostream>
using namespace std;

void show1(const int nElements, string texts[]) {
    // cout << sizeof(texts) << endl; // return size of pointer
    cout << texts << ", " << *texts << ", " << &texts << endl;
    for (int i = 0; i<nElements; i++) {
        cout << texts[i] << endl;
    }
}

void show2(const int nElements, string *texts) {
    for (int i = 0; i<nElements; i++) {
        cout << texts[i] << endl;
    }
}

void show3(string (&texts)[3]) {
    for (int i = 0; i < sizeof(texts)/sizeof(string); i++) {
        cout << texts[i] << endl;
    }
}

char *getMemory() {
    char *pMem = new char[100];
    cout << "Memory block created" << endl;
    return pMem;
}

void freeMemory(char *pMem) {
    cout << "Memory block destroyed" << endl;
    delete [] pMem;
}

int main() {
    string fruits[] = {"apple", "banana", "cherry"};
    int n = sizeof(fruits)/sizeof(string);
    show1(n, fruits);

    char *pMemory = getMemory();
    freeMemory(pMemory);

    return 0;
}

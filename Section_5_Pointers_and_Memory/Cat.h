#ifndef CAT_H_
#define CAT_H_
#include <iostream>

using namespace std;

namespace cats {
const string CATNAME = "Lucy";

class Cat{
public:
    Cat();
    // A virtual function in C++ is a base class member function that you can redefine in a derived class to achieve polymorphism
    virtual ~Cat();
    void speak();
};

}

#endif // CAT_H_

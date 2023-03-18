#ifndef ANIMALS_H_
#define ANIMALS_H_
#include <iostream>

using namespace std;

namespace jwp {
const string CATNAME = "Lily";

class Cat{
public:
    Cat();
    virtual ~Cat();
    void speak();
};

}

#endif // CAT_H_

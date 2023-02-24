/*
#ifndef HEADERFILE_H : checks whether HEADERFILE_H is not declared.
#define HEADERFILE_H : will declare HEADERFILE_H once #ifndef generates true.
#endif : is to know the scope of #ifndef i.e end of #ifndef
*/
#ifndef CAT_H_
#define CAT_H_

/*
A C++ class is like a blueprint for an object.
An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
Accessing a data member depends solely on the access control of that data member. This access control is given by Access modifiers in C++. There are three access modifiers : public, private and protected.
public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
There are 2 ways to define a member function: Inside class definition, Outside class definition (see file "Cat.cpp")
*/
class Cat{
public:
    void speak(); // speak is not defined by inside class definition
    void jump();
};

#endif // CAT_H_

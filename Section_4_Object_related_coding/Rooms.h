#ifndef ROOMS_H_
#define ROOMS_H_

#include <iostream>
using namespace std;

class Rooms {
private:
    int people_can_live;
    string name_of_people;
public:
    Rooms();
    Rooms(int people_live);
    Rooms(int people_live, string name_of_peoples);
    string toString();
};
#endif // ROOMS_H_

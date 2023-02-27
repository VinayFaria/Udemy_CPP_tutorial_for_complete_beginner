#include <iostream>
#include "Rooms.h"
#include <sstream>

Rooms::Rooms() {
    people_can_live = 2;
    name_of_people = "undefined";
}

Rooms::Rooms(int people_live) {
    people_can_live = people_live;
    name_of_people = "undefined";
}

Rooms::Rooms(int people_live, string name_of_peoples) {
    people_can_live = people_live;
    name_of_people = name_of_peoples;
}

string Rooms::toString() {
    stringstream ss;
    ss << "Number of people can live: ";
    ss << people_can_live;
    ss << "; name of people living: ";
    ss << name_of_people;

    return ss.str();
}

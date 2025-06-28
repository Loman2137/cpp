//
// Created by lomanski on 28.06.2025.
//

#ifndef EVENT_H
#define EVENT_H

#include <iostream>

using namespace std;

class Event {

    int day,month,year;
    int hour, minute;
    string name;

public:

    Event(string="event", int=1, int=1, int=2000, int=10, int=10);
    ~Event();
    void load();
    void show();



};

#endif //EVENT_H

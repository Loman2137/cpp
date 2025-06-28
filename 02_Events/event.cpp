//
// Created by lomanski on 28.06.2025.
//
#include <iostream>
#include "event.h"

using namespace std;

Event::Event(string name, int day, int month, int year, int hour, int minute) {
    this->name = name;
    this->day = day;
    this->month = month;
    this->year = year;
    this->hour = hour;
    this->minute = minute;
}
Event::~Event() = default;


void Event::load() {
    cout<<"Podaj nazwę, dzień miesiąc, rok, godzinę i minutę wydarzenia:"<<endl;
    cin>>name>>day>>month>>year>>hour>>minute;
};

void Event::show() {
    cout<<name<<" "<<day<<" "<<month<<" "<<year<<" "<<hour<<":"<<minute<<endl;
}
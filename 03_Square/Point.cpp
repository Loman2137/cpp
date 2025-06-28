//
// Created by lomanski on 28.06.2025.
//
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(string name, double x, double y) {
    this->name = name;
    this->x = x;
    this->y = y;
}

void Point::load() {
    cout<<"Give me name, x ,y"<<endl;
    cin >> this->name >> this->x >> this->y;
}

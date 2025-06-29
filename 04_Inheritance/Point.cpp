//
// Created by lomanski on 29.06.2025.
//

#include "Point.h"

using namespace std;

Point::Point(double x, double y, string name) {
    this->x = x;
    this->y = y;
    this->name = name;
}

void Point::show() {
    cout << name <<" ( "<<x<<", "<<y<<" )"<< endl;
}
//
// Created by lomanski on 28.06.2025.
//

#ifndef POINT_H
#define POINT_H
#include <iostream>
#include "Rectangle.h"

using namespace std;

class Point{

    string name;
    double x, y;

    public:
    Point(string="name",double=0,double=0);
    void load();

    friend void Var(Point pkt, Rectangle rec);

};

#endif //POINT_H

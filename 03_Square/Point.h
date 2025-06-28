//
// Created by lomanski on 28.06.2025.
//

#ifndef POINT_H
#define POINT_H
#include <iostream>


using namespace std;

class Rectangle;

class Point{

    string name;
    double x, y;

    public:
    Point(string="name",double=0,double=0);
    void load();

    friend bool Var(Rectangle rec, Point pkt);
};

#endif //POINT_H

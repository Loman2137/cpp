//
// Created by lomanski on 28.06.2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;

class Point;

class Rectangle {

    string name;
    double x,y,width,height;

    public:
    Rectangle(string="name",double=0, double=0, double=1, double=1);
    void load();

    friend bool Var(Rectangle rec, Point pkt);
};

#endif //RECTANGLE_H

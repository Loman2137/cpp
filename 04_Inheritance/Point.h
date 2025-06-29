//
// Created by lomanski on 29.06.2025.
//

#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;

class Point {
    double x,y;
    string name;

public:
    Point(double x, double y, string name);
    void show();



};

#endif //POINT_H

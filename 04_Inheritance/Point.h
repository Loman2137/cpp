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
    Point(double x=0, double y=0, string name="P");
    void show();

};

#endif //POINT_H

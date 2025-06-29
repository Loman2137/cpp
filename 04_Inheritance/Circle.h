//
// Created by lomanski on 29.06.2025.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"


class Circle:public Point {
    double r;
    string name;

    public:
    Circle(double x=0, double y=0, string name_p="P", double r=1, string name_c="C");
    void show();

};



#endif //CIRCLE_H

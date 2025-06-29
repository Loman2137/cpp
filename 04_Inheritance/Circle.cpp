//
// Created by lomanski on 29.06.2025.
//

#include "Circle.h"
#include <math.h>

Circle::Circle(double x, double y, string name_p, double r, string name_c) : Point(x,y,name_p) {
    this->r = r;
    this->name=name_c;
}

void Circle::show() {
    cout<<"Name: "<<name<<endl;
    cout<<"Center of Circle: ";
    Point::show();
    cout<<"Radius: "<<r<<endl;
    cout<<"Area: "<<M_PI*r*r<<endl;
}

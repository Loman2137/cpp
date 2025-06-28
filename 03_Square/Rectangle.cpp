//
// Created by lomanski on 28.06.2025.
//

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(string name, double x, double y, double width, double height) {
    this->name = name;
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

    void Rectangle::load() {
    cout<<"Give me name, x ,y, width, height"<<endl;
    cin >> this->name >> this->x >> this->y >> this->width >> this->height;
    }

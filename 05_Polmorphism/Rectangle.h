//
// Created by lomanski on 29.06.2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Form.h"


class Rectangle: public Form {
    float r;

    public:
    Rectangle(float r=1);
    virtual float surface();
};

#endif //RECTANGLE_H

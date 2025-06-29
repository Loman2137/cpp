//
// Created by lomanski on 29.06.2025.
//

#ifndef SQUARE_H
#define SQUARE_H
#include "Form.h"


class Square : public Form {
    float x;

public:
    Square(float x=1);
    virtual float surface();
};



#endif //SQUARE_H

//
// Created by lomanski on 29.06.2025.
//

#include "Rectangle.h"

#include <math.h>

Rectangle::Rectangle(double r) {
    this->r = r;
}

float Rectangle::surface() {
    return M_PI * r * r;
}

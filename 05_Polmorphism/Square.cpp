//
// Created by lomanski on 29.06.2025.
//

#include "Square.h"

Square::Square(float x) {
    this->x = x;
}

float Square::surface() {
    return x*x;
}


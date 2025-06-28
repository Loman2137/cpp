#include <iostream>
#include "Rectangle.h"
#include "Point.h"


bool Var(Rectangle rec, Point pkt) {
    return ((pkt.x>=rec.x)&&(pkt.x<=(rec.x+rec.width))&&
        (pkt.y>=rec.y)&&(pkt.y<=(rec.y+rec.height)));
}

int main() {

    Point p1("A", 1, 3);
    Rectangle r1("B", 1, 1, 10, 15);

    if (Var(r1, p1))
        cout<<"pkt należy do prostokata";
    else
        cout<<"pkt nie należy do prostokata";

    return 0;
}

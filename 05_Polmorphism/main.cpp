#include <iostream>

#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main() {
    Square s1(5.0f);
    Rectangle r1(2.5f);

    Form *wsk;

    wsk = &s1;
    cout<<wsk -> surface()<<endl;

    wsk = &r1;
    cout<<wsk -> surface()<<endl;


    return 0;
}
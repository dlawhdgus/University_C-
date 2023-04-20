#include <iostream>
using namespace std;

#include "Circle.h"

Circle :: Circle() {
    int radius = 1;
    cout << "반지름 " << radius << "원 생성" << endl;
};

Circle :: Circle(int r) {
    int radius = r;
    cout << "반지름" << radius << "원 생성" << endl;
};

double Circle::getArea() {
    return radius * radius * 3.14;
};
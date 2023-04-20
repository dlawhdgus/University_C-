#include <iostream>
using namespace std;

struct Circle {
    //기본 접근 지정자 : public, class : private
    Circle(int r) { radius = r; };
    double getArea();
private:
    int radius;
};

double Circle :: getArea() {
    return radius*radius*3.14;
};

int main() {
    Circle donut(3);
    cout << "면적은 " << donut.getArea() << endl;
}
#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    double getArea();
};

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    Circle pizza(10);
    
    Circle *p;
    p = &pizza;
    cout << p->getArea() << endl;   //p의 getArea() 함수를 . 대신에 -> 로 사용한다.
    cout << (*p).getArea() << endl; //이런식으로 사용 가능
}
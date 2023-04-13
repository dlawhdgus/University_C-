#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle :: Circle() : Circle(1) {};  //위임 생성자

// Circle::Circle() {                                       위임 생성자를 선언하지 않았다면 Circle객체의 매개변수가 없이 넘어오는 값을 받는 생성자 함수가 없다.
//     radius = 1;                                          매개변수 없이 넘어오는 생성자 함수를 사용하기 위해 위임 생성자를 사용한다
//     cout << "반지름 " << radius << "인 원 생성" << endl;     위임 생성자 : 중복되는 코드를 두번 적고 싶지 않기 때문에 사용한다.
// };


Circle :: Circle(int r) {
    radius = r;
    cout << "반지름" << radius << "원 생성" << endl;
};

double Circle :: getArea() {
    return  3.14 * radius * radius;
}

int main() {
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은" << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은" << area << endl;
}

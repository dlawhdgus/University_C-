#include <iostream>
using namespace std;

class hello {
public:
    void helloworld(string word)
    {
        cout << "HELLOWORLD" << word << endl;
    }
};

class Circle { // 클래스 선언부
public:
    int radius; // radius 선언
    double getArea();
};

double Circle ::getArea() { // 클래스 구현부
    return radius * radius * 3.14;
};

int main() {
    hello hi;
    hi.helloworld("hi hi");

    Circle pizza;
    pizza.radius = 10; // pizza,radius를 10으로 설정  *(선언 아님)
    double area = pizza.getArea();
    cout << area << endl;

    Circle donut;
    donut.radius = 30;
    double donut_area = donut.getArea();
    cout << donut_area << endl;
}
//소멸자 : 객체가 소며로디는 시점에서 자동으로 호추로디는 함수 : 오직 한번만 자동 호출, 임의로 호출 불가, 객체 메모리 소멸 직전 호출
//소멸자 만드는 이유 : 객체가 사라질 때 마무리 작업을 위해 | 실행 도중 동적으로 할당 받은 메모리 해제, 파일 저장 및 닫기, 네트워크 닫기
#include <iostream>
using namespace std;

class Circle {
public:
    int radius;

    Circle();
    Circle(int r);
    ~Circle();              //매개변수 없음, 리턴 없음, 오직 하나만 존재
    double getArea();
};

// Circle::Circle() {
//     radius = 1;
//     cout << "반지금" << radius << " 원 생성" << endl;
// };

// Circle::Circle(int r) {
//     radius = r;
//     cout << "반지금" << radius << " 원 생성" << endl;
// };

Circle :: Circle() : Circle(1) {};  //위임 생성자

Circle :: Circle(int r) {
    radius = r;
    cout << "반지금" << radius << " 원 생성" << endl;
}

Circle:: ~Circle() {        //소멸자 정의부분
    cout << "반지금" << radius << " 원 소멸" << endl;
};

double Circle::getArea() {
    return 3.14*radius*radius;
};

//실행 순서 : 전역 -> 지역
void f () {
    Circle Fdonut(100);
    Circle Fpizza(300);
};

int main() {
    Circle donut;
    Circle pizza(30);
    f();
    return 0;
};

Circle globaldonut(1000);
Circle globalpizza(2000);
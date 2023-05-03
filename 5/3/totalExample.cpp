#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    ~Circle() {}
    void setRadius(int r) { radius = r; }
    double getArea() { return radius*radius*3.14; }
};

Circle::Circle() {
    radius = 1;
};

int main() {
    cout << "생성하고 싶은 원의 개수는? : ";
    int n,radius;
    cin >> n;

    Circle *pArray = new Circle [n];
    for(int i = 0; i<n; i++) {
        cout << "원" << i+1 << " : ";
        cin >> radius;
        pArray[i].setRadius(radius);
    }

    int count = 0;
    Circle *p = pArray;
    for(int i = 0; i< n; i++) {
        cout << p->getArea() << ' ';
        count++;
        p++;
    }

    cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
    delete [] pArray;
}
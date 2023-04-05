#include <iostream>
using namespace std;

double area(int r);


int main() {
    int n=3;
    char c='#';
    cout << c << 5.5 << '-' << "hello" << boolalpha << true << endl;    //boolalpha << true or false를 넣으면 1,0이 아닌 그대로 출력된다
    cout << "n + 5 : " << n + 5 << endl;
    cout << "면적은 " << area(n) << endl;
}

double area(int r) {
    return 3.14*r*r;
}
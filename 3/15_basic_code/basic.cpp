#include <iostream>
using namespace std;

int g =20; //전역변수

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b, sum;
    cin >> a >> b; //입력 -> c언어 기준 scanf
    sum = a + b;
    cout << sum << "\n";    //출력 -> printf
    return 0;
}
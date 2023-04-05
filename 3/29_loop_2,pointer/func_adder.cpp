#include <iostream>
using namespace std;

int adder(int x, int y) {
    int sum;
    sum = x+y;
    return sum;
}

int main() {
    int n = adder(2342,6234);
    cout << "2342와 6234의 합은 " << n << "입니다" << endl;

    int a,b;
    cout << "두 정수를 입력하세요>> ";
    cin >> a >> b;
    n = adder(a,b);
    cout << a << "와" << b << "의 합은 " << n << "입니다" << endl;
}
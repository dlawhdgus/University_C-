#include <iostream>
using namespace std;

int g =20; //전역변수

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b, sum;
    cout << "정수를 입력해 주세요 >>  ";
    cin >> a >> b; //입력 -> c언어 기준 scanf
    sum = a+b;
    cout << "합은 >>  " << sum << '\n';
    cout << "합은 >>  " << add(a,b) << endl;    //cout(출력) -> printf, << : c언어 기준 "+"" 느낌, endl : c언어 기준 "\n" 한칸 내려주는 기능
    cout << "전역변수 g의 값은 >>  " << g << endl;
    int s = a != b;
    cout << s;
    return 0;
}
#include <iostream>
using namespace std;

int g =20; //전역변수

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b, sum;
    cin >> a >> b; //입력 -> c언어 기준 scanf
    sum = add(a,b);
    cout << sum << endl;    //cout(출력) -> printf, << : c언어 기준 "+"" 느낌, endl : c언어 기준 "\n" 한칸 내려주는 기능
    return 0;    
}
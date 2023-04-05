#include <iostream>
using namespace std;

int main() {
    //continue <= 반복문 처음으로 돌아가서 처음부터 실행
    int a,b,sum = 0;
    cout << "두개의 정수 입력 >> ";
    cin >> a >> b;
    for(int i =a; i<=b; i++) {
        sum += i;
    }
    cout << a << "에서 " << b << "까지 합은 : " << sum << endl;
}
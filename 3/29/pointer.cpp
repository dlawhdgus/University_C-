// 포인터 : 메모리의 주소값 ex) 금산로 47
// 포인터변수 -> 변수의 메모리 주소값을 저장하는 변수

#include <iostream>
using namespace std;

int main() {
    // int n = 10;
    // char m = 'a';
    // double l = 3.7;

    char i = 'a';
    char *j = &i;
    cout << j;

    // int a = int(m); // 문자열의 주소값을 출력할꺼면 문자가 들어간 변수를 강제형변환 시켜야한다 그렇지 않으면 대입한 문자가 출력된다

    // int *p = &n; // 포인터 변수 선언   p에는 값이 저장되는것이 아닌 주소를 저장한다
    // int *q = &a;
    // double *r = &l;

    // *q = 'a';
     
//     cout << "int " << p << endl;
//     cout << "char " << q << endl;
//     cout << "Double " << r << endl;
}
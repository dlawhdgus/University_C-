#include <iostream>
using namespace std;

int main() {
    int n[10];
    int i;
    int *p;

    for(i=0; i<10; i++) {           //배열 n을 3의 배수로 초기화
        *(n+i) = i*3;
    }

    p = n;
    for(i=0; i<10; i++) {           //포인터 p를 이영히여 배열 n을 출력
        cout << *(p+i) << ' ';
    }
    cout << endl;

    for(i=0; i<10; i++) {           //포인터 p를 이영히야 배열 n의 원소 값 2증가
        *p = *p +2;     //p의 값에 2를 더함
        p++;            // p의 주소값을 옮기는 작업 --> 만약 p의 주소가 1000이라면 p++을 통해 주소가 1004로 변한다
        cout << p << endl;      //p의 값이 들어있는 주소를 출력하는 코드 점점 올라감
    }

    for(i=0; i<10; i++) {           //n의 값 출력
        cout << n[i] << ' ';
    }
    cout << endl;
}
#include <iostream>
using namespace std;

int main() {
    int *p;
    p = new int;
    if(!p) {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    *p = 5;
    int n = *p;

    cout << "*p = " << *p << '\n';
    cout << "n = " << n << '\n';

    delete p;
}

//동적 할당 쓰는 이유 : 필요한 만큼 메모리를 할당하기 위해 사용
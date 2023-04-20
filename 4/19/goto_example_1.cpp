#include <iostream>
using namespace std;

int main() {
    int i = 0;
    loop:
    cout << i << endl;
    i++;
    if (i < 10) goto loop;   //loop: 로 이동
    return 0;
}
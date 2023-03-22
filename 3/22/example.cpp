#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c;
    cout << (a & b) << endl;
    cout << (c = a++) << endl;
    cout << boolalpha << (a!=b) << endl;    //boolalpha = 1을 true로 0을 false로 출력해줌
    cout << sizeof(int) << endl;
}
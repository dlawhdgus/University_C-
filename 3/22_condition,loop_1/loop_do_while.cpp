#include <iostream>
using namespace std;

int main() {
    int i,a,b,sum =0;
    cout << "두개의 정수 업력 >> ";
    cin >> a >> b;

    i=a;
    do {
        sum += i;
        i++;
    } while (i <= b);
    
    cout << a << "에서" << b << "까지 합은 : " << sum << endl;
}
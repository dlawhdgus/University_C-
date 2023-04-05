#include <iostream>
using namespace std;

int main() {
    // int i,a,b,sum =0;
    // cout << "두개의 정수 업력 >> ";
    // cin >> a >> b;

    // i=a;
    // while (i<=b) {
    //     sum += i;
    //     i++;
    // }
    
    // cout << a << "에서" << b << "까지 합은 : " << sum << endl;
    int a;
    while(true) {
        cout << "정수입력 >> ";
        cin >> a;
        if(a == 0) 
            break;
        if(a%3 != 0) {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
}
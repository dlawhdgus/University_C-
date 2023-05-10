#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    string address("서울시 성북구 삼선동 389");
    string copyAddress(address);
    char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'}; // C-스트링 
    string title(text); // "Love C++" 문자열을 가진 스트링 객체 생성
    // 스트링 출력
    cout << str << endl; // 빈 스트링. 아무 값도 출력되지 않음 
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;
}
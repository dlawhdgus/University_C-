#include <iostream>
#include <string>
using namespace std;

int main() {
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song + "를 부른 가수는 ";
    cout << "(힌트 : 첫 글자는 " << elvis[0] << ")?" << endl;

    getline(cin, singer);

    if(singer == elvis) {    //변수 안에 있는 값과 동일 해야함 elvis의 값
        cout << "정답입니다" << endl;
    } else {
        cout << "오답입니다" << endl;
    }
}
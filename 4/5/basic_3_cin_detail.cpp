#include <iostream>
using namespace std;

int main() {
    cout << "너비를 입력하세요 >> ";

    int width;
    cin >> width;

    cout << "높이를 입력하세요 >> ";

    int height;
    cin >> height;

    //cint >> width >> hight도 가능
    int area = width * height;

    cout << "면적은 >> " << area << endl;
}
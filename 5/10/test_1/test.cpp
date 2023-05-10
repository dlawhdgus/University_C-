#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int upperalpha[26] = {};
int loweralpha[26] = {};
int cnt;

int main() {
    string input;
    cout << "문자열 입력 : ";
    getline(cin, input);

    string sentence;


    for(int i=0; i<input.length(); i++) {
        if(isalpha(input[i])) { sentence += input[i]; }

        if(((int)sentence[i] >= 65 ) && ((int)sentence[i] >= 97)) {
            cnt = (int)sentence[i]-97;
            loweralpha[cnt] += 1;
        } else {
            cnt = (int)sentence[i]-65;
            upperalpha[cnt] += 1;
        }
    }

    for(int i=0; i<26; i++) {
        if(upperalpha[i] != 0) { cout << (char)(i+65) << " : " << upperalpha[cnt] << endl; }
        if(loweralpha[i] != 0) { cout << (char)(i+97) << " : " << loweralpha[cnt] << endl; }
    }
}



//순서 문자열 입력 --> 알파벳 필터 --> a,b,c 대소문자 개수 따로 출력
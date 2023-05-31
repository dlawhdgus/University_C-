#include <iostream>
#include <string>
using namespace std;

int upperalpha[26] = {};
int loweralpha[26] = {};

int main() {
    string input;
    cout << "문자열 입력: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            continue;
        }

        if (isalpha(input[i])) {
            if (islower(input[i])) {
                int cnt = input[i] - 'a';
                loweralpha[cnt] += 1;
            } else if (isupper(input[i])) {
                int cnt = input[i] - 'A';
                upperalpha[cnt] += 1;
            }
        }
    }
    cout << "대문자" << endl;
    for (int i = 0; i < 26; i++) {
        if (upperalpha[i] != 0) {
            cout << static_cast<char>('A' + i) << " : " << upperalpha[i] << endl;
        }
    }
    cout << "소문자" << endl;
    for (int i = 0; i < 26; i++) {
        if (loweralpha[i] != 0) {
            cout << static_cast<char>('a' + i) << " : " << loweralpha[i] << endl;
        }
    }

    return 0;
}

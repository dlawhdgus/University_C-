#include <iostream>
using namespace std;

char& find(char s[], int index) {
    return s[index];
};

int main() {
    char name[] = "Mike";
    cout << name << endl;

    find(name,0) = 'S';
    cout << name << endl;

    char& reg = find(name, 2);
    reg = 't';
    cout << name << endl;
}
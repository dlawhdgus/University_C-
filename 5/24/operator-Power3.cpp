#include <iostream>
using namespace std;

class Power {
    int kick;
    int punch;
public:
    Power(int kick =0, int punch=0) {
        this-> kick = kick; this->punch = punch;
    }
    void show();
    Power& operator << (int n);
};

void Power::show() {
    cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator << (int n) {
    kick += n;
    punch += n;
    return *this;
}

int main() {
    Power a(3,4);
    a.show();
    a << 5 << 6 << 4;
    a.show();
}
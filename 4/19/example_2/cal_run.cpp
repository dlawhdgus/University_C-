#include <iostream>
using namespace std;

#include "cal.h"
#include "cal_run.h"

void Calculator::run() {
    cout << "두개의 수를 입력하세요>> ";
    int a,b;
    cin >> a >> b;
    Adder adder(a,b);
    cout << adder.process();
};
#include <stdio.h>

int g = 20; //전역변수

int add(int x, int y) {  //전역함수
    return x + y;
}

int main () {
    int a, b, sum;
    scanf("%d %d",&a,&b);
    sum = a + b;
    printf("%d\n",sum);
    return 0;
}
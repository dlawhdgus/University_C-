#include <iostream>  //프로세스에게 보내는 지시   <- iostream(헤더파일)에 있는 파일을 포함해라 라는 뜻
//using namespace std; <-- std를 생략하고 사용가능

int main() {
    std::cout << "hello world" << std::endl;      //using을 입력하였다면 -> std 쓸필요 x, 적지 않았기 때문에 'std::' 를 붙혀야 함
    return 0;   //필수
}
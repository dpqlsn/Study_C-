// a+b를 입략 받아 출력하는 코드

#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << std::endl;

    // cin은 문자를 입력 받을 때 사용하고 화살표 >>
    // cout은 값을 출략할때 사용하고 화살표 << 
    // endl은 꼭 사용하지 않아도 되지만 줄바꿈이 필요하거나 출력 버퍼를 비울 때 사용됨
    return 0;
}
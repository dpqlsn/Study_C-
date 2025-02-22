#include <iostream>

using namespace std;

int main(){
    // 열거체 : C++ 에서 기호 상수를 만드는 것에 대한 또 다른 방법

    enum spectrum { red, orange, yellow, green, blue, violet, indigo, white };
    /*
    1. 스팩트럼을 새로운 데이터형 이름으로 만듦
    2. red, orange, yeiiow 등등 0~7 까지 정수 값을 각각 나타내는 기호 상수로 만듦
    */

    spectrum a = orange;
    // a 열거체에선 사용된 열거자들이라고 불리는 열거자들의 값만 대입할 수 있음
    // 열거자들을 상수로써, 기호 상수로써 관리하기 때문에 산술연산 적용을 못함
    // ex ) spectrum a = orange + yellow; 는 지원안됨

    int b;
    b = blue;
    // 열거자값은 대입가능
    b = blue + 3; // blue가 4라는 의미를 가지고 있어서 성립됨

    return 0;
}
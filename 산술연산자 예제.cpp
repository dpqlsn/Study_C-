#include <iostream>

using namespace std;

/*
+ : 두 개의 피련산자의 합
- : 두 개의 피련산자의 차
* : 두 개의 피련산자의 곱
/ : 첫번째 피연산자에서 두번째 피연산자를 나눔
>> : 두 개의 피련산자가 모두 정수면 결과값은 몫
% : 첫번째 피연산자에서 두번째 피연산자를 나누어 나머지 계산
*/

int main() {
    int a = 10;
    int b = 3;

    int c = a+b;
    int d = a-b;
    int e = a*b;
    int f = a/b;
    int g = a%b;

    cout << "c : " << c << endl;
    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
    cout << "f : " << f << endl;
    cout << "g : " << g << endl;

    return 0;
}

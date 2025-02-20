#include <iostream>

using namespace std;

int main(){

    /* 
    데이터형 변환
    1. 특정 데이터형의 변수에 다른 데아터형의 값을 대입했을 때
    2. 수식에 데이터형을 혼합하여 사용했을 때
    3. 함수에 매개변수를 전달할 때
    */

    int a = 3.23456;
    cout << a << endl;

    /*
    강제적으로 형변환을 할 때
    typename(a)  (typename)a  static_cast<typeName>
    */

    char ch = 'M';
    cout << (int)ch << " " << endl;
    cout << static_cast<int>(ch) << endl;

    return 0;
}
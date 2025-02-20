#include <iostream>
#include <climits>
using namespace std; 
// climits 안의 정의되어 있는 기호 상수들 사용 가능
// using 지시어를 통해 std namespace 안에 선언된 모든 요소를 사용할 수 있음

int main(){
    /* 변수 선언의 규칙
    1. 숫자로 변수를 시작할 수 없음
    2. C++에서 사용하고 았는 키워드를 사용할 수 없음
    3. white space를 사용할 수 없음 */
    // ex ) int 77aaa; return; 

    // 올바른 표기법
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int는 " << sizeof n_int << "바이트 이다." << endl; 
    // 출력값 : int는 4바이트 이다.
    // << 은 컴파일이 진행되는 방향

    unsigned int a; // 자료형 앞에 키워드로 붙게 되면 음의 값을 저장할 수 없게 됨

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    // 공용체 : 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음

    union Union{
        int intVal;
        long longVal;
        float floatVal;
    };

    Union test;
    test.intVal = 3;
    cout << test.intVal << endl;
    test.longVal = 33;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    test.floatVal = 3.3;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    cout << test.floatVal << endl;

    /*  출력결과
    3
    33
    33
    1079194419
    1079194419
    3.3
    */

    // 이 처럼 공용체인 유니온은 한 번에 한 가지 데이터만 보관을 할 수 있음
    // 그래서 다른 데이터형의 값을 보관할 때마다 데이터 손실이 일어남 >> 동시 사용이 불가

    return 0;
}
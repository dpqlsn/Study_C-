#include <iostream>

using namespace std;

int main(){
    double* p3 = new double[3];
    p3[0] = 0.2; // p3 배열을 이름처럼 취급
    p3[1] = 0.5;
    p3[2] = 0.9;

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 +1; // 포인터 증가, 더블형 데이터 공간 한개를 가르킴
    
    cout << "Now p3[0] os " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 -1; // 다시 시작 위치 지시
    delete[] p3; // 배열 메모리 해제
    //cin.get()

    return 0;
}
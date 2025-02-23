#include <iostream>

using namespace std;

// 올바른 함수 선언 (반환형 void)
void countDown(int);

int fuc(int);

int main(){
    // 재귀 호출: C++에서 함수는 자기 자신을 호출할 수 있음. 보통 if문과 함께 사용
    // 함수를 지시하는 포인터는 어떤 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용
    /* 위 설명의 조건
    1. 함수의 주소를 얻는다
    2. 함수를 지시하는 포인터를 선언
    3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출
    */

    /* 기본형태
    void recurs(a) {
        if (condition) recurs(a);
    }
    */

    countDown(5);

    int (*pf)(int);
    pf = fuc; // pf는 함수 이름과 같은 혁할을 수행
    cout << (*pf)(3) << endl;

    return 0;
}

// 함수 정의 (반환형 void)
// 반환형만 다르면 오버로딩이 불가능함
void countDown(int n) {
    cout << "Counting " << n << endl;
    if (n > 0) countDown(n - 1);
    cout << n << " 번째 재귀함수" << endl;
}

int fuc(int a){
    return a+1;
}
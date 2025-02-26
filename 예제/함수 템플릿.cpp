#include <iostream>

using namespace std;

// class 혹은 typename 을 사용해줘도 무방함
template <class Any>
Any sum(Any, Any);
template <class Any>
Any sum(int, Any);

int main(){
    // 함수 템플릿 : 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
    // 컴파일러가 그 데이터형에 맞는 변수를 생성한다는 것을 의미
    // 일반화 : 특정한 데이터 형에 귀속되지 않고 일반적으로 범용할 수 있도록 만드는 것
    int a = 3;
    int b = 4;
    // cout << sum(a, b) << endl;
    // sum(Any, Any); 와 Any sum(int, Any);이 함께 매칭되어 사용할 수 없음

    float c = 3;14;
    float d = 1.592;
    cout << sum(c, d) << endl;
    cout << sum(a, c) << endl;

    return 0;
}

template <class Any>
Any sum(Any a, Any b){
    return a + b;
}

template <class Any>
Any sum(int a, Any b){
    return a + b;
}
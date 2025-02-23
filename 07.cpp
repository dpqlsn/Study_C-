#include <iostream>

using namespace std;

/* 
1. 리턴 값이 있는 타입
typeName functionName(parameterList){
    statement(s);
    return value;
}

2. 리턴 값이 없는 타입
void functionName(parameterList){
    statement(s);
    return ; 생략가능
}
*/

const float PIE = 3.14;
void cheers(int n);
float circle(int x);

int main(){
    int a;
    cout << "하나의 수를 입력하세요\n" << endl;
    cin >> a;
    cheers(a);

    int b;
    cout << "원의 반지름 길이를 입력하세요\n" << endl;
    cin >> b;
    float c = circle(b);
    cout << "원의 넓이는 " << c << " 입니다\n";
}

void cheers(int n) {
    for(int i=0; i<n; i++) {
        cout << "Cheers!\n" << endl;
    }
}

float circle(int x){
    return x * x * PIE;
}
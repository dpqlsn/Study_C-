#include <iostream>

using namespace std;

int main(){

    /*
    // 포인터 선언 방법
    int *a;
    int* a;
    int* b, c; // b는 포인터 변수, c는 int형 변수로 선언됨
    */

    int a=6;
    int* b;

    b = &a;
    
    cout << "a의 값" << a << endl;
    cout << "b의 값" << *b << endl;

    cout << "a의 주소" << &a << endl;
    cout << "*b의 주소" << b << endl;

    *b = *b + 1;

    cout << "이제 a의 값" << a << endl;

    return 0;
}
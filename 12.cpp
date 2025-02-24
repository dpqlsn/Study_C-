#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main(){
    // 참조 : 미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용 이름
    // 함수에 매개변수에 사용됨
    // & : 주소 연산자이자 참조 연산자로도 사용됨
    int wallet1 = 100;
    int wallet2 = 200;

    cout << "최초 상태" << endl;
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

    cout << "참조를 이용한 값의 교환\n";
    swapA(wallet1, wallet2);
    cout << "참조 교환 이후 상태\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

    cout << "포인터를 이용한 값의 교환\n";
    swapB(&wallet1, &wallet2);
    cout << "포인터를 이용한 교환 이후 상태\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

    cout << "값을 이용한 값의 교환\n";
    swapC(wallet1, wallet2);
    cout << "값을 이용한 교환 이후 상태\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
    // 기본적으로 함수에게 값으로 내용을 전달할 때는 함수는 그 값에 대한 복사본을 만듦
    // 원본에 대한 내용이 침해되지 않음
    
    return 0;
}

void swapA(int& a, int& b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void swapB(int* a, int* b){
    int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

void swapC(int a, int b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}
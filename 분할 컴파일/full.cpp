#include <iostream>

using namespace std;

// 코드 획기적으로 재사용이 가능 
struct MyStrcut{
    string name;
    int age;
};

void display(MyStrcut&);

// ------ 구조체를 정의하고 함수 원형을 선언하는 부분 ------
// 구조체 선언이나 함수들의 원형이 들어있는 부분은 헤더파일로 분류
// 헤더파일의 종류 : 함수 원형, #define이나 const 사용하는 기호 상수, (구조체, 클래스, 템플릿)선언, 인라인 함수

int main(){
    MyStrcut PandaCoding = {
        "Panda",
        26,
    };

    display(PandaCoding);
    return 0;
}

// ------ 구조체와 함수를 사용하는 메인 함수 부분 ------ 

void display(MyStrcut& temp){
    cout << "이름 : " << temp.name << endl;
    cout << "나이 : " << temp.age << endl;
}

// ------ 함수의 몸체를 정의하는 부분 ------ 
// 분할 컴파일은 위 세 부분을 나누어서 컴파일하는 방법
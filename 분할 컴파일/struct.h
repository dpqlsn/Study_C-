// 분할 컴파일 : C++는 프로그램을 구성하는 함수들의 별개의 파일에 넣는 것 권장
#ifndef STRUCT
#define STRUCT
#include <iostream>
// 헤더 파일을 여러 파일에 포함시킬 때에 반드시 단 한 번만 포함시켜야함 
// ifndef 부터 endif에 있는 구문들을 기호상수화 시키는 것 > 처음 포함시킨 것을 제외한 나머지를 컴파일러가 무시하게 만듦

using namespace std;

struct MyStruct
{
    string name;
    int age;
};

void display(MyStruct&);
#endif
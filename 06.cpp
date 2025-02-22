#include <iostream>

using namespace std;

int main(){
    /* new 연산자
    1. 어떤 데이터 형을 원하는지 new 연산자에게 알려주면
    2. new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아냄
    3. 그 블록의 주소 return
    */
    
    int* pointer = new int;
    // new int 부분은 int형 데이터를 지정할 수 있는 새로운 메모리가 필요하다고 알림
    // 그 후 알맞은 블록을 찾으면 pointer 부분에 리턴해줌
    // 포인터가 데이터의 객체를 지시하고 있음 즉, 메모리 제어권을 사용자에게 줌 

    // delete 연산자 : 사용한 메모리를 다시 메모리 폴로 환수하고 환수 된 메모리는 프로그램의 일부분에 다시 사용됨
    int* ps = new int;
    // 메모리 사용
    delete ps;

    /* 규칙
    1. new로 대입하지 않은 메모리는 delete가 안됨
    2. 같은 메모리 블록을 연달아 두 번 delete로 해제불가
    3. new[]로 메모리를 대입할 경우 delets[]로 해제
    4. 대괄호를 사용하지 않았다면 delete도 대괄호 사용금지
    */

    return 0;
}
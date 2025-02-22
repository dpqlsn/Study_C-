#include <iostream>

using namespace std;

struct Struct {
    char name[20];
    int age;
};

int main(){
    // 동적구조체 생성
    // temp* ps = new temp;

    Struct* temp = new Struct;

    cout << "당신의 이름을 입력하세요 \n";
    cin >> temp -> name; // . 대신 -> 사용해 멤버에 접근

    cout << "당신의 나이 입력하세요 \n";
    cin >> (*temp).age; // 앞에 *이 있으면 . 사용해 멤버에 접근

    cout << "안녕하세요!" << temp -> name << "씨!\n";
    cout << "당신은 " << temp -> age << "살 이군요\n";

    return 0;
}
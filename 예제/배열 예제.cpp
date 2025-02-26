#include <iostream>
#include <cstring> // strlen() 함수를 사용하기 위함

using namespace std;

int main(){

    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++programing";

    cout << "인녕하세요! 저는 " << name2;
    cout << "성함이 어떻게 되시나요?\n";
    cin >> name1; // 만일 이름이 Kim Yebeen 이면 화이트 스페이스를 만나기 전인 Kim만 카운트함
    cin.getline(name1, Size); // 위 상항을 방지하기 위하여 getline 또는 get 함수 사용
    cout << "음, " << name1 << "씨,당신의 이름은 "; 
    cout << strlen(name1) << " 자입니다만\n";
    cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다\n";
    cout << "이름이" << name1[0] << "자로 시작되는군요\n";
    name2[3]= '\0';
    cout << "제 이름의 처음 세문자는 같습니다 : ";
    cout << name2 << endl;

    return 0;
}
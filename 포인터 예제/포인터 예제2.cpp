#include <iostream>
#include <cstring>

using namespace std;

#define SIZE 20
int main(){
    char animal[SIZE];
    char* ps;

    cout << "동물의 이름을 입력하시오\n";;
    cin >> animal;

    ps = new char[strlen(animal) +1]; // strlen은 animal의 크기를 반환
    strcpy(ps, animal); // strcpy은 animal값을 ps에 복사

    cout << "입력하신 동물 이름을 복사했습니다" << endl;
    cout << "입력하신 동물 이름은" << animal << "이고 그 주소는 " << (int*)animal << " 입니다" << endl;
    cout << "복사된 동물 이름은" << ps << "이고 그 주소는 " << (int*)ps << " 입니다" << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    cout << "당신의 나이를 입력하세요\n";
    int age;
    cin >> age;

    if(age < 0 || age > 100) cout << "거짓말 하시면 안됩니다!\n";
    else if(20 <= age && age <= 29) cout << "당신은 20대 이군요?\n";
    else cout << "당신의 나이를 잘 모르겠습니다\n";

    return 0;
}
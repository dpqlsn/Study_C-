#include <iostream>

using namespace std;

int main(){

    /*
    1. cin을 통하여 string 객체에 키보드를 입력할 수 있음
    2. cout를 통하여 string 객체 디스플레이 가능
    3. 배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근 가능
    4. 배열을 다른 배열에 통째로 대입 가능
    */

    char char1[20];
    char char2[20] = "Abcde";
    string str1;
    string str2 = "fghij";
    // char1 = char2; 이 경우, 즉 char 은 배열을 통째로 대입할 수 없음 
    str1 = str2; // 그러나 string 은 가능

    cout << str1 << endl;
    cout << str1[0] << endl; // 이 경우 개별적인 문자로 접근이 가능하여 fghij 중 f 가 출력됨

    return 0;
}
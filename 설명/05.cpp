#include <iostream>

using namespace std;

int main(){
    // 배열 : 같은 데이터형의 집합
    // 구조체 : 다른 데이터형이 허용되는 데이터 집합

    // 에를 들어 축구선수로 치면 부가설명은 다 축구선수들의 설명
    // 그리하여 여러개의 변수가 아닌 하나의 집랍으로 나타내고 싶을 때 구조체 사용 

    struct Data {
        // 밑 변수들은 다 구성요소 
        string name; 
        string position;
        float weight;
        float height;
    } B; // 이렇게 중괄호 뒤에 변수명을 입력한다면 새로운 구조체를 만들지 않아도 자동으로 구조체가 만들어짐

    Data A; // 구조체 선언
    A.height = 183.6; // 구조체에 대응되는 멤버의 값
    A.position = "Striker"; 

    B = {}; // 각각 0에 해당되는 구조체 변수가 만들어짐

    // 구조체 배열 선언방법
    Data C[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    }; 

    cout << C[2].height << endl;
    
    return 0;
}
#include <iostream>
#include <climits>
using namespace std; 

int main(){
    char b = 'a';
    cout << b << endl;
    /* char c = "a"; 사용할 수 없음
    C++ 에서는 큰 따옴표와 작은 따옴표를 사용하는 상황이 다름
    ("")는 문자열을, 작은 문자열('')은 단일 문자를 사용 */

    /* C++ 에서는 NULL('0\') 문자를 만나야 문자열이 끝난 것을 알게 됨  
    "" >> 명시적으로 NULL 문자가 포함된 것 */ 

    bool a = 0;
    bool v = 10;
    bool c = 1;

    cout << a << "" << v << "" << c << endl;

    return 0;
} 
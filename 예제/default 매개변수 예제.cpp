#include <iostream> 

using namespace std;

const int SIZE = 8;
int sumArr(int*, int n = 1); 
// n = 1을 선언했으면 int sum = sumArr(arr, SIZE)에 SIZE 값이 없을 때 n=1이 되는 기본 값 

int main(){
    // 디폴트 매개변수
    // 함수 호출을 할 때 실제로 매개변수를 생략했을 경우 실제 매개변수 대산 사용되는 기본값

    int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64};
    int sum = sumArr(arr);
    // int sum = sumArr(arr, SIZE);

    cout << "함수의 총 합은 " << sum << "입니다." << endl;
    return 0;
}

int sumArr(int* arr, int n){
    int total = 0;

    for(int i = 0; i < n; i++)
    total += arr[i];

    return total;
}
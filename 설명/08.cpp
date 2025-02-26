#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int [], int); // int sumArr(int* , int);

int main(){
    int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << "size of arr " << sizeof arr << endl;
    // arr = &arr[0]
    int sum = sumArr(arr, SIZE);

    cout << "함수의 총합은 " << sum << "입니다\n";

    return 0; 
}

int sumArr(int arr[], int n) { // int sumArr(int* arr, int n) 
    // 배열이 첫 번째, 크기가 두 번째가 되어야 함 아니면 오류남
    // sumArr은 주소를 전달받은 것 
    cout << "size of arr " << sizeof arr << endl;
    int tot = 0;

    for(int i=0; i<n; i++) tot += arr[i];

    return tot;
} 
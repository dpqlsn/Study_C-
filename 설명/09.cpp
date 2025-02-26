#include <iostream>

using namespace std;

struct Time {
    int hour;
    int min;
};

const int minsPerHr = 60;
void showTime(Time); 

Time sum(Time*, Time*); 
int main() {
    // 구조체의 규모가 너무 커진다면 함수는 원본이 아는 복사본을 대상으로 작업

    Time day1 = { 5, 45 };
    Time day2 = { 4, 45 };

    Time tot = sum(&day1, &day2);
    cout << "이틀 간 소요시간 : ";
    showTime(tot);

    return 0;
}

Time sum (Time* t1, Time* t2){
    Time tot;

    // 값에서 멤버로 접근할 때 : .
    // 주소에서 멤버로 접근할 때 : -> 

    tot.min = (t1->min + t2->min) % minsPerHr;
    tot.hour = t1->hour + t2->hour + (t1->min + t2->min) / minsPerHr;

    return tot;

}

void showTime(Time t1){
    cout << t1.hour << "시간, " << t1.min << "분 입니다" << endl;
}
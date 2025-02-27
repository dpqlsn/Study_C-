#include<iostream>
#include"time.h"
using namespace std;

int main() {
	Time day1(1, 40);
	Time day2(2, 30);
	
	day1.show();
	day2.show();

	Time total;
	total = day1.operator+(day2);
	total.show();
    // 함수 호출 하듯 사용해도 됨

    Time t1(3, 45);

    t1.show();
    cout << t1;

	return 0;
}
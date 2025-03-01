#include<iostream>
#include"time.h"
using namespace std;

const int MAX = 3;

int main() {

	Time* times[MAX]; // 포인터로서 배열을 만듦
	int day;
	int hours;
	int mins;

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 원소를 정의합니다." << endl;
		cout << "시간을 입력하십시오." << endl;
		cin >> hours;
		cout << "분을 입력하십시오." << endl;
		cin >> mins;
		char check;
		cout << "일 정보가 있다면 1, 없다면 0을 입력하십시오." << endl;
		cin >> check;
		if (check == '0')
			times[i] = new Time(hours, mins);
		else {
			cout << "일을 입력하십시오." << endl;
			cin >> day;
			times[i] = new NewTime(hours, mins, day);
		}
	}

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 정보입니다." << endl;
		times[i]->show(); // NewTime에 대응되는 show가 동작한 것을 확인할 수 있음
	}

	for (int i = 0; i < MAX; i++) {
		delete times[i];
	}

	return 0;
}
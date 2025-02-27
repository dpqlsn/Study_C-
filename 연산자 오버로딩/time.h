#include <iostream>
#ifndef TIMEH
#define TIMEH

// 오버로딩 : 연산자들에게 다중적인 의미를 부여하는 것 
// << 연산자는 friend를 통하여 구현할 수 있음

class Time
{
private:
	int hours;
	int mins;

public:
    // 아무런 변수를 주지 않은 Time()과 int형 변수를 준 
    // Time(int, int);를 오버로딩해 생산자 만듦
	Time();
	Time(int, int);
    // 함수 구현 기능들
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
    // 오버로딩을 하기 위해선 operator를 사용하고 그 뒤 사용할 산술연산자를 붙임
    // 함수 호출 하듯 사용해도 됨
	Time operator*(int);
	void show();
	~Time();
	friend Time operator*(int n, Time& t) {
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

#endif //TIMEH
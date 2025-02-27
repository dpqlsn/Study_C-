#include <iostream>
#ifndef TIMEH
#define TIMEH

// friend : private 부분에 접근할 수 있는 통로
// 즉, 멤버 함수들과 동일한 접근 권한을 가짐

// 어떤 클래스의 이항 연산자를 오버로딩할 때 필요함

// 인터페이스 : 특정 기능을 구현할 것을 약속한 추상형식
// 좁은 의미 : 순수 가상 함수만을 갖는 클래스, 넓은 의미 : 앞으로 프로그램을 어떻게 짤 것 인가에 대한 약속

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	void show();
	~Time();
	friend Time operator*(int n, Time& t) { 
        // 멤머 연산자처럼 . 이나 -> 사용 불가 그러나 멤버 함수와 접근 권한은 같음
		return t * n;
	}
};

#endif //TIMEH
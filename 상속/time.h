#include <iostream>
#ifndef TIMEH
#define TIMEH

/* 상속의 기능
1. 기존의 클래스에 새로운 기능을 추가할 수 있음
2. 클래스가 나타내고 있는 데이터에 다른 것을 더 추가할 수 있음
3. 클레스 메서드가 동작하는 방식을 변경할 수 있음
*/

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
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time {
    /*
    1. 파생 클래스형의 객체 안에는 기초 클래스형의 데이터 멤버들이 저장됨
    2. 파생 클래스형의 객체는 기초 클래스형의 메서드들을 이용할 수 있음
    3. 파생 클래스는 자기 자신의 생성자를 필요로 함
    4. 파생 클래스는 부가적인 데이터 멤버들과 멤버 함수들을 임의로 추가할 수 있음
    */
private:
	int day;
public:
	NewTime(); // 매개변수가 하나도 없음
	NewTime(int, int, int); // 매개변수가 세개일때
	void print();
	
};
#endif // !TIMEH
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

// 다형 : 함수가 처해지는 상황에 따라서 동작을 달리 하는 것

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
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	virtual void show(); // virtual로 정의함
	// 퍼블릭 다형 상속을 위해서는 기초 클래스 메소드 파생 클레스에서 재정의
    // 가상 메서드를 사용해야함
    // 가상 메서드를 사용할 때 기초 클래스에서 가상메서드를 선언하면 그 함수는 기초 클래스 및 파생 클래스에서 모두 가상이 됨
    // 객체에 대한 참조를 사용하여 객체를 지시하는 포인터를 사용하여 가상 메서드가 호출되면 참조나 포인터를 위해 정의된 메서드를 사용하지 않고
    // 객체형을 위해 정의된 메서드를 사용 >> 동적 결합
    // 상속을 위해 기초 클래스로 사용할 클래스를 정의할 때 파생 클래스에서 다시 정의해야 되는 클래스 메서드를 가상 함수로 선언
};
#endif // !TIMEH
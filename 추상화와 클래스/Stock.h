#ifndef STOCK
#define STOCK
#include <iostream>

using namespace std;

// 클래스 : 추상화를 사용자 정의 데이터형으로 변환해주는수단
// 추상화 : 공통된 특징을 간결한 방식으로 이해하기 쉽게 표현하는 것
class Stock
{
private: // 비공개 멤버, 클래스 내에서만 접근 가능
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }

// private, public : 멤버에 대한 접근을 제어하는 역할 수행

public: // 공개 멤버, 클래스 외부에서도 접근 가능 
	void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock();
	~Stock();
};
#endif // !STOCK
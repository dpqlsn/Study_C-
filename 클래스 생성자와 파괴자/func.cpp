#include "Stock.h"

void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}
void Stock::show() {
	cout << "회사 명 : " << name << endl;
	cout << "주식 수 : " << shares << endl;
	cout << "주가 : " << share_val << endl;
	cout << "주식 총 가치 : " << total_val << endl;
}

Stock::Stock(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock() { // 클래스 이름을 선언하면 생성자, 리턴 값을 가질 수 없음
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}


Stock::~Stock() // 클래스 이름 앞에 ~이 붙으면 파괴자, 리턴 값을 가질 수 없고 선언된 데이터 형을 가지지 않음 + 매개변수도 못 가짐
// 사용자가 명시적으로 파괴자를 사용할 수 없음
{
	cout << name << "클래스가 소멸되었습니다. \n";
    // 클래스가 소멸될 때마다 자동으로 파괴자가 호출됨
}
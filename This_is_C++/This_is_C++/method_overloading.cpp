#include<iostream>
using namespace std;

class CMydata
{
	int m_nData;
public:
	CMydata() : m_nData(0) {}
	int getData() { return m_nData; }
	void setData(int nParam) { m_nData = nParam; }

	// 매개변수가 double인 경우로 다중 정의
	// 1. 의도적으로 잘못된 입력으로 다중 정의
	void setData(double nParam) { m_nData = 0; }
	// 2. 함수가 호출되는 것을 명시적으로 방지
	// void setData(double nParam) = delete;
};

int main()
{
	CMydata a;
	a.setData(10);	// CMydata::setData(int) 호출

	cout << a.getData() << endl;

	CMydata b;
	b.setData(5.5); // CMydata::setData(double) 호출
	cout << b.getData() << endl;

	return 0;

}
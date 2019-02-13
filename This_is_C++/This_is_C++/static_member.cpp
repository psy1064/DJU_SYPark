#include<iostream>
using namespace std;

class CTest {
	int m_nData;
	static int m_nCount;	// 정적 멤버 변수 선언
public:
	CTest(int nParam) : m_nData(nParam) { m_nCount++; }
	int getData() const { return m_nData; } 
	void resetCount() { m_nCount = 0; }

	static const int getCount()
	{
		return m_nCount;
	}

};

int CTest::m_nCount = 0; // CTest 클래스의 정적 멤버 변수 정의

int main()
{
	CTest a(5), b(10);
	cout << a.getCount() << endl;
	b.resetCount();

	cout << CTest::getCount() << endl;	// 정적 멤버의 접근은 인스턴스 없이도 가능

	return 0;
}
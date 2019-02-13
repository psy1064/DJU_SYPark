#include<iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	explicit CTest(int nParam) : m_nData(nParam) {}	// explicit 묵시적 형 변환을 막아줌
	operator int(void) { return m_nData; }	// CTest 클래스는 int 자료형으로 변환될 수 있음

	int getData() const { return m_nData; }
	void setData(int nParam) { m_nData = nParam; }
};

int main()
{
	CTest a(10);

	cout << a << endl;
	cout << a.getData() << endl;
	cout << (int)a << endl;
	cout << static_cast<int>(a) << endl;

	return 0;
}
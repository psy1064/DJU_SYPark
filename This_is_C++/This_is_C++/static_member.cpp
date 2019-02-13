#include<iostream>
using namespace std;

class CTest {
	int m_nData;
	static int m_nCount;	// ���� ��� ���� ����
public:
	CTest(int nParam) : m_nData(nParam) { m_nCount++; }
	int getData() const { return m_nData; } 
	void resetCount() { m_nCount = 0; }

	static const int getCount()
	{
		return m_nCount;
	}

};

int CTest::m_nCount = 0; // CTest Ŭ������ ���� ��� ���� ����

int main()
{
	CTest a(5), b(10);
	cout << a.getCount() << endl;
	b.resetCount();

	cout << CTest::getCount() << endl;	// ���� ����� ������ �ν��Ͻ� ���̵� ����

	return 0;
}
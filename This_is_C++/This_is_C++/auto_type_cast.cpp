#include<iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	explicit CTest(int nParam) : m_nData(nParam) {}	// explicit ������ �� ��ȯ�� ������
	operator int(void) { return m_nData; }	// CTest Ŭ������ int �ڷ������� ��ȯ�� �� ����

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
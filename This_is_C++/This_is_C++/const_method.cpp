#include<iostream>
using namespace std;

class CTest
{
	int m_nData;
	mutable int m_nData2;   // const method ������ ���Ⱑ ���
							// ��뿡 ������ ������
public:
	CTest(int nParam) : m_nData(nParam) {}
	~CTest() {}

	int getData() const // ��� ������ ���� ���� ���� ������ ������ �Ұ�
	{
		// setData(20); 
		// const method������ const method�� ȣ�� ����

		// m_nData = 20 ;
		// const method������ ����� ���� �� �� ����

		m_nData2 = 30; // mutalable�� �����߱� ������ ���� ����

		return m_nData;
	}
	int setData(int nParam)
	{
		m_nData = nParam;
	}
};

int main()
{
	CTest a(10);
	cout << a.getData() << endl;
}
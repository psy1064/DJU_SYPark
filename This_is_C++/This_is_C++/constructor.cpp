#include<iostream>
using namespace std;

class CTest {
public:
	CTest() : m_nData2(20) // �� �ٸ� �ʱ�ȭ ���
	{
		cout << "CTest() ������ �Լ�" << endl;
		m_nData = 10;
	} // �ν��Ͻ� ���� �� �ڵ� �ʱ�ȭ
	int m_nData;
	int m_nData2;
	int m_nData3 = 30;
	int m_nData4 = 40; // C++11���� ����� ���ÿ� ��� ���� �ʱ�ȭ ����

	void PrintData()
	{
		cout << m_nData << endl;
	}
	void printData2(); // �Լ� ����
};
void CTest::printData2()
{
	cout << "m_nData2 = " << m_nData2 << endl;
} // �ܺο� �и��� ��� �Լ� ����

int main()
{
	cout << "main() �Լ� ����" << endl;
	CTest t;
	t.PrintData();
	t.printData2();
	cout << t.m_nData3 << t.m_nData4 << endl;
	cout << "main() �Լ� ��" << endl;
}
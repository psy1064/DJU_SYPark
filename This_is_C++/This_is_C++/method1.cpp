#include<iostream>
using namespace std;

class CMydata
{
	int m_nData;
public:
	CMydata(int nParam) : m_nData(nParam) {}
	void print()
	{
		cout << m_nData << endl;				// m_nData�� ���� ���
		cout << CMydata::m_nData << endl;		// CMydata Ŭ������ ����� m_nData�� ���� ���
		cout << this->m_nData << endl;			// �޼��带 ȣ���� �ν��Ͻ��� m_nData ��� ���� ���
		cout << this->CMydata::m_nData << endl;	// �޼��带 ȣ���� �ν��Ͻ��� CMydata Ŭ���� ��� m_nData�� ���
	}
};

int main()
{
	CMydata a(5), b(10);
	a.print();
	b.print();

	return 0;
}
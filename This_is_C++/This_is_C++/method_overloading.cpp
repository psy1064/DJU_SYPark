#include<iostream>
using namespace std;

class CMydata
{
	int m_nData;
public:
	CMydata() : m_nData(0) {}
	int getData() { return m_nData; }
	void setData(int nParam) { m_nData = nParam; }

	// �Ű������� double�� ���� ���� ����
	// 1. �ǵ������� �߸��� �Է����� ���� ����
	void setData(double nParam) { m_nData = 0; }
	// 2. �Լ��� ȣ��Ǵ� ���� ��������� ����
	// void setData(double nParam) = delete;
};

int main()
{
	CMydata a;
	a.setData(10);	// CMydata::setData(int) ȣ��

	cout << a.getData() << endl;

	CMydata b;
	b.setData(5.5); // CMydata::setData(double) ȣ��
	cout << b.getData() << endl;

	return 0;

}
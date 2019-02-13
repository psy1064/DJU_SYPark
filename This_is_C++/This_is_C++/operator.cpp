#include<iostream>
using namespace std;

class CMydata
{
	int* m_pnData = nullptr;
public:
	CMydata(int nParam)
	{
		m_pnData = new int;
		*m_pnData = nParam;
	}
	CMydata(const CMydata& rhs)
	{
		cout << "CMydata(const CMydata&)" << endl;

		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;
	}
	~CMydata()
	{
		delete m_pnData;
	}
	CMydata& operator=(const CMydata& rhs)
	{
		*m_pnData = *rhs.m_pnData;

		return *this;
	} // �ܼ� ���� ������ �Լ� ����
	int getData()
	{
		if (m_pnData != NULL)
			return *m_pnData;
		return 0;
	}
};

int main()
{
	CMydata a(10);
	CMydata b(20);

	a = b;  // �ܼ� ������ �õ��ϸ� ���� ���� �Ͼ
			// ������ �Լ� ����
			// a.operator=(b); ó�� ǥ���� �� ����
	cout << a.getData() << endl;
	cout << b.getData() << endl;
}


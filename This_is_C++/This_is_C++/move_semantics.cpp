#include<iostream>
using namespace std;

class CTestData {
	int m_nData = 0;
public:
	CTestData() { cout << "CTestData()" << endl; }		// ����Ʈ ������
	~CTestData() { cout << "~CTestData()" << endl; }	// �Ҹ���
	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData& rhs)" << endl;
	}													// ���� ������
	CTestData(const CTestData&& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData&& rhs)" << endl;
	}													// �̵� ������ ��� �� ���� ���縦 �����Ͽ� ������ ����
	CTestData& operator=(const CTestData& rhs)
	{
		this->m_nData = rhs.m_nData;

		return *this;
	}
	int getData() const { return m_nData; }
	void setData(int nParam) { m_nData = nParam; }
};

CTestData TestFunc(int nParam)
{
	cout << "**TestFunc() : Begin **" << endl;
	CTestData a;
	a.setData(nParam);
	cout << "**TestFunc() : End ****" << endl;

	return a;
}

int main()
{
	CTestData b;
	cout << "*Before*****************" << endl;
	b = TestFunc(20);
	cout << "*After******************" << endl;
	CTestData c(b);

	return 0;
}
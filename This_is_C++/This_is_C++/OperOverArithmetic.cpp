#include<iostream>
using namespace std;

class CMYdata {
	int m_nData = 0;
public:
	CMYdata(int nParam) : m_nData(nParam)
	{
		cout << "CMYdata(int)" << endl;
	} // ��ȯ ������
	CMYdata(const CMYdata& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CMYdata(const CMYdata& rhs)" << endl;
	} // ���� ������
	CMYdata(const CMYdata&& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CMYdata(const CMYdata&& rhs)" << endl;
	} // �̵� ������

	operator int() { return m_nData; } // ����ȯ

	CMYdata operator+(const CMYdata& rhs)
	{
		cout << "operator + " << endl;
		CMYdata result(0);
		result.m_nData = this->m_nData + rhs.m_nData;
		return result;
	} // + ������ �Լ�
	CMYdata operator=(const CMYdata& rhs)
	{
		cout << "operator=" << endl;
		m_nData = rhs.m_nData;
		return *this;
	} // = ������ �Լ�
};

int main()
{
	cout << "******Begin******" << endl;
	CMYdata a(0), b(3), c(4);

	// b+c ������ �����ϸ� �̸� ���� ��ü�� ���������
	// a�� �����ϴ� ���� �� �ӽ� ��ü�̴�.
	a = b + c;
	cout << a << endl;
	cout << "*******End*******" << endl;

	return 0;
}
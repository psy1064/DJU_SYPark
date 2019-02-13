#include<iostream>
using namespace std;

class CMydata {
	int m_nData;
public:
	CMydata() { cout << "CMydata" << endl; }
	CMydata(const CMydata& rhs)
		// : m_nData(rhs.m_nData)	초기화 목록을 사용해도 좋음
	{
		this->m_nData = rhs.m_nData;
		cout << "CMydata(const CMydata&)" << endl;
	}

	int getData() const { return m_nData; }
	void setData(int nParam) {
		m_nData = nParam;
	}
};

int main()
{
	CMydata a;
	a.setData(10);

	CMydata b = a;	// CMydata b(a);
	cout << b.getData() << endl;
}
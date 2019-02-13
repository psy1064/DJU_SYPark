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
	} // 단순 대입 연산자 함수 정의
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

	a = b;  // 단순 대입을 시도하면 얕은 복사 일어남
			// 연산자 함수 정의
			// a.operator=(b); 처럼 표현할 수 있음
	cout << a.getData() << endl;
	cout << b.getData() << endl;
}


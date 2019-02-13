#include<iostream>
using namespace std;

class CMydata
{
	int* m_pnData = nullptr;
public:
	/*CMydata(int nParam) {
		m_pnData = new int;
		*m_pnData = nParam;
	}
	~CMydata()
	{
		delete m_pnData;
	}
	*/
	// 얕은 복사 시 메모리를 해제 시 오류가 발생
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
	} // 깊은 복사
	~CMydata()
	{
		delete m_pnData;
	}
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
	CMydata b(a);

	cout << a.getData() << endl;
	cout << b.getData() << endl;
}


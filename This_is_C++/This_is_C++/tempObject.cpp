#include<iostream>
#include<cstring>
using namespace std;

class CTestData {
	int m_nData = 0;
	const char* m_pszName = nullptr;
public:
	CTestData(int nParam, const char* pszName) : m_nData(nParam), m_pszName(pszName)
	{
		cout << "CTestData(int)" << m_pszName << endl;
	} // 생성자
	~CTestData()
	{
		cout << "~CTestData() : " << m_pszName << endl;
	} // 소멸자
	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData), m_pszName(rhs.m_pszName)
	{
		cout << "CTestData(const CTestData& rhs) : " << rhs.m_pszName << endl;
	}

	CTestData& operator=(const CTestData& rhs)
	{
		cout << "operator = " << endl;

		m_nData = rhs.m_nData;

		return *this;
	}

	int getData() const { return m_nData; }
	void setData(int nParam) { m_nData = nParam; }
	
};

CTestData TestFunc(int Param)	// CTestData 객체를 반환하는 함수
{
	CTestData a(Param,"a");

	return a;
}

int main()
{
	CTestData b(5, "b");

	cout << "*****before*****" << endl;

	cout << b.getData() << endl;
	
	b = TestFunc(10);
	//cout << TestFunc(10).getData() << endl;
	cout << "*****After*****" << endl;
	cout << b.getData() << endl;

	return 0;
}
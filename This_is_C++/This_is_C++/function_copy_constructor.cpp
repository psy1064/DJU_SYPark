#include<iostream>
using namespace std;

class CTestData {
	int m_nData;
public:
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}
	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData&)" << endl;
	}

	int getData() const { return m_nData; }
	void setData(int nParam) { m_nData = nParam; }
};

/*void TestFunc(CTestData param)	// 매개변수가 CTestData 클래스 형식이므로 복사 생성자가 호출
{
	cout << "TestFunc()" << endl;

	param.setData(20);
} // 값에 의한 호출 (Call by Value)
*/ 
void TestFunc(CTestData& param)
{
	cout << "TestFunc()" << endl;

	param.setData(20);
} // 참조에 의한 호출 (Call by Reference)
int main()
{
	cout << "Begin" << endl;
	CTestData a(10);
	TestFunc(a);

	cout << "a : " << a.getData() << endl;

	cout << "end" << endl;
}
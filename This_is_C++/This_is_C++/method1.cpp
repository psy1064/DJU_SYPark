#include<iostream>
using namespace std;

class CMydata
{
	int m_nData;
public:
	CMydata(int nParam) : m_nData(nParam) {}
	void print()
	{
		cout << m_nData << endl;				// m_nData의 값을 출력
		cout << CMydata::m_nData << endl;		// CMydata 클래스의 멤버인 m_nData의 값을 출력
		cout << this->m_nData << endl;			// 메서드를 호출한 인스턴스의 m_nData 멤버 값을 출력
		cout << this->CMydata::m_nData << endl;	// 메서드를 호출한 인스턴스의 CMydata 클래스 멤버 m_nData를 출력
	}
};

int main()
{
	CMydata a(5), b(10);
	a.print();
	b.print();

	return 0;
}
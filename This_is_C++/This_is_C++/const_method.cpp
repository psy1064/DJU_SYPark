#include<iostream>
using namespace std;

class CTest
{
	int m_nData;
	mutable int m_nData2;   // const method 에서도 쓰기가 허용
							// 사용에 신중을 기하자
public:
	CTest(int nParam) : m_nData(nParam) {}
	~CTest() {}

	int getData() const // 멤버 변수의 값을 읽을 수는 있지만 변경은 불가
	{
		// setData(20); 
		// const method에서는 const method만 호출 가능

		// m_nData = 20 ;
		// const method에서는 멤버의 값을 쓸 수 없음

		m_nData2 = 30; // mutalable로 선언했기 때문에 쓰기 가능

		return m_nData;
	}
	int setData(int nParam)
	{
		m_nData = nParam;
	}
};

int main()
{
	CTest a(10);
	cout << a.getData() << endl;
}
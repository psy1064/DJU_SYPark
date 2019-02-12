#include<iostream>
using namespace std;

class CTest {
public:
	CTest() : m_nData2(20) // 또 다른 초기화 방법
	{
		cout << "CTest() 생성자 함수" << endl;
		m_nData = 10;
	} // 인스턴스 생성 시 자동 초기화
	int m_nData;
	int m_nData2;
	int m_nData3 = 30;
	int m_nData4 = 40; // C++11부터 선언과 동시에 멤버 변수 초기화 가능

	void PrintData()
	{
		cout << m_nData << endl;
	}
	void printData2(); // 함수 선언
};
void CTest::printData2()
{
	cout << "m_nData2 = " << m_nData2 << endl;
} // 외부에 분리된 멤버 함수 정의

int main()
{
	cout << "main() 함수 시작" << endl;
	CTest t;
	t.PrintData();
	t.printData2();
	cout << t.m_nData3 << t.m_nData4 << endl;
	cout << "main() 함수 끝" << endl;
}
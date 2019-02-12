#include<iostream>
using namespace std;

class CTest
{
public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	} // 생성자
	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	} // 소멸자
};

class CTest2
{
	int m_nData;
public:
	CTest2(int nParam) : m_nData(nParam) 
	{
		cout << "CTest2::CTest2()" << endl;
	} // 생성자의 매개변수로 전달된 값으로 멤버 변수 초기화
	~CTest2()
	{
		cout << "~CTest2::CTest2()" << endl;
	}
};

class CRefTest
{
	int& ref;
public:
	CRefTest(int& rParam) : ref(rParam) {} // 참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화 
	int getData(void) { return ref; }
};

class CTest3
{
	int m_nData;
public:
	CTest3(int nParam) : m_nData(nParam) { }
	CTest3(int x, int y) : m_nData(x + y) { }
	// 생성자 오버로딩
	int getData() { return m_nData; }
};

class CTest4
{
	int m_x = 0;
	int m_y = 0;
	// C++11 부턴 생성과 동시에 초기화 가능
public:
	CTest4(int x)
	{
		cout << "CTest(int)" << endl;
		if (x > 100)
		{
			x = 100;
		}
		m_x = x;
	}
	CTest4(int x, int y) : CTest4(x) // 위 생성자를 호출
	{
		cout << "CTest(int,int)" << endl;
		if (y > 200)
		{
			y = 200;
		}
		m_y = y;
	}
	void print()
	{
		cout << "X = " << m_x << "Y = " << m_y << endl;
	}
};

class CTest5
{
public:
	int m_Data = 5;
	CTest5(void) = default; // 명시적 디폴트 생성자
};
int main()
{
	cout << "Begin" << endl;
	CTest a;

	CTest2 b(10); // 생성자 호출

	CTest* pdata = new CTest; // 동적 생성

	CTest* paData = new CTest[3]; // 배열 동적 생성
	
	int m = 10;
	CRefTest t(m);
	cout << t.getData() << endl;

	CTest3 c(10);
	CTest3 d(1, 100);
	// 매개변수 

	cout << c.getData() << endl;
	cout << d.getData() << endl;

	CTest4 ptBegin(110);
	ptBegin.print();

	CTest4 ptEnd(50, 250);
	ptEnd.print();

	CTest5 e;
	cout << e.m_Data << endl;
	

	delete pdata; // 객체 삭제

	delete[] paData; // 배열로 객체 삭제
	cout << "End" << endl;
}
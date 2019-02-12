#include<iostream>
using namespace std;

class CTest
{
public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	} // ������
	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	} // �Ҹ���
};

class CTest2
{
	int m_nData;
public:
	CTest2(int nParam) : m_nData(nParam) 
	{
		cout << "CTest2::CTest2()" << endl;
	} // �������� �Ű������� ���޵� ������ ��� ���� �ʱ�ȭ
	~CTest2()
	{
		cout << "~CTest2::CTest2()" << endl;
	}
};

class CRefTest
{
	int& ref;
public:
	CRefTest(int& rParam) : ref(rParam) {} // ������ ����� �ݵ�� ������ �ʱ�ȭ ����� �̿��� �ʱ�ȭ 
	int getData(void) { return ref; }
};

class CTest3
{
	int m_nData;
public:
	CTest3(int nParam) : m_nData(nParam) { }
	CTest3(int x, int y) : m_nData(x + y) { }
	// ������ �����ε�
	int getData() { return m_nData; }
};

class CTest4
{
	int m_x = 0;
	int m_y = 0;
	// C++11 ���� ������ ���ÿ� �ʱ�ȭ ����
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
	CTest4(int x, int y) : CTest4(x) // �� �����ڸ� ȣ��
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
	CTest5(void) = default; // ����� ����Ʈ ������
};
int main()
{
	cout << "Begin" << endl;
	CTest a;

	CTest2 b(10); // ������ ȣ��

	CTest* pdata = new CTest; // ���� ����

	CTest* paData = new CTest[3]; // �迭 ���� ����
	
	int m = 10;
	CRefTest t(m);
	cout << t.getData() << endl;

	CTest3 c(10);
	CTest3 d(1, 100);
	// �Ű����� 

	cout << c.getData() << endl;
	cout << d.getData() << endl;

	CTest4 ptBegin(110);
	ptBegin.print();

	CTest4 ptEnd(50, 250);
	ptEnd.print();

	CTest5 e;
	cout << e.m_Data << endl;
	

	delete pdata; // ��ü ����

	delete[] paData; // �迭�� ��ü ����
	cout << "End" << endl;
}
#include<iostream>
using namespace std;

/*void TestFunc(int nParam)
{
	cout << "TestFunc(int nParam)" << endl;
}*/
// TestFunc(int&& nParam)�� ��ȣ���� �߻�
/*
���μ� ��
	int x = 3;
	TestFunc(3);
	TestFunc(x);
	TestFunc(3+4);
*/
void TestFunc(int& nParam)
{
	cout << "TestFunc(int& nParam)" << endl;
}
/*
���μ� ��
	int x = 3;
	TestFunc(x);
*/
void TestFunc(int&& nParam)
{
	cout << "TestFunc(int&& nParam)" << endl;
}
/*
���μ� ��
	int x = 3;
	TestFunc(3);
	TestFunc(x+4);
	TestFunc(3+4);
*/
int main()
{
	int&& data = 3 + 4;		
	cout << data << endl;
	data++;
	cout << data << endl;

	TestFunc(3 + 4);
	TestFunc(data);
}
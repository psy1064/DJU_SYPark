#include<iostream>
using namespace std;

/*void TestFunc(int nParam)
{
	cout << "TestFunc(int nParam)" << endl;
}*/
// TestFunc(int&& nParam)과 모호성이 발생
/*
실인수 예
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
실인수 예
	int x = 3;
	TestFunc(x);
*/
void TestFunc(int&& nParam)
{
	cout << "TestFunc(int&& nParam)" << endl;
}
/*
실인수 예
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
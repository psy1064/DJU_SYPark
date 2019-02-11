#include<iostream>

using namespace std;

void TestFunc(int &rParam) // 매개변수가 int에 대한 참조 형식
{
	rParam = 100; // 피호출자 함수에서 원본의 값을 변경
}

void Swap(int& a, int& b)
{
	int Temp = a;
	a = b;
	b = Temp;
} // 참조 이용 호출자 변수의 값 변경
void Swap_point(int* a, int* b)
{
	int Temp = *a;
	*a = *b;
	*b = Temp;
} // 포인터 이용 호출자 변수의 값 변경
int main()
{
	int nData = 10;

	TestFunc(nData);
	cout << nData << endl;

	int x = 10, y = 20;

	Swap(x, y);

	cout << x << y << endl;

	int a = 10, b = 20;

	Swap_point(&a, &b);

	cout << a << b << endl;
}
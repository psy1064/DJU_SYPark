#include<iostream>

using namespace std;

void TestFunc(int &rParam) // �Ű������� int�� ���� ���� ����
{
	rParam = 100; // ��ȣ���� �Լ����� ������ ���� ����
}

void Swap(int& a, int& b)
{
	int Temp = a;
	a = b;
	b = Temp;
} // ���� �̿� ȣ���� ������ �� ����
void Swap_point(int* a, int* b)
{
	int Temp = *a;
	*a = *b;
	*b = Temp;
} // ������ �̿� ȣ���� ������ �� ����
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
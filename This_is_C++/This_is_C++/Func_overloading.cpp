#include<iostream>

using namespace std;

int Add(int a, int b, int c)
{
	cout << "Add(int, int, int) : ";
	return a + b + c;
}
int Add(int a, int b)
{
	cout << "Add(int, int) : ";
	return a + b;
}
double Add(double a, double b)
{
	cout << "Add(double, double) : ";
	return a + b;
}
// �Լ� �̸��� ��� ������ �Ű����� ������ �ٸ���.

int main()
{
	cout << Add(3, 4) << endl;
	cout << Add(3, 4, 5) << endl;
	cout << Add(3.0, 4.0) << endl;

	return 0;
}
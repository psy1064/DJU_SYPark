#include<iostream>
using namespace std;

template <typename T>
T TestFunc(T a)
{
	cout << "매개변수 a : " << a << endl;
	return a;
}
template <typename TA>
TA Add(TA a, TA b)
{
	return a + b;
}

int main()
{
	cout << "int\t" << TestFunc(3) << endl;
	cout << "double\t" << TestFunc(3.3) << endl;
	cout << "char\t" << TestFunc('A') << endl;
	cout << "char*\t" << TestFunc("ABCD") << endl;

	cout << Add(3, 4) << endl;
	cout << Add(3.3, 4.4) << endl;

	return 0;
}
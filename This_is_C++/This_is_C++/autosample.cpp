#include<iostream>

using namespace std;

int main()
{
	int a = 10;
	int b(a);				// int b = a;
	auto c(b);				// auto c = b; 
	
	cout << a << b << c;
	cout << a + b + c;
	return 0;
}

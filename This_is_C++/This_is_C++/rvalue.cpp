#include<iostream>

using namespace std;

int testFunc(int nParam)
{
	int nResult = nParam * 2;
	return nResult;
}
int main()
{
	int nInput = 0;
	cout << "Input Number =";
	cin >> nInput;

	int&& rdata = nInput + 5;  // 산술연산으로 만들어진 임시 객체에 대한 r-value 참조

	cout << rdata;

	int&& result = testFunc(10);
	cout << result << endl;

	return 0;
}
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

	int&& rdata = nInput + 5;  // ����������� ������� �ӽ� ��ü�� ���� r-value ����

	cout << rdata;

	int&& result = testFunc(10);
	cout << result << endl;

	return 0;
}
#include<iostream>

using namespace std;

int TestFunc(int nParam = 10)
{
	return nParam;
}
int main()
{
	cout << TestFunc() << endl;  // ȣ���ڰ� ���μ��� �������� �ʾ����Ƿ� ����Ʈ �� ����

	cout << TestFunc(100) << endl; // ȣ���ڰ� ���μ��� ���������Ƿ� ����Ʈ �� ����

	return 0;
}
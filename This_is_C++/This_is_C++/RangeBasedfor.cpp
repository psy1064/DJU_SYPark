#include<iostream>

using namespace std;

int main()
{
	int arr[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	} // C ��Ÿ���� �ݺ���

	cout << endl;

	for (auto n : arr)
	{
		cout << n;
	} // ���� ��� C++11 ��Ÿ�� �ݺ���
	  // �� ����� ���� n�� ����

	cout << endl;

	for (auto& n : arr)
	{
		n = 10 * n; // ���� �����ϱ� ���ؼ� �����ڸ� ��� �������� �����ؾ� �Ѵ�.
		cout << n;
	} // n�� �� ��ҿ� ���� ����

	cout << endl;

	return 0;
}
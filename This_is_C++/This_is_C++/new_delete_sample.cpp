#include<iostream>

using namespace std;

int main()
{
	int* pData = new int;

	int* pNewData = new int(10); // �ʱ갪�� ����ϴ� ���

	*pData = 5;

	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;
	// = delete pData, pNewData;

	int* arr = new int[5]; // �迭 ������ ���� ��ü ����

	for (int i = 0; i < 5; ++i)
	{
		arr[i] = (i + 1) * 10;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << endl;
	}
	delete[] arr; // �迭 ���·� ����

	return 0;
}
#include<iostream>

using namespace std;

int main()
{
	int* pData = new int;

	int* pNewData = new int(10); // 초깃값을 기술하는 경우

	*pData = 5;

	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;
	// = delete pData, pNewData;

	int* arr = new int[5]; // 배열 형태의 동적 개체 생성

	for (int i = 0; i < 5; ++i)
	{
		arr[i] = (i + 1) * 10;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << endl;
	}
	delete[] arr; // 배열 형태로 삭제

	return 0;
}
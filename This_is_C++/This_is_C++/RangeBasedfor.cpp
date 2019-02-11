#include<iostream>

using namespace std;

int main()
{
	int arr[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	} // C 스타일의 반복문

	cout << endl;

	for (auto n : arr)
	{
		cout << n;
	} // 범위 기반 C++11 스타일 반복문
	  // 각 요소의 값을 n에 복사

	cout << endl;

	for (auto& n : arr)
	{
		n = 10 * n; // 값을 변경하기 위해선 참조자를 요소 형식으로 선언해야 한다.
		cout << n;
	} // n은 각 요소에 대한 참조

	cout << endl;

	return 0;
}
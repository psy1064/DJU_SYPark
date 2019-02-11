#include<iostream>

using namespace std;

int main()
{
	int nData = 10;

	int& ref = nData; // nData 변수에 대한 참조자 선언

	ref = 20; // 참조자의 값을 변경하면 원본도 변경

	cout << nData << endl;

	int* pnData = &nData; // nData의 주소
	*pnData = 30;
	cout << nData << endl;
}